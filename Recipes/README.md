## Research on Tigress Recipes
### 1. Recipe #2 Virtualization and Self-Modification

The goal of transformation *Self-Modify* is to make specified functions (e.g. sum) self-modifying. It is especially useful after virtualization with a direct or indirect dispatch because most de-virtualization tools will look for indirect branches and these are now gone from the source code.

Notice that the generated obfuscated source code should be compiled to run with ` gcc --static -Wl,--omagic source_code_file_name -o executable_file_name ` in Linux.

Compared the function *sum* before and after using transformation *Self-Modify*, we conclude that transformation *Self-Modify* has impact on transformation *Virtualize*. The most intuitive difference is that *Self-Modify* inserts a binary code template into the code. The comparison results can be found [here](https://github.com/zyfeng-go/Tigress_Project/blob/main/Recipes/2/diff_results).

The running commands are saved in [Recipes/2/run.sh](https://github.com/zyfeng-go/Tigress_Project/tree/main/Recipes/2/run.sh).

### 2. Recipe #3 Virtualization and Dynamic Obfuscation
In this recipe, *Tigress* first virtualized and then added dynamic obfuscation to the source code. Notice that we got rid of transformation *Measure* because it did not matter here.

Transformation *JitDynamic* enables the program to decode and re-encode itself as it is running. Compared the function *sum* before and after using transformation *JitDynamic*, we conclude that transformation *JitDynamic* has impact on transformation *Virtualize*. The comparison results can be found [here](https://github.com/zyfeng-go/Tigress_Project/blob/main/Recipes/3/diff_results).

The running commands are saved in [Recipes/3/run.sh](https://github.com/zyfeng-go/Tigress_Project/tree/main/Recipes/3/run.sh).

### 3. Recipe #4 Merge, Virtualization, and Encode Literals
Transformation *Merge* merges multiple functions (at least two) into one. It is useful as a precursor to transformation *Virtualize*. In order to replicate recipe #4, we modified our [*tigressTest.c*](https://github.com/zyfeng-go/Tigress_Project/blob/main/Recipes/4/tigressTest.c). We inserted another function *mul* so that transformation *Merge* can be properly adapted. The source code of function *merged* can be found [here](https://github.com/zyfeng-go/Tigress_Project/blob/main/Recipes/4/func_merged).

Transformation *Encode Literals* obfuscates integer and string literals. More specifically, literal integers can be replaced with opaque expressions and literal strings can be replaced with a function that generates them during runtime. However, recipe #4 failed in our case. We've documented the failure in the next section.

The running commands are saved in [Recipes/4/run.sh](https://github.com/zyfeng-go/Tigress_Project/tree/main/Recipes/4/run.sh).

### 4. Observations
In general, we observed that the effect/impact of a transformation functions on the previous results.

*Special Notes:*
```
/* recipe #4 */
tigress --Seed=42 --Statistics=0 --Verbosity=1 --Environment=x86_64:Linux:Gcc:7.5 \
	 --Transform=InitEntropy \
		--Functions=init_tigress \
		--InitEntropyKinds=vars \
	 --Transform=InitOpaque \
		--Functions=init_tigress \
		--InitOpaqueStructs=list,array,env  \
	 --Transform=Merge \
		--MergeFlatten=false \
		--MergeName=merged \
		--Functions=mul,sum,init_tigress \
	 --Transform=Virtualize \
		--VirtualizeDispatch=direct \
		--Functions=merged \
	--Transform=EncodeLiterals \
		--Functions=merged \
	--out=recipe_4.c tigressTest.c 
```

```diff
- ❗ Recipe #4 fails. "Encode Literals" causes segmentation fault 
-   when EncodeLiteralsKinds = * and Functions = merged.
```