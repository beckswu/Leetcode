## Catalogue
* [Array](https://github.com/beckswu/Leetcode#array)
* [Greedy](https://github.com/beckswu/Leetcode#greedy) 
* [Tree](https://github.com/beckswu/Leetcode#tree) 
* [Tree 经典](https://github.com/beckswu/Leetcode#treejingdian) 
* [Math](https://github.com/beckswu/Leetcode#math) 
* [String](https://github.com/beckswu/Leetcode#string) 
* [Hash Table](https://github.com/beckswu/Leetcode#hash-table) 
* [Bit Manipulation](https://github.com/beckswu/Leetcode#bit-manipulation)
* [Stack](https://github.com/beckswu/Leetcode#stack) 
* [Queue](https://github.com/beckswu/Leetcode#queue) 
* [Heap](https://github.com/beckswu/Leetcode#heap) 
* [Linked List](https://github.com/beckswu/Leetcode#linked-list) 
* [Two Pointer](https://github.com/beckswu/Leetcode#two-pointer) 
* [Sort](https://github.com/beckswu/Leetcode#sort) 
* [Recursion](https://github.com/beckswu/Leetcode#recursion) 
* [Binary Search](https://github.com/beckswu/Leetcode#binary-search) 
* [Binary Search Tree](https://github.com/beckswu/Leetcode#binary-search-tree) 
* [Depth First Search](https://github.com/beckswu/Leetcode#depth-first-search) 
* [Backtracking](https://github.com/beckswu/Leetcode#backtracking) 
* [Dynamic Programming](https://github.com/beckswu/Leetcode#dynamic-programming) 
* [Regular Expression Summary](https://github.com/beckswu/Leetcode#regular-expression-summary)
* [Sliding Window Summary](https://github.com/beckswu/Leetcode#sliding-windows-summary)
* [Graph](https://github.com/beckswu/Leetcode#graph)
* [Design](https://github.com/beckswu/Leetcode#design)
* [Bash](https://github.com/beckswu/Leetcode#Bash)

Python trick: 
1. ```\*``` 可以把generator 变成list, 比如```[*zip(*matrix)] = list(zip(*matrix))```
2. ```join``` 可以直接加generator, 比如 ```"".join(map(func, S))```
3. list 用于 inside function, 不能用 ```list += []```, 只能用```append```

 😍 反复看的题<br/>
 😚 反复看的题 II (low priority)<br/>
:alien:, 💡 比较tricky, 有陷阱<br/>
 🔍 偏算法逻辑<br/>
:pencil2: 聪明的code 写法 <br/>
 🎅 偏思维逻辑 <br/>
 🌒, ❌ 不用太看的题目<br/>
 🐸 brainstorming <br/>

几个单独算法:
1. Trie
2. Union Find 


  ## Breadth-First Search
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [102. Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | _O(n)_ | _O(n)_	| Medium | |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |
 
 
 ## Array
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [015. 3 Sum](https://leetcode.com/problems/3sum/) | _O(n^2)_ | _O(1)_	| Medium | 🔍问题关键是sort + skip duplicate |
| [016. 3 Sum Closest](https://leetcode.com/problems/3sum-closest/) | _O(n^2)_ | _O(1)_	| Medium | 🔍sort + two pointer，根据three sum 和sorted list移动两个pointers |
| [018. 4 Sum](https://leetcode.com/problems/4sum/) | _O(n^3)_ | _O(1)_	| Medium | 🔍sort + two pointer，思路和[015. 3 Sum](https://leetcode.com/problems/3sum/) 一样 |
| [026. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | _O(n)_ | _O(1)_	| Easy | Two pointer |
| [027. Remove Element](https://leetcode.com/problems/remove-element/) | _O(n)_ | _O(1)_	| Easy | Two pointer |
| [031. Next Permutation](https://leetcode.com/problems/next-permutation/) | _O(n)_ | _O(1)_	| Medium | 跟[556.	Next Greater Element III](https://leetcode.com/problems/next-greater-element-iii/) 思路类似, C++可以用is_sorted_until + upper_bound()  |
| [041. First Missing Positive](https://leetcode.com/problems/first-missing-positive/) | _O(n)_ | _O(1)_	| Hard | 🔍先置换, 把每个元素放在合适位置，再看A\[i] == i+1 ? 不等于 return i+1, 最后如果还没return, return size +1 |
| [048. Rotate Image](https://leetcode.com/problems/rotate-image/) | _O(n^2)_ | _O(1)_	| Medium | 🔍<ul><li> 上下左右四个区域，每个区域相互置换 </li><li> 先以左下到右上对角线置换，然后上下换 </li></ul>|
| [054. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) | _O(m\*n)_ | _O(1)_	| Medium | 🔍定义 up, down, left, right 四个边界，每次loop 在最外围的一圈 |
| [059. Spiral Matrix II](https://leetcode.com/problems/spiral-matrix-ii/) | _O(n^2)_ | _O(1)_	| Medium | 🔍思路跟[048. Rotate Image](https://leetcode.com/problems/rotate-image/)  和 [054. Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) 类似 |
| [066. Plus One](https://leetcode.com/problems/plus-one/) | _O(n)_ | _O(1)_	| Easy | |
| [073. Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/) | _O(m\*n)_ | _O(1)_	| Medium | 🔍two pass:1. 把如果matrix\[i]\[j] == 0, 把matrix\[i]\[0] 和matrix\[0]\[j] 设为0, 如果第一列设0之前，有数为0，设col0 = 0。 2.从下往上loop, 碰到matrix\[i]\[0]] or matrix\[0]\[j] 为0, matrix\[i]\[j] = 0, if col0 == 0, matrix\[i]\[0] = 0|
| [080. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) | _O(n)_ | _O(1)_	| Medium | |
| [118. Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/) | _O(n^2)_ | _O(1)_	| Easy | |
| [119. Pascal's Triangle II	](https://leetcode.com/problems/pascals-triangle-ii/) | _O(n^2)_ | _O(1)_	| Easy | Easy DP |
| [121. Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | _O(n)_ | _O(1)_	| Easy |  |
| [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | _O(n)_ | _O(n)_	| Hard | 🔍 <ul><li>先把所有数放进hash set 然后每次pop一个数n，设lower = n-1, upper = n+1, 持续pop lower--, upper++,直到lower,upper不在set里, 结果是max(res, upper-lower-1) </li><li>Onepass: 用hashmap记录以现在点作为边界点最大连续长，一边loop一边update不同左右边界值</li></ul>|
| [169. Majority Element](https://leetcode.com/problems/majority-element/) | _O(n)_ | _O(1)_	| Easy | |
| [189. Rotate Array](https://leetcode.com/problems/rotate-array/) | _O(n)_ | _O(1)_	| Easy | |
| [209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) | _O(n)_ | _O(1)_	| Medium | 🔍 <ul><li>sliding window: 到sum >= s, 移动左面, 不断减小window且sum>=s, 寻找最小 r-l+1 </li><li>binary search: l = 1, r= size, while l<=r,检查mid作为窗口size是否满足>=s  </li><li>binary search: 建一个新的vector, newsum\[i] 表示nums\[0:i]的sum, 从新的newsum的每个点作为起点找最小满足s的窗口</li></ul> |
| [215.	Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | _O(n) ~ O(n^2)_ | _O(1)_	| Medium | 🔍 <ul><li> quick selection(nth_element) </li><li>heap: priority queue / multiset</li></ul> |
| [228. Summary Ranges](https://leetcode.com/problems/summary-ranges/) | _O(n)_ | _O(1)_	| Medium |  |
| [229. Majority Element II](https://leetcode.com/problems/majority-element-ii/) | _O(n)_ | _O(1)_	| Medium | 🔍Boyer-Moore Majority Vote algorithm |
| [238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | _O(n)_ | _O(1)_	| Medium | 🔍res\[i]表示 nums\[0: i-1]的乘积，right 记录从结尾到nums\[i+1: end]的乘积. 最后res\[i] = res\[i] * right; 也可以用left, right One Pass |
| [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) | _O(n+m)_ | _O(1)_	| Medium | 🔍sorted matrix题目的关键是从第一行最后一个开始，如果当前数比想要的大, --col, 如果当前数比想要的小，++row|
| [289. Game of Life](https://leetcode.com/problems/game-of-life/) | _O(m \* n)_ | _O(1)_	| Medium | 🔍跟[238. Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/)有一点点类似，先变化matrix到想要的格式, 然后再做transform到结果: 把下一代活的| 2, 个位为1表示现在是活的，十位为1表示下代活的，res把每个cell>>=2 |
| [334. Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/) | _O(n)_ | _O(1)_	| Medium | 🔍用两个数表示b, c, c表示当前最小, b表示当前第二小, 当i都大于这两个数，return true, 不用担心i只更新更新c, 因为答案必须要迈过b |
| [384. Shuffle an Array	](https://leetcode.com/problems/shuffle-an-array/) | _O(n)_ | _O(n)_	| Medium | C++ srand(time(NULL)); rand(); uniform_int_distribution |
| [396. Rotate Function](https://leetcode.com/problems/rotate-function/) | _O(n)_ | _O(1)_	| Medium | 🔍mathematical induction F(k) = F(k-1) + sum - nBk\[-k] |
| [412. Fizz Buzz](https://leetcode.com/problems/fizz-buzz/) | _O(n)_ | _O(1)_	| Easy |  |
| [414. Third Maximum Number](https://leetcode.com/problems/third-maximum-number/) | _O(n)_ | _O(1)_	| Easy |  |
| [419. Battleships in a Board](https://leetcode.com/problems/battleships-in-a-board/) | _O(n\*m)_ | _O(1)_	| Medium | 🔍看源头，if \[i]\[j] = 'X' 且 \[i-1]\[j] 和 \[i]\[j-1] 如果都不是X，count += 1 |
| [442. Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/) | _O(n)_ | _O(1)_	| Medium | <ul><li>把nums\[i]-1作为Index, 把nums\[index] 变成负数，如果即将变得已经是负数，代表重复</li><li>把nums\[i]-1作为Index,把nums\[i] 通过swap到nums\[index]上, 第二次pass, 如果nums\[i]!=i+1, 表示重复的</li></ul> |
| [448. Find All Numbers Disappeared in an Array](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/) | _O(n)_ | _O(1)_	| Medium | 思路与[442. Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/)一模一样，两种方法也一样  |
| [565. Array Nesting](https://leetcode.com/problems/array-nesting/) | _O(n)_ | _O(1)_	| Medium | DFS, 把visit的点变为-1, nest array是循环，所以起点无论是哪个点进入都可以得到完整的循环, 比如 a->b->c->d->a 不会有 a->b->c->d->b |
| [566. Reshape the Matrix](https://leetcode.com/problems/reshape-the-matrix/) | _O(m\*n)_ | _O(1)_	| Easy |  |
| [581. Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) | _O(n)_ | _O(1)_	| Easy | 🔍<ul><li>从左起, 最后一个小于左侧最大的数为 right,从右起，最后一个大于右侧最小的数为left, res = right - left + 1 </li><li> two pointer, 当有数小于current max, 往回开始找起点start, start只能减小, end只能增加,  res = end - start + 1</li></ul>  |
| [605. Can Place Flowers](https://leetcode.com/problems/can-place-flowers/) | _O(n)_ | _O(1)_	| Easy |  |
| [643.	Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/) | _O(n)_ | _O(1)_	| Easy | 最简单的sliding window |
| [661. Image Smoother](https://leetcode.com/problems/image-smoother/) | _O(n)_ | _O(1)_	| Easy | 跟[289. Game of Life](https://leetcode.com/problems/game-of-life/)思路一样， 一点不一样的是把下一代的数右移8个bit, 之后再第二次pass matrix, 每个点>>8 左移8个bits |
| [665. Non-decreasing Array](https://leetcode.com/problems/non-decreasing-array/) | _O(n)_ | _O(1)_	| Easy | 🔍两种operation: 1.nums\[i-1] = nums\[i] (降), nums\[i] = nums\[i-1] (升), 降优于升 |
| [667. Beautiful Arrangement II](https://leetcode.com/problems/beautiful-arrangement-ii/) | _O(n)_ | _O(1)_	| Meidum | 🔍brainstorm |
| [670. Maximum Swap](https://leetcode.com/problems/maximum-swap/) | _O(n)_ | _O(1)_	| Medium | 🔍<ul><li>Two Pass: 第一个pass 记录每个digit最后出现位置, 第二个pass: 如果有大于当前digit出现, swap & return</li><li>One Pass: 从后往前, 记录最大数的index,如果当前数小于最大数,更新进行swap的两个index，最后</li></ul> |
| [674. Longest Continuous Increasing Subsequence](https://leetcode.com/problems/longest-continuous-increasing-subsequence/) | _O(n)_ | _O(1)_	| Easy |  |
| [697. Degree of an Array](https://leetcode.com/problems/degree-of-an-array/) | _O(n)_ | _O(n)_	| Easy |  |
| [713. Subarray Product Less Than K](https://leetcode.com/problems/subarray-product-less-than-k/) | _O(n)_ | _O(1)_	| Medium | 🔍😍 Sliding Window  |
| [845. Longest Mountain in Array](https://leetcode.com/problems/longest-mountain-in-array/) | _O(n)_ | _O(1)_	| Medium | 🐸 |
| [918. Maximum Sum Circular Subarray](https://leetcode.com/problems/maximum-sum-circular-subarray/) | _O(n)_ | _O(1)_	| Medium | 🎅🎅 [Kadane's algorithm](https://github.com/beckswu/Leetcode/blob/master/Array/918.%20Maximum%20Sum%20Circular%20Subarray.cpp#L37) |
| [997. Find the Town Judge](https://leetcode.com/problems/find-the-town-judge/) | _O(n+t)_ | _O(n)_	| Easy | 🎅 [In-degree, out-degree](https://github.com/beckswu/Leetcode/blob/master/Array/997.%20Find%20the%20Town%20Judge.cpp#L28)  |
| [1375. Bulb Switcher III](https://leetcode.com/problems/bulb-switcher-iii/) | _O(n)_ | _O(1)_	| Medium |  |
| [1380. Lucky Numbers in a Matrix](https://leetcode.com/problems/lucky-numbers-in-a-matrix/) | _O(m\*n)_ | _O(m+n)_	| Easy | [```zip(*m)```获得column in list, set intersection](https://github.com/beckswu/Leetcode/blob/master/Array/1380.%20Lucky%20Numbers%20in%20a%20Matrix.py#L35) |
| [1389. Create Target Array in the Given Order](https://leetcode.com/problems/create-target-array-in-the-given-order/)	|	_O(n^2)_  |	_O(1)_|	Easy |  ❌ |
| [1394. Find Lucky Integer in an Array	](https://leetcode.com/problems/find-lucky-integer-in-an-array/)	|	_O(n)_  |	_O(n)_|	Easy |  :pencil2: [Loop C++ Map Key Value](https://github.com/beckswu/Leetcode/blob/master/Array/1394.%20Find%20Lucky%20Integer%20in%20an%20Array.cpp#L6) |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |


 
## Greedy
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [011. Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | _O(n)_ | _O(1)_	| Medium | 🔍要按照高度来动左面和右面pointer, if height\[i]==h -> i++, if height\[j]==h -> j--, 不可以按照height前后大小if height\[i+1] >= height\[i], i++，这样会错失高度 |
| [042. Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | _O(n)_ | _O(1)_	| Hard | 🔍💡<ul><li>一点一点提高safe level, leftmost 代表左面最高值，rightmost表示右面最高值，谁小update 现在高度</li><li>Descending Stack: 当新高度小于现在stack的高度,update water, stack top代表底的高度, bar = stack.pop(); 否则push 现在的高度index,注意pop每次一个，否则有起伏高度不好算 </li></ul> |
| [044. Wildcard Matching](https://leetcode.com/problems/wildcard-matching/) | _O(n\*m)_ | _O(1)_	| Hard | dp or greedy |
| [045. Jump Game II](https://leetcode.com/problems/jump-game-ii/) | _O(n)_ | _O(1)_	| Hard | 🔍 <ul><li>在现有可以jump 的区域里，找这一步加上下一步可以跳的最远的, 下一次index到这个最远的index </li><li>找目前可以跳的范围内(这一跳加上下一跳)最远的点为curfastest, 当到curend时，更新curend最远点为curfast </li></ul> |
| [055. Jump Game](https://leetcode.com/problems/jump-game/) | _O(n)_ | _O(1)_	| Medium | 🔍 只有当nums\[i] = 0时，才会有可能到不了终点，看nums\[i]=0之前的点能不能跨过0点 |
| [122. Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/) | _O(n)_ | _O(1)_	| Medium |  |
| [134. Gas Station](https://leetcode.com/problems/gas-station/description/) | _O(n)_ | _O(1)_	| Medium | if sum(gas)>sum(cost)有解, 起点是最后一个累计sum为负后的点  |
| [135. Candy](https://leetcode.com/problems/candy/) | _O(n)_ | _O(n) O(1)_	| Hard | 🔍 开始把每个人糖assign为1，从左面和右面各loop一回，如果比邻居rate大，比较现在糖数和邻居值+1，keep大的 |
| [316. Remove Duplicate Letters](https://leetcode.com/problems/remove-duplicate-letters/) | _O(n)_ | _O(k)_	| Hard | 🔍 Ascending Stack, 可以用string 做stack, pop时候看cur char是不是在现在stack中(不重复)，还看后面有没有一样top(有一个再插入) |
| [321.	Create Maximum Number](https://leetcode.com/problems/create-maximum-number/) | _O((m+n)^3)_ | _O(k)_	| Hard | 🔍 💡  tricky, 生成array时，除了考虑后面剩下的可不可以补充上drop，还可以考虑总共要去掉len - k个 |
| [330. Patching Array](https://leetcode.com/problems/patching-array/) | _O(s + logn)_ | _O(1)_	| Hard | 🔍 tricky, 当num <= miss 表示\[0,miss)已经满足, miss+=num; else, miss\*=2, patch++ |
| [376.Wiggle Subsequence](https://leetcode.com/problems/wiggle-subsequence/) | _O(n)_ | _O(1)_	| Medium | 看有几个正负转化💡 可以用dp, python 可以用 |
| [392. Is Subsequence](https://leetcode.com/problems/is-subsequence/) | _O(n)_ | _O(1)_	| Medium | 🔍😍 easy two pointer or C++ iterator; follow-up可以用binary search; Python in iter()  |
| [397. Integer Replacement](https://leetcode.com/problems/integer-replacement/description/) | _O(log(n))_ | _O(1)_	| Medium | 🔍 tricky,如果是奇数, 看第二个bit决定+1, -1 |
| [402.	Remove K Digits](https://leetcode.com/problems/remove-k-digits/) | _O(n)_ | _O(n)_	| Medium | 😍 ascending stack |
| [435.	Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) | _O(nlogn)_ | _O(1)_	| Medium | 💡 不要想最少删除几个，看最多可以有几个构成non-overlap的区间; Python 可以用 iter() |
| [452. Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) | _O(nlogn)_ | _O(1)_	| Medium | 🔍💡  跟[435.	Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/), [056. Merge Intervals](https://leetcode.com/problems/merge-intervals/), [057. Insert Interval](https://leetcode.com/problems/insert-interval/) 类似 可以sort start 也可以sort end; Python 可以用 iter() |
| [455. Assign Cookies](https://leetcode.com/problems/assign-cookies/) | _O(nlogn)_ | _O(1)_	| Easy |  |
| [621. Task Scheduler](https://leetcode.com/problems/task-scheduler/) | _O(n)_ | _O(1)_	| Medium |🔍 用最多的字母和cooling interval构建框架, or priority_queue 代表当前可以取的字母个数 + map用于缓存  |
| [630. Course Schedule III](https://leetcode.com/problems/course-schedule-iii/) | _O(nlogn)_ | _O(k)_	| Hard |🔍 💡 移花接木  |
| [646.	Maximum Length of Pair Chain](https://leetcode.com/problems/maximum-length-of-pair-chain/) | _O(nlogn)_ | _O(1)_	| Medium |🔍 跟 [435.	Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)思路一样|
| [649.	Dota2 Senate](https://leetcode.com/problems/dota2-senate/) | _O(n)_ | _O(n)_	| Medium |🔍💡  tricky, 一个一个R和D比，index小的赢，直到一方全军覆没 |
| [659. Split Array into Consecutive Subsequences](https://leetcode.com/problems/split-array-into-consecutive-subsequences/) | _O(n)_ | _O(n)_	| Medium |🔍💡tricky, 先看能不能以append i 到i-1的sequence,再看能不能建立新的起点 |
| [738.	Monotone Increasing Digits](https://leetcode.com/problems/monotone-increasing-digits/) | _O(1)_ | _O(1)_	| Medium |🔍brainstorming |
| [757. Set Intersection Size At Least Two](https://leetcode.com/problems/set-intersection-size-at-least-two/) | _O(nlogn)_ | _O(1)_	| Hard |🔍 💡 判断每个点是不是小于等于largest 和second largest ，如果只小于等于largest, res+=1; 如果都不小，res+=2 |
| [763.	Partition Labels](https://leetcode.com/problems/partition-labels/) | _O(n)_ | _O(n)_	| Medium |🔍😍💡  <ul><li>用hashmap记录最后char的出现位置; loop S时候，取最大的最后位置，当最大最后位置与现在位置吻合，make cut </li><li>sliding window, 前进window当现在s不是最后出现 </li></ul> |
| [767. Reorganize String](https://leetcode.com/problems/reorganize-string/) | _O(n)_ | _O(1)_	| Medium |🔍 💡😍priority_queue  |
| [798. Smallest Rotation with Highest Score](https://leetcode.com/problems/smallest-rotation-with-highest-score/) | _O(n)_ | _O(1)_	| Hard |🔍 每次从0到A.length-1得一分，A\[i]从i到i-1减一分  |
| [843. Guess the Word](https://leetcode.com/problems/guess-the-word/) | _O(n^2)_ | _O(n)_	| Hard |🔍 猜频率最大的词 或者 选取与其他词重合最多个数的中最小bar的 作为guess的单词(最多中最小的，代表分布平均, eliminate时候可以删更多)，然后根据return 值缩小范围 |
| [861. Score After Flipping Matrix](https://leetcode.com/problems/guess-the-word/) | _O(m \* n)_ | _O(1)_	| Medium |🔍 先保证第一列全是1, 然后决定toggle每一列从再最大化每一列 |
| [870. Advantage Shuffle](https://leetcode.com/problems/advantage-shuffle/) | _O(nlogn)_ | _O(n)_	| Medium |🔍😍 sort \ maxheap \ minheap |
| [881. Boats to Save People](https://leetcode.com/problems/boats-to-save-people/) | _O(nlogn)_ | _O(n)_	| Medium | two pointer |
| [1249. Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/) | _O(n)_ | _O(1)_	| Medium | Stack |
| [1386. Cinema Seat Allocation](https://leetcode.com/problems/cinema-seat-allocation/) | _O(n)_ |	_O(n)_	| Medium | ❌ |
| [1419	Minimum Number of Frogs Croaking](https://leetcode.com/problems/minimum-number-of-frogs-croaking/) | _O(n)_ |	_O(1)_	| Medium | 需保证 counter 递增 ```c>r>o>a>k```  |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |

## Tree

```c++
//Inorder Traversal
//stack, 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>stk;
        while(root || !stk.empty()){
            if(root){
               // res.push_back(cur->val);  //Preorder
                stk.push(root);
                root = root->left;
            }else{
                root = stk.top(); stk.pop();
               // res.push_back(root->val); //Inorder
                root = root->right;
            }
        }
        return res;
    }
};

//Postorder
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> stk;
        vector<int>res;
        TreeNode* cur = root;
        while(cur ||!stk.empty()){
            if(cur){
                res.push_back(cur->val);
                stk.push(cur);
                cur = cur->right;
            }else{
                cur = stk.top(); stk.pop();
                cur = cur->left;
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};

//Morris: 流程图见,  094. Binary Tree Inorder Traversal.cpp
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        TreeNode* cur = root;
        while(cur){
            if(!cur->left)
            {
                //res.push_back(cur->val); //Inorder, preorder
                cur = cur->right;
            }else{
                TreeNode* pre = cur->left;
                while(pre->right && pre->right!=cur)
                    pre = pre->right;
                if(pre->right){
                    //res.push_back(cur->val); //Inorder
                    pre->right = NULL; 
                    cur = cur->right;
                }
                else{
                    //res.push_back(cur->val); //Pre-order
                    pre->right = cur;
                    cur = cur->left;
                }
            }
        }
        return res;
    }
};


//PostOrder
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        TreeNode* cur = root;
        while(cur){
            if(!cur->right){
                res.push_back(cur->val);
                cur = cur->left;
            }else{
                TreeNode* pre = cur->right;
                while(pre->left && pre->left != cur)
                    pre = pre->left;
                if(pre->left){
                    pre->left = NULL;
                    cur = cur->left;
                }else{
                    res.push_back(cur->val);
                    pre->left = cur;
                    cur = cur->right;
                }
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};


//如果有right child, 经过root 两次 
//112. Path Sum  https://leetcode.com/problems/path-sum/
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        stack<TreeNode*>stk;
        TreeNode* cur = root, *pre = nullptr;
        while(cur || !stk.empty()){
            if(cur){
                stk.push(cur);
                sum -= cur->val;
                cur = cur->left;       
            }else{
                cur = stk.top();
                if(!cur->right && !cur->left && sum == 0)
                     return true;
                
                if(cur->right && cur->right != pre){
                    cur = cur->right;
                }
                else{
                    pre = cur;
                    sum += cur->val;
                    cur = nullptr;
                    stk.pop();
                }
            }
        }
        return false;
    }
};


//In order traversal, 不同于之前的iterative 解, 这是每个node 都先被push 进stack, 只有return back时候才pop
/*
详见  236. Lowest Common Ancestor of a Binary Tree
https://github.com/beckswu/Leetcode/blob/master/DFS/236.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree.cpp#L32，
     1
    /
    2 
     \
      3  

最上面的inorder 的 stack 到3时候是  [1，3 
        下面解的stack 是 到3是   [1,2,3]

*/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //iterative, path comparing
        if(!root ) return root;
        vector<TreeNode*> path;
        if(root)
            path.push_back(root); //temp是stack，元素是从root到现在node上的路径
        TreeNode *prev = nullptr;
        while(!path.empty()){
            root=temp.back();
            if(!root->left && !root->right || !root->right && prev==root->left || root->right && prev==root->right){
                path.pop_back();
                prev=root;
            }
            else{
                if(!root->left || prev==root->left) path.push_back(root->right);
                else path.push_back(root->left);
            }
        }
    }
};


TreeNode* helper(TreeNode** head ){
        int val = *head; //获取值, 比如值是5,
        TreeNode** cur = head; //
        head = &((*head)->left); //不会影响之前cur的值， 把head assign 一个新object, 之前绑定head的地址(cur)的object 并没有删除 
        *head = (*head)->left; //会影响cur的值， *head 取地址, 改变head这个地址绑定的值, 因为cur 和head地址一样 , 所以cur的值也改变
        return cur;
    }

//比如: 
 void helper(int *p){
     int *newp = p;
     *p = 5; //会影响newp的值, 因为newp 和 p地址一样，更改的p的值， newp自动会更改
     p = new int(10); // 不会更改newp 的值, 因为p的地址被换掉了, 之前绑定p的地址并没有删除
 }

```




|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [094. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | _O(n)_ | _O(1)_	| Medium | 😍🔍Morris Traversal, 现在点连在 left-child 最右侧的node 右侧, 因为最右侧的node 最后visit |
| [099	Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/) | _O(n)_ | _O(1)_	| Hard | 🔍😚 调换node 之间第一个最错误的（也是最大的prev），和最后一个错误（也是最小的cur），💡顺序一定是inorder，由小到大 |
| [144. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | _O(n)_ | _O(1)_	| Medium | Morris Traversal,注意preorder 与inorder push 进vector的顺序的区别 |
| [145. Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) | _O(n)_ | _O(1)_	| Hard | = 先right 再left 的 inorder traversal  🔍Morris Traversal |
| [208. Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) | _O(n)_ | _O(1)_	| Medium | Trie |
| [211. Add and Search Word - Data structure design](https://leetcode.com/problems/add-and-search-word-data-structure-design/) | _O(min(n, h))_ | _O(min(n, h))_	| Medium | Trie + DFS |
| [226.	Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | _O(n)_ | _O(h), O(w))_	| Easy | :alien:  不可以 ```left = invert(right); right = invert(left);```, 因为left 在invert right时候改变  |
| [297. Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/) | _O(n)_ | _O(h)_	| Hard | :pencil2:```ostringstream``` & ```istringstream ``` 用法, BFS－> pointer of pointer 存pointer 地址  |
| [307. Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/) | _O(n), O(logn)_ | _O(n)_	| Medium | :pencil2: BIT & Segment Tree; BIT tree 需要arr作为参照物,每次根据val-arr\[i]的update, update过后arr\[i] = val |
| [525. Contiguous Array](https://leetcode.com/problems/contiguous-array/) | _O(n)_ | _O(n)_	| Medium | 😍把所有的0变成-1， 所以当有sum\[i,j] = 0时 => \[i,j]中有同等的1 和 0， same as [325. Maximum Size Subarray Sum Equals k](https://leetcode.com/problems/maximum-size-subarray-sum-equals-k/)  |
| [529. Minesweeper](https://leetcode.com/problems/minesweeper/) | _O(m \* n)_ | _O(m + n)_	| Medium |❌ 简单DFS |
| [538. Convert BST to Greater Tree](https://leetcode.com/problems/convert-bst-to-greater-tree/) | _O(n)_ | _O(h)_	| Easy | 😍注意Python BFS  |
| [543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/) | _O(n)_ | _O(h)_	| Easy | 🔍先尽可能dfs，再比较height 会更快 |
| [563. Binary Tree Tilt](https://leetcode.com/problems/binary-tree-tilt/) | _O(n)_ | _O(n)_	| Easy | ❌思路跟[543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/) 一样|
| [572. Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/) | _O(m \* n)_ | _O(h)_	| Easy | 😍 seralization  |
| [606. Construct String from Binary Tree](https://leetcode.com/problems/construct-string-from-binary-tree/) | _O(n)_ | _O(h)_	| Easy | ❌ Easy Recursion |
| [617. Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees/) | _O(n)_ | _O(h)_	| Easy | 😍 |
| [623. Add One Row to Tree](https://leetcode.com/problems/add-one-row-to-tree/) | _O(n)_ | _O(h)_	| Medium | 😚 |
| [637. Average of Levels in Binary Tree](https://leetcode.com/problems/average-of-levels-in-binary-tree/) | _O(n)_ | _O(h)_	| Easy | ❌ |
| [652. Find Duplicate Subtrees](https://leetcode.com/problems/find-duplicate-subtrees/) | _O(n)_ | _O(n)_	| Medium |😍🔍 Seralization(String的memory 是 O(n^2)) / Hash, C++ 有定义hash. 注: 无须seralize 完整后再寻找, [analysis](https://leetcode.com/problems/find-duplicate-subtrees/discuss/106016/O(n)-time-and-space-lots-of-analysis)   |
| [653. Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/) | _O(n)_ | _O(h)_	| Easy |😍🔍可以考怎么写 BST Iterator |
| [654. Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/) | _O(n)_ | _O(h)_	| Medium |😍🔍💡 descending stack: <ul><li> 如果现在数 num\[i] 小于stack top，stack.top->right = new TreeNode(nums\[i]) </li><li> 如果现在num\[i] 大于stack top，就不断pop stack 找最后一个小于nums\[i]的node，把最后的node 作为nums\[i]的left child </li></ul>  |
| [655. Print Binary Tree](https://leetcode.com/problems/print-binary-tree/) | _O(n)_ | _O(h)_	| Medium | Math找规律 |
| [662. Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/) | _O(n)_ | _O(h)_	| Medium | ❌ Math 找规律, 逻辑跟[655. Print Binary Tree](https://leetcode.com/problems/print-binary-tree/)类似 |
| [677. Map Sum Pairs](https://leetcode.com/problems/map-sum-pairs/) | _O(n)_ | _O(t)_	| Medium |  ❌Simple Trie |
| [684. Redundant Connection](https://leetcode.com/problems/redundant-connection/) | _O(n)_ | _O(n)_	| Medium | 🔍Union Find 如果两个node 连接之前发现parent 已经一样，表示之前两个nodes已经连接，如果再连接edge，会构成cycle |
| [685. Redundant Connection II](https://leetcode.com/problems/redundant-connection-ii/) | _O(n)_ | _O(n)_	| Hard | Union Find 注意构成tree 的条件, 不能有一个child 连上两个parent, 然后去掉这个child一个链，保证都是一个child对应一个parent, 再看有没有cycle, 没有cycle表示去链去成功了, 有cycle 表示去链去错了 |
| [687. Longest Univalue Path](https://leetcode.com/problems/longest-univalue-path/) | _O(n)_ | _O(h)_	| Easy | 😍 Really good Recussive Question! |
| [699. Falling Squares](https://leetcode.com/problems/falling-squares/) | _O(nlogn)_ | _O(n)_	| Hard | 😍Good Question! **若想找点属于 哪个范围之中 比如 3∈ (1,5) or (7,9) , 用map + binary search**  <ul><li> solution 1: 解法与 [218. The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/)相似, 画轮廓 </li><li>Solution 2: Segment Tree using lazy initialization: 需要注意update即使不在范围内，也要返回root.val, update还要更新root.val为max值 </li></ul> |
| [814. Binary Tree Pruning](https://leetcode.com/problems/binary-tree-pruning/) | _O(n)_ | _O(h)_	| Medium | 😍Really good question! |
| [850. Rectangle Area II](https://leetcode.com/problems/rectangle-area-ii/description/) | _O(nlogn)_ | _O(h)_	| Hard | 🔍💡跟[699. Falling Squares](https://leetcode.com/problems/falling-squares/)思路有点像, 根据height一层一层的算当层长方体面积,算完面积后更新上一层的底curx |
| [863. All Nodes Distance K in Binary Tree](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/) | _O(n)_ | _O(h)_	| Medium | 😍😍Really good question! 不必纠结于one pass, 需要child -> parent map |
| [865. Smallest Subtree with all the Deepest Nodes](https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/) | _O(n)_ | _O(h)_	| Medium | 🔍 若left, right child 都是最深的, 则root为 最深的node |
| [889. Construct Binary Tree from Preorder and Postorder Traversal	](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/) | _O(n)_ | _O(h)_	| Medium | 😍😍 <ul><li>Solution 1: 难点是找到 left 和right的边界: 假定都把下一个assign 给left </li><li> 用stack </li></ul> |
| [1008. Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/) | _O(n)_ | _O(h)_	| Medium | 🎅[Stack, Recursion, Morris Traversal](https://github.com/beckswu/Leetcode/blob/master/Tree/1008.%20Construct%20Binary%20Search%20Tree%20from%20Preorder%20Traversal.cpp#L1) |
| [1028. Recover a Tree From Preorder Traversal](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/) | _O(n)_ | _O(h)_	| Hard | 😚 stack / DFS, stack逻辑类似[889. Construct Binary Tree from Preorder and Postorder Traversal	](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/) |
| [1409. Queries on a Permutation With Key](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/) | _O(nlogn)_ | _O(n)_	| Medium | BIT, Fenwick Tree, [🎅 How to Build FenwickTree](https://github.com/beckswu/Leetcode/blob/master/Tree/1409.%20Queries%20on%20a%20Permutation%20With%20Key.py#L18)  |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |


## Math
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [007. Reverse Integer](https://leetcode.com/problems/reverse-integer/) | _O(1)_ | _O(1)_	| Easy |  |
| [009. Palindrome Number](https://leetcode.com/problems/palindrome-number/) | _O(1)_ | _O(1)_	| Easy |  |
| [012. Integer to Roman](https://leetcode.com/problems/integer-to-roman/) | _O(n)_ | _O(1)_	| Medium |  |
| [013. Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | _O(n)_ | _O(1)_	| Easy |  |
| [1360. Number of Days Between Two Dates](https://leetcode.com/problems/number-of-days-between-two-dates/) | _O(1)_ | _O(1)_	| Easy |  |
| [1362. Closest Divisors](https://leetcode.com/problems/closest-divisors/) | _O(sqrt(n))_ | _O(1)_	| Medium |  |
| [1363. Largest Multiple of Three](https://leetcode.com/problems/largest-multiple-of-three/) | _O(n)_ | _O(1)_	| Hard |  |
| [1390. Four Divisors](https://leetcode.com/problems/four-divisors/) | _O(n \* sqrt(n))	_ | _O(1)_	| Medium |  ❌ |




## String
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [005.Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) | _O(n)_ | _O(n)_	| Medium | 🔍 manacher(马拉车算法), mx表示当前最长回文外右侧第一点, id是当前回文中心, p\[i]表示当前最长回文, if i<mx, p\[i] = min(p\[2id-i], p\[i]) |
| [006. ZigZag Conversion](https://leetcode.com/problems/zigzag-conversion/) | _O(n)_ | _O(n)_	| Medium | <ul><li>把string 循环push到一个长度为nrow的vector当中</li><li>用step = 2*nrows - 2 控制每次jump step, 到中间行看是否jump step之间有夹的元素</li></ul>|
| [008. String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | _O(n)_ | _O(1)_	| Easy | C++可以用find_first_not_of |
| [014. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | _O(n)_ | _O(1)_	| Easy | loop所有数第0位到第i位，直到不相同,返回str\[0].substr(0,i) |
| [028. Implement strStr()](https://leetcode.com/problems/implement-strstr/) | _O(n+k)_ | _O(k)_	| Easy | kmp algorithm: prefix array\[i]表示i点的最长的prefix 也是suffix长度 比如"ABA", 第三个a的最长的prefix 也是suffix 的长度是1 A 而prefix array\[i], 作为index, 是当前最长prefix 也是suffix 的下一位|
| [038. Count and Say](https://leetcode.com/problems/count-and-say/) | _O(n \* 2^n)_ | _O(n2^n)_	| Easy | C++ find_if + bind1st|
| [043. Multiply Strings](https://leetcode.com/problems/multiply-strings/) | _O(m\*n)_ | _O(m+n)_	| Medium | C++ transform, 必须都从个位数(也就是string的最后一位开始算, 否则carry可能会超过10), back_inserter, 相当于按照原来从头到尾顺序push back|
| [058. Length of Last Word](https://leetcode.com/problems/length-of-last-word/) | _O(n)_ | _O(1)_	| Easy | C++ find if or find if + bind1st or string find_last_not_of + find_last_of |
| [067. Add Binary	](https://leetcode.com/problems/add-binary/) | _O(n)_ | _O(1)_	| Easy | string 加法, 跟[415. Add Strings](https://leetcode.com/problems/add-strings/) 和[306. Addictive Number](https://leetcode.com/problems/additive-number/) 类似  |
| [068. Text Justification](https://leetcode.com/problems/text-justification/) | _O(n)_ | _O(1)_	| Hard | not a hard question, 跟[725. Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/) 类似 |
| [125. Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) | _O(n)_ | _O(1)_	| Easy | C++ 跳过非isalnum的 |
| [151. Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) | _O(n)_ | _O(1)_	| Medium | 先reverse所有的, 再reverse单个每个词, 记录总共len,最后用来截取, C++ find_first_not_of + find_first_of |
| [165. Compare Version Numbers](https://leetcode.com/problems/compare-version-numbers/) | _O(n)_ | _O(1)_	| Medium | c++ 算当前version1,2的substr的数，如果其中一个碰到结尾，设当前数位0。 c, 可以用c_str() + strtol; python3 zip(\*itertools.zip_longest(\*splits, fillvalue=0)) |
| [214. Shortest Palindrome](https://leetcode.com/problems/shortest-palindrome/) | _O(n)_ | _O(n)_	| Hard |🔍可以把此题换一种问法: 以index0开始最长的部分palindrome 的长度, 部分最长的pal后面的掉个+s = 答案  <ul><li>KMP: s+"#"+reverse(s), prefix array最后一位是部分最长的pal的长度, kmp prefix 即是suffix，pal是掉个也相等, 所以最后一位是部分最长  </li><li>马拉车(manacher): 不断找最大的回文长，但一边更新右边界时, 只更新mxlen 当p\[i]==i的时候, 最长回文从0开始</li></ul>  |
| [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/) | _O(n)_ | _O(1)_	| Easy | 经典面试题 |
| [273. Integer to English Words](https://leetcode.com/problems/integer-to-english-words/) | _O(1)_ | _O(1)_	| Hard | 无聊的recursion |
| [306. Addictive Number](https://leetcode.com/problems/additive-number/) | _O(n^3)_ | _O(n)_	| Medium | recursion 从index0开始试所有的digit可能性直到成功, 比如开始是一位+两位, 还是三位+两位 , 需要一个string add的help function; python 可以用itertools.combination + startswith, 跟[067. Add Binary	](https://leetcode.com/problems/add-binary/) 和[415. Add Strings](https://leetcode.com/problems/add-strings/) 类似, 只不过多个recursion  |
| [383. Ransom Note](https://leetcode.com/problems/ransom-note/) | _O(n)_ | _O(n)_	| Easy | Hash map |
| [405. Convert a Number to Hexadecimal](https://leetcode.com/problems/convert-a-number-to-hexadecimal/) | _O(n)_ | _O(1)_	| Easy | 最后结果需要reverse，因为先插入最小的，注意负数的, -1>>4 = -1, 所以while加个条件 res.length()!=sizeof(int)\*2 |
| [415. Add Strings](https://leetcode.com/problems/add-strings/) | _O(n)_ | _O(1)_	| Easy | string加法，跟[067. Add Binary	](https://leetcode.com/problems/add-binary/) 和[306. Addictive Number](https://leetcode.com/problems/additive-number/) 类似 |
| [420. Strong Password Checker](https://leetcode.com/problems/strong-password-checker/) | _O(n)_ | _O(1)_	| Hard | Brain Storm 详见C++ code 解释|
| [434. Number of Segments in a String](https://leetcode.com/problems/number-of-segments-in-a-string/) | _O(n)_ | _O(1)_	| Easy | 🔍, 根据s\[i] 和 s\[i-1]判断, or s\[i] 和 s\[i+1]判断 |
| [443. String Compression](https://leetcode.com/problems/string-compression/) | _O(n)_ | _O(1)_	| Easy | two pointer + num reverse |
| [459. Repeated Substring Pattern](https://leetcode.com/problems/repeated-substring-pattern/) | _O(n)_ | _O(n)_	| Easy | KMP |
| [468. Validate IP Address](https://leetcode.com/problems/validate-ip-address/) | _O(1)_ | _O(1)_	| Medium | 注意IPv4 和IPv6的定义(c++ code里), 判断一个char是不是符合十六进制用isxdigit(c) |
| [520. Detect Capital](https://leetcode.com/problems/detect-capital/) | _O(1)_ | _O(1)_	| Easy | C++ count_if; Python istitle()看是不是只有首字母大写 |
| [521. Longest Uncommon Subsequence I](https://leetcode.com/problems/longest-uncommon-subsequence-i/) | _O(min(a, b))_ | _O(1)_	| Easy | 题出的神经病，逗你玩儿 |
| [522. Longest Uncommon Subsequence II](https://leetcode.com/problems/longest-uncommon-subsequence-ii/) | _O(l \* n^2)	_ | _O(1)_	| Medium | 🔍按照字母长度sort, 然后一个一个看str，有没有在list中有subsequence，没有的话, return 这个str长度,直到全部search完, return -1 or C++ equal_range + count_if , python 可以iter()|
| [524.	Longest Word in Dictionary through Deleting](https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/) | _O((d \* l) * logd)_ | _O(1)_	| Medium | 按照字母长度sort,如果长度一样，按照alphabet sort, 找到第一个符合的  🔍python, max with key, min with key, filter,  iter + next with default |
| [539. Minimum Time Difference](https://leetcode.com/problems/minimum-time-difference/) | _O(nlogn)_ | _O(n)_	| Medium | C++ transform 把所有时间变分钟, 然后按minute sort, 答案就出自所有minute\[i+1] - minute\[i] or 1440 +minute\[0] -  minute.back() |
| [541. Reverse String II](https://leetcode.com/problems/reverse-string-ii/) | _O(n)_ | _O(1)_	| Easy |  |
| [551. Student Attendance Record I](https://leetcode.com/problems/student-attendance-record-i/) | _O(n)_ | _O(1)_	| Easy |  |
| [556.	Next Greater Element III](https://leetcode.com/problems/next-greater-element-iii/) | _O(1)_ | _O(1)_	| Medium |  可以用ascending stack or 两个for loop, 寻找i点往后最后一个比i点大的数(也是比i大,最接近i的数)(index j), swap(s\[i], s\[j]), 这样s\[i]后面的数又大到小排序的, 把i往后的数到end全部reverse后变成Int, 就是答案, 跟[031. Next Permutation](https://leetcode.com/problems/next-permutation/)思路类似 |
| [564. Find the Closest Palindrome](https://leetcode.com/problems/find-the-closest-palindrome/) | _O(l)_ | _O(l)_	| Hard | Brain Storm: 最接近的pal只可能5中选一, 100..001(l.size()+1), 99..99(l.size()-1), or string的前半部分 +1, +0, -1 加上前半部分的reverse(如果起始长度是奇数，reverse不包括前半部分最后一个，如果长度是偶数，都包括在内) |
| [591. Tag Validator](https://leetcode.com/problems/tag-validator/) | _O(n)_ | _O(n)_	| Hard | cdata 必须以 已 ]]>结束, recursion 找是不是valid tag, valid cdata, valid tagname  |
| [647. Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/) | _O(n)_ | _O(n)_	| Medium | 🔍 manacher(马拉车算法), 在snew中 p\[i]表示以id为中心最长回文，到i点，res += p\[i] /2  |
| [648. Replace Words](https://leetcode.com/problems/replace-words/) | _O(n)_ | _O(t)_	| Medium | 🔍 Trie; python 可以用reduce + dict.\_\_getitem__ |
| [657. Judge Route Circle](https://leetcode.com/problems/judge-route-circle/) | _O(n)_ | _O(1)_	| Easy |  |
| [678. Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/) | _O(n)_ | _O(1)_	| Medium | 🔍Three Solutions<ul><li>用low 和high: low 表示把 '\*' 当成 ')', high: 表示把 '\*' 当成'(', 如果high小于0，表示有太多的')' '(' + '\*' = high < ')' </li><li>用两个stack 分别记录 '(' 和 '\*'的位置, 如果当前是')', 先pop '(' 再pop '\*'; 最后看'(' 有没有对应index往后的的 '\*'可以pop掉, </li><li> Two pass solution 从左向右看是不是所有的')' 都有对应的 '(' 和 '\*', 再从右向左看是不是所有的 '(', 都有对应的 ')' 和' \*' </li></ul> |
| [680. Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/) | _O(n)_ | _O(1)_	| Easy | 🔍两个pointer,  检查s\[i] == s\[j]?, 遇到不等时，再看s\[i+1, j], or s\[i, j-1]是不是pal |
| [686. Repeated String Match](https://leetcode.com/problems/valid-palindrome-ii/) | _O(n+m)_ | _O(n)_	| Easy | 🔍<ul><li>Kmp: 然后两个pointer, 一个pointer i 记录A的位置，一个pointer j记录B的位置，每次对比 A\[(i + j)%A.size()] 是否等于B\[j] 等于就++j., 直到 j =  b.size() return ceil((i+j)/a.size()) </li><li> rabin-karp algorithm, 寻找最短的长度一直到最大长度的hash </li></ul> |
| [696.	Count Binary Substrings](https://leetcode.com/problems/count-binary-substrings/) | _O(n)_ | _O(1)_	| Easy | manacher(马拉车)算法的变形 |
| [720. Longest Word in Dictionary](https://leetcode.com/problems/longest-word-in-dictionary/) | _O(n)_ | _O(t)_	| Easy | Trie or 先按长度sort, 长度越短, 排前面, loop word, loop s\[i]\[0,len), 看是不是每个substr都在，都在话insert to hashset & update result |
| [722. Remove Comments](https://leetcode.com/problems/remove-comments/) | _O(n)_ | _O(k)_	| Medium | |
| [791. Custom Sort String](https://leetcode.com/problems/custom-sort-string/) | _O(n)_ | _O(k)_	| Medium | 可以当经典面试题, 三种解法: <ol><li>Custom Sort (or STL inserter + make_pair)</li><li>Bucket Sort</li><li>Priority Queue</li></ol>|
| [796. Rotate String](https://leetcode.com/problems/rotate-string/) | _O(n)_ | _O(1)_	| Easy | 🔍两种kmp的解, <ul><li>跟[686. Repeated String Match](https://leetcode.com/problems/valid-palindrome-ii/)一样, 详见686的C++ code 解释 </li><li>pattern = B, text = A + A, 看text中有没有pattern </li></ul> |
| [804. Unique Morse Code Words](https://leetcode.com/problems/unique-morse-code-words/) | _O(n)_ | _O(n)_	| Easy | Easy one unordered_set  |
| [806.Number of Lines To Write String](https://leetcode.com/problems/number-of-lines-to-write-string/) | _O(n)_ | _O(1)_	| Easy | Easy one but stupid question description  |
| [809. Expressive Words](https://leetcode.com/problems/expressive-words/) | _O(n+s)_ | _O(1)_	| Medium | Two pointer: 如果word\[i]!=S\[j] 的时候， 看S的j-1, j, j+1是不是连续是三个，若不是，再看过去是不是连续三个，若不是，break |
| [816. Ambiguous Coordinates](https://leetcode.com/problems/ambiguous-coordinates/) | _O(n^3)_ | _O(n)_	| Medium | 🔍选择小数点的关键是 不能左面位0， 右面结束也是0，比如00.1230不可以,但是即使左面等于0， 右面最后也不可以是0|
| [819. Most Common Word](https://leetcode.com/problems/most-common-word/) | _O(n+m)_ | _O(m+n)_	| Easy | |
| [820. Short Encoding of Words](https://leetcode.com/problems/goat-latin/) | _O(n)_ | _O(t)_	| Medium | <ul><li> Trie: 看叶子有没有child </li><li>sort string vector, 只用对比s\[i] 和 s\[i+1]</li></ul>|
| [824. Goat Latin](https://leetcode.com/problems/goat-latin/) | _O(n + w^2)_ | _O(l)_	| Easy | stringstream 作为string output  |
| [831. Masking Personal Information](https://leetcode.com/problems/masking-personal-information/) | _O(1)_ | _O(1)_	| Easy | C++ transform 把所有字母都小写, s\[0] 变成string 可以用 s.substr(0,1) or string(1,S\[0])  |
| [833. Find And Replace in String](https://leetcode.com/problems/find-and-replace-in-string/) | _O(m+n)_ | _O(n)_	| Medium | 先sort indexes,然后从后往前loop S,这样可以保持S前面的index不变, python 可以用zip + startswith  |
| [839. Similar String Groups](https://leetcode.com/problems/similar-string-groups/) | _O(n^2 \* l)_ | _O(n)_	| Easy | 🔍 Union Find Disjoint Set with Rank Heuristic, string 所在位置为index |
| [848. Shifting Letters](https://leetcode.com/problems/shifting-letters/) | _O(n)_ | _O(1)_	| Medium | 加的时候及时%26, 小心overflow  |
| [859. Buddy Strings](https://leetcode.com/problems/buddy-strings/) | _O(n)_ | _O(1)_	| Easy | 判断条件: 1.长度不一样，false，2. 如果a == b，有没有重复的字母，有的话true, 没有false, 3, 如果不一样的位置个数不等于2, 或者a\[diff\[0]]!=b\[diff\[1]] or a\[diff\[1]]!=a\[diff\[1]] 返回false, 否则是true  |
| [1374	Generate a String With Characters That Have Odd Count](https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/) | _O(n)_ | _O(1)_	| Easy | ❌ |
| [1392. Longest Happy Prefix](https://leetcode.com/problems/longest-happy-prefix/) | _O(n)_ | _O(n)_	| Hard | KMP, Rolling Hash |
| [1408. String Matching in an Array](https://leetcode.com/problems/string-matching-in-an-array/) | _O(n)_ | _O(n)_	| Easy | KMP, Rolling Hash |
| [1410. HTML Entity Parser](https://leetcode.com/problems/html-entity-parser/) | _O(n)_ | _O(t)_	| Medium | |
| [1417. Reformat The String](https://leetcode.com/problems/reformat-the-string/) | _O(n)_ | _O(1)_	| Easy | <ul><li>[🔍](https://github.com/beckswu/Leetcode/blob/master/String/1417.%20Reformat%20The%20String.cpp#L80)</li><li> [🔍](https://github.com/beckswu/Leetcode/blob/master/String/1417.%20Reformat%20The%20String.cpp#L111)</li></ul>  |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |


## Regular Expression Summary
|summary |
| ------------- |
|  <ul><li>regex_match 是从头开始到结尾结束都要match的, 可以用string + regex, regex_match(string, regex()); or Iterator + regex: regex_match ( s.begin(), s.end(), regex()), 返回值match是不是成功 </li><li>regex_search 是寻找entire string, 有没有substring满足regex的, 可以用string + regex, regex_search(string, regex()) or Iterator + regex: regex_search ( s.begin(), s.end(), regex())</li><li> regex_replace 是寻找entire string match pattern的部分,用其他的string代替它, 返回值新生成的string, replace 不会修改原来string s。 regex_replace(s, regex(), "geek"); 或者把替代的生成到另一个新的string: string result; regex_replace(back_inserter(result), s.begin(), s.end(), regex(),  "geek");</li><ul></br> [reference](http://www.runoob.com/regexp/regexp-syntax.html) [reference2](https://www.regular-expressions.info/shorthand.html) <li>+: 前面的子表达式出现一次或多次 ro+b，可以匹配 roob、rob、rooob </li>                                                             <li>\*: 前面的子表达式出现0次、或1次、或多次ro+b，可以匹配 rb、rob、rooob</li>                                                               <li>\?: 前面的子表达式出现0次、或1次 colou?r，可以匹配 color、colour</li>                                                                   <li>{n}	n 是一个非负整数。匹配确定的 n 次。例如，'o{2}' 不能匹配 "Bob" 中的 'o'，但是能匹配 "food" 中的两个 o。</li>                     <li> {n,}	n 是一个非负整数。至少匹配n 次。例如，'o{2,}' 不能匹配 "Bob" 中的 'o'，但能匹配 "foooood" 中的所有 o。'o{1,}' 等价于 'o+'。'o{0,}' 则等价于 'o*'。 </li> <li> {n,m}	m 和 n 均为非负整数，其中n <= m。最少匹配 n 次且最多匹配 m 次。例如，"o{1,3}" 将匹配 "fooooood" 中的前三个 o。'o{0,1}' 等价于 'o?'。请注意在逗号和两个数之间不能有空格。</li>  <li>\|	指明两项之间的一个选择。比如 "A.\|B" 匹配 CAA 也匹配 CB</li>    <li>.	匹配除换行符 \n 之外的任何单字符。 比如A. 匹配AD</li>                                                        <li>^	匹配输入字符串的开始位置，除非在方括号表达式中使用，此时它表示不接受该字符集合。比如^A, 表示字符以A开始, 比如\^[0-9] 表示不含有数字</li>                                                    <li>$	匹配输入字符串的结尾位置。如果设置了 RegExp 对象的 Multiline 属性，则 $ 也匹配 '\n' 或 '\r'。比如C$ 字符串以C结尾</li> <li>\w	匹配任何word character short version for \[A-Za-z0-9_], \W is short for \[^\w]。</li> <li> \s stands for "whitespace character"  \S is the equivalent of \[^\s]</li> <li>  \d is short for \[0-9],\[0-9] is not always equivalent to \d. In python3, \[0-9] matches only 0123456789 characters, while \d matches [0-9] and other digit characters, for example Eastern Arabic numerals ٠١٢٣٤٥٦٧٨٩  \D is the same as \[^\d]</li>  </li></ul></ul> difference between () \[], <ul><li>\[] denotes a character class. () denotes a capturing group.</li> <li>\[a-z0-9] -- One character that is in the range of a-z OR 0-9, (a-z0-9) -- Explicit capture of a-z0-9. No ranges. </li> <li>a -- Can be captured by \[a-z0-9]., a-z0-9 -- Can be captured by (a-z0-9) and then can be referenced in a replacement and/or later in the expression</li> <ul>.|

## Bit Manipulation
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [136. Single Number](https://leetcode.com/problems/single-number/) | _O(n)_ | _O(1)_	| Easy | 用xor ^, Python Reduce one line |
| [137. Single Number II](https://leetcode.com/problems/single-number-ii/) | _O(n)_ | _O(1)_	| Medium | 🔍<ul><li>第一次出现-> save it in "ones", 第二次出现 -> clear "ones" but save it in "twos" for later check,  第三次出现 -> try to save in "ones" but value saved in "twos" clear it.</li><li>loop through 32个bit, 每个bit再loop nums, if bit & nums[i] => c++, 如果c不是3个倍数，最终结果在现在这个bit上位1</li></ul> |
| [190. Reverse Bits](https://leetcode.com/problems/reverse-bits/) | _O(1)_ | _O(1)_	| Easy | 一位一位reverse bit, res每次向左移动一位，n向右移动一位 |
| [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/) | _O(n)_ | _O(1)_	| Easy | n = n & (n-1); |
| [201. Bitwise AND of Numbers Range](https://leetcode.com/problems/bitwise-and-of-numbers-range/) | _O(1)_ | _O(1)_	| Medium | 一位一位比较digit，直到移动k位m=n, 那么此时的digit是bitwise and的结果, res = m<<k |
| [231. Power of Two](https://leetcode.com/problems/power-of-two/) | _O(1)_ | _O(1)_	| Easy | n = n & (n-1); |
| [260. Single Number III](https://leetcode.com/problems/single-number-iii/) | _O(n)_ | _O(1)_	| Medium | 🔍两个pass,第一个pass, 通过Xor需要区分a 和 b的数 c(是a与b右面第一位不一样的数), 第二次pass, 通过c&nums\[i]判断做xor, 找到a和b (binary 负数) |
| [268. Missing Number](https://leetcode.com/problems/missing-number/) | _O(n)_ | _O(1)_	| Medium | Math, Swap, Xor |
| [318. Maximum Product of Word Lengths](https://leetcode.com/problems/maximum-product-of-word-lengths/) | _O(n^2)_ | _O(n)_	| Medium | 🔍可以用bit来判断两个string是不是有重合的字母, 用数字表示string, a是第一位被set，z是第26位被set, |
| [342. Power of Four](https://leetcode.com/problems/power-of-four/) | _O(1)_ | _O(1)_	| Easy | 4^n = (3+1)^n, 除了判断(n&n-1) , 还要判断n-1 是不是可以整除3 |
| [371. Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/) | _O(1)_ | _O(1)_	| Easy | （a&b)<<1 表示需要相加进位的（两个1相加）, a ^ b 表示相加不进位（保留单个1） |
| [389. Find the Difference](https://leetcode.com/problems/find-the-difference/) | _O(1)_ | _O(1)_	| Easy | 🔍找两个string唯一不同不同的char可以通过 xor |
| [393. UTF-8 Validation](https://leetcode.com/problems/utf-8-validation/) | _O(n)_ | _O(1)_	| Easy | 用count判断是不是起点, count==0 是起点 |
| [421. Maximum XOR of Two Numbers in an Array](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) | _O(nlogk)_ | _O(n)_	| Medium | 🔍<ul><li>从第32位开始到第0位逐渐缩小范围, 比如第5位有a,b,c,d 四个数xor都是最大的，第四位就可能会缩减到a,c; 利用性质: a ^ b = c =>  a ^ c = b </li><li> Trie </li></ul> |
| [461. Hamming Distance](https://leetcode.com/problems/hamming-distance/) | _O(1)_ | _O(1)_	| Easy | 判断有多少bit, 与[191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)和 [231. Power of Two](https://leetcode.com/problems/power-of-two/)类似 |
| [462	Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/) | _O(nlogn)_ | _O(1)_	| Medium | 🔍Meeting point, 先sort，然后逐个用最大减去最小, e.g \[3,6,9], 不管中间点在哪，都要磨平9-3=6的差距 |
| [476. Number Complement](https://leetcode.com/problems/number-complement/) | _O(1)_ | _O(1)_	| Easy |  |
| [477. Total Hamming Distance](https://leetcode.com/problems/total-hamming-distance/description/) | _O(nlogk)_ | _O(1)_	| Easy | 由第32位到第0位，loop每个bit，数当前bit位为1的个数为bitcount, 结果 res+= bitcount*(size-countsize), 与[421. Maximum XOR of Two Numbers in an Array](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/)类似 |
| [645. Set Mismatch](https://leetcode.com/problems/set-mismatch/) | _O(n)_ | _O(1)_	| Easy | <ul><li>bit Xor:与[260. Single Number III](https://leetcode.com/problems/single-number-iii/) 解法一样, 第一次pass,找到两个数的xor = c, c & (-c)是unique的digit, 第二次pass分别找到这两个数，第三次pass调整两个数return的顺序 </li><li>改变nums\[abs(nums\[i])-1] 为负数, 如果发现新找到的已经为负数, 证明是重复的，第二次pass, 如果发现某位为正数, 代表是missing的 </li></ul> |
| [693. Binary Number with Alternating Bits](https://leetcode.com/problems/binary-number-with-alternating-bits/) | _O(1)_ | _O(1)_	| Easy | 🔍 |
| [762. Prime Number of Set Bits in Binary Representation](https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/) | _O(R-L)_ | _O(1)_	| Easy | loop\[L,R],数每个数多少个bit，因为log2(10^6) < 16, 事先把所有的prime存到hash set里面, 看现在bit数是不是质数，if so res++, 还可以用 \__builtin_popcountl(n); bitset<32>(n).count() |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | C++ 0b表示binary number，比如0b10 = 2, 0b111 = 7</br> python 0b表示binary number，比如0b10 = 2, 0b111 = 7 <ul><li>注意运算顺序</li><li> +, - 先于 &, \|, <<, >>; 所以不用括号 n&n-1 </li><li> << >> == 是优于&,\| ; 判断&, 需要加括号,比如(n& n-1) == 0; </li><li> &,\|优于 && \|\| ; (1&2 && 2) = 0 && 2 = false; </li></ul> bit数1的个数，可以用 n&(n-1); \__builtin_popcountl(n); bitset<32>(n).count() |



## Hash Table
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [001	Two Sum](https://leetcode.com/problems/two-sum/) | _O(n)_ | _O(n)_	| Easy | |
| [003. Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | _O(n)_ | _O(n)_	| Medium | |
| [030. Substring with Concatenation of All Words	](https://leetcode.com/problems/substring-with-concatenation-of-all-words/) | _O((m+n)\*k)_ | _O(n\*k)_	| Hard | 🔍k = word\[0]长度, n = 整个words长度, m = S的长度。最快的解是两个map, map1记录words的每个string, | map2记录S的substr，substr每次移动k个, 直到当前window长度 == n\*k, res append(start) |
| [036. Valid Sudoku](https://leetcode.com/problems/valid-sudoku/) | _O(9\*9)_ | _O(9)_	| Medium |🔍 用bit比较快，比如i在横着第2行出现, row\[2] |= 1<<i; 如果row\[i] & id == 1: return false |
| [049. Group Anagrams](https://leetcode.com/problems/group-anagrams/) | _O(n * glogg)_ | _O(n)_	| Medium | 经典 面试题, python list不能作为字典的key,但是tuple可以 |
| [076. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | _O(n)_ | _O(k)_	| Hard | 🔍sliding windows, 此题没有窗口的size，要去找最小的size，关键是如何确定window valid，记录每次滑到cur char也在T中出现的个数，当个数满足T.size(),证明window valid，然后逐步缩小start与i的距离，找最小点 |
| [149. Max Points on a Line](https://leetcode.com/problems/max-points-on-a-line/) | _O(n^2)_ | _O(n)_	| Hard | 每到一点，算跟别的点的斜率，注意1. 重合的点，2.斜率没有的定义的点, 在每一点都重新建一个hashmap |
| [187. Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/) | _O(n)_ | _O(n)_	| Medium |🔍 rolling hash (rabin-karp), <ul><li>A = 00, C = 01, G = 10, T = 11, i大于9后 t>>2 & 0xfffff(2^18-1) 做&运算</li><li>直接把A,C,G,T默认转化成ASCII，与&7, 后三位是unique的，i>9后做 t << 3 & 0x3FFFFFFF</li></ul> |
| [202. Happy Number](https://leetcode.com/problems/happy-number/) | _O(k)_ | _O(k)_	| Easy | 要么是happy number，要么转化过程陷入循环 |
| [204. Count Primes](https://leetcode.com/problems/count-primes/) | _O(n)_ | _O(n)_	| Easy | count从小往大后eliminate，注意要尽可能efficient |
| [205.	Isomorphic Strings ](https://leetcode.com/problems/isomorphic-strings/) | _O(n)_ | _O(1)_	| Easy | 可以记录相同位置字母出现的上一位，或者把s,t字母相互关联起来, python 可以用find+map or zip+set |
| [217. Contains Duplicate ](https://leetcode.com/problems/contains-duplicate/) | _O(n)_ | _O(n)_	| Easy | easy one, 可以用sort + unique |
| [219. Contains Duplicate II](https://leetcode.com/problems/contains-duplicate-ii/) | _O(n)_ | _O(n)_	| Easy | easy one |
| [290. Word Pattern](https://leetcode.com/problems/word-pattern/) | _O(n)_ | _O(n)_	| Easy | 思路和[205.	Isomorphic Strings ](https://leetcode.com/problems/contains-duplicate/)一样|
| [299. Bulls and Cows](https://leetcode.com/problems/bulls-and-cows/) | _O(n)_ | _O(1)_	| Easy | One pass: 如果guess\[i] 和 secret\[i]一样, bull++, 不一样，++m\[sec\[i]], --m\[guess\[i]] python 可以用两个collectons.Counter相减, 得到重合的set|
| [336. Palindrome Pairs](https://leetcode.com/problems/palindrome-pairs/) | _O(n \* k^2)_ | _O(n\*k)_	| Hard |🔍trie  |
| [387. First Unique Character in a String](https://leetcode.com/problems/first-unique-character-in-a-string/) | _O(n)_ | _O(n)_	| Easy | 需要 two pass |
| [388. Longest Absolute File Path](https://leetcode.com/problems/longest-absolute-file-path/) | _O(n)_ | _O(d)_	| Medium | map记录每一层现有的长度,到新的或者原来一层，更新map, res是max(map中含有“.”的一层), 用到string::find, string::find_first_not_of, std::find  |
| [409. Longest Palindrome](https://leetcode.com/problems/longest-palindrome/) | _O(n)_ | _O(1)_	| Easy | 可以用std::count, 或者可以来回flip map, 当map位true +2 |
| [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/) | _O(n)_ | _O(1)_	| Medium | 🔍sliding window: 记录window的初始点, 如果当前长度 - 最大count > k, ++start(保持windows的最大长度), 如果满足，start不变，结果是s.size()-start |
| [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) | _O(n)_ | _O(1)_	| Easy | sliding window: 跟[567. Permutation in String](https://leetcode.com/problems/permutation-in-string/)思路一样 <ul><li>保持window的长度不变, 用l算p中还剩几个点没有被数过 </li><li>用right和left, 当right和left之间长度 == p的长度,append to result</li><li>用两个map 分别记录s 和p，如果s==p,append to result </li></ul> |
| [447. Number of Boomerangs](https://leetcode.com/problems/number-of-boomerangs/) | _O(n^2)_ | _O(n)_	| Easy | 可以用hypot |
| [454. 4Sum II](https://leetcode.com/problems/4sum-ii/) | _O(n^2)_ | _O(n)_	| Medium | 可以把4sum看成two sum, 把A+B的和绑定，把C+D的和绑定，看-C-D是不是在A+B的map里 |
| [473. Matchsticks to Square](https://leetcode.com/problems/matchsticks-to-square/) | _O(n * s * 2^n)_ | _O(n * (2^n + s))_	| Medium | DFS or Bit Mask |
| [523. Continuous Subarray Sum](https://leetcode.com/problems/continuous-subarray-sum/) | _O(n)_ | _O(k)_	| Medium | 🔍求开始数到所有i的和的余数，如果现在这个的余数之前遇到过，表示，两个数之间有数的和正好整除k |
| [532. K-diff Pairs in an Array](https://leetcode.com/problems/k-diff-pairs-in-an-array/) | _O(n)_ | _O(n)_	| Easy |  🔍one pass解: 两个hashset, lookup 和res, 找的时候既向上数又向下数, 为了避免重复, set(res)只push下限,结果就是res size |
| [554. Brick Wall](https://leetcode.com/problems/brick-wall/) | _O(n)_ | _O(m)_	| Meidum | 相当于求最多经过砖头缝缝 |
| [560. Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) | _O(n)_ | _O(k)_	| Medium | 🔍用hashmap记录每点的rolling sum(0,i)， 那么只需要找(0,i)的sum - k在不在map中，在的话 表示存在一点\[0,j] + k = (0,i)的sum， res += map\[sum-k] (可能一个sum出现很多遍) |
| [561. Array Partition I](https://leetcode.com/problems/array-partition-i/) | _O(n)_ | _O(n)_	| Easy | Sort or Bucket Sort |
| [575. Distribute Candies](https://leetcode.com/problems/distribute-candies/) | _O(n)_ | _O(n)_	| Easy | 对比set的长度和candies.size()/2的长度, C++可以用bitset |
| [594. Longest Harmonious Subsequence](https://leetcode.com/problems/longest-harmonious-subsequence/) | _O(n)_ | _O(n)_	| Easy |  |
| [599. Minimum Index Sum of Two Lists](https://leetcode.com/problems/minimum-index-sum-of-two-lists/) | _O((m + n) \* l)_ | _O(m \* l)_	| Easy |  |
| [609. Find Duplicate File in System](https://leetcode.com/problems/find-duplicate-file-in-system/) | _O(n \* k)_ | _O(n \* k)_	| Medium |  |
| [721. Accounts Merge](https://leetcode.com/problems/accounts-merge/description/) | _O(nlogn)_ | _O(n)_	| Medium | 🔍 Union Find, 不能用简单的hash table 找parent, 比如 (1@com, 2@com), (3@com, 4@com), (4@com, 2@com), 不用Union find分成两组 | 
| [748. Shortest Completing Word](https://leetcode.com/problems/shortest-completing-word/) | _O(n)_ | _O(1)_	| Medium |  |
| [771. Jewels and Stones](https://leetcode.com/problems/jewels-and-stones/) | _O(n+m)_ | _O(n)_	| Easy |  |
| [811. Subdomain Visit Count](https://leetcode.com/problems/subdomain-visit-count/) | _O(n)_ | _O(n)_	| Easy |  |
| [822. Card Flipping Game](https://leetcode.com/problems/card-flipping-game/) | _O(n)_ | _O(n)_	| Medium | 先把front\[i]和end\[i] 一样的插入到hash set, 再loop front & end, 选取不在hash set中最小的 |
| [825. Friends Of Appropriate Ages](https://leetcode.com/problems/friends-of-appropriate-ages/) | _O(n+k^2)_ | _O(k)_	| Medium | 用hash map存age和count, loop两层hashmap, 判断内层和外层key是否满足条件, 满足的话更新结果 |
| [1418	Display Table of Food Orders in a Restaurant](https://leetcode.com/problems/display-table-of-food-orders-in-a-restaurant/) | _O(n + tlogt + flogf)_ | _O(n)_	| Medium | ✏️[C++ transform]() |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;  &nbsp;&nbsp;&nbsp;  &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |

## sliding windows Summary
|summary |
| ------------- |
| sliding windows: windows都是看以当前字母结尾的window. 比较对象```s1```, 被比较对象```s2```<ul><li>可以记录当前substring的开始位置，</li><li>用数字记录substring的长度 </li><li>用hashset和两个pointer记录当前windows的长度 </li><li> map+pointer 1 map + 2 pointers: map先记录比较对象 ```map[s1[i]]++```, 再对被比较对象 __所有字母__ / __key出现__  , ```map[s2[i]]--```<ul> <li> **固定windows 长度**<ul>  <li> 一个pointer ```count```(初始值为 ```count=len```), 它的值会变动, 表示固定windows 内多少个满足条件 </li> <li> 一个pointer ```len```(不变化)表示```s1```长度,用来移动窗口, </li><li>比较条件:  ```if --map[s2[i]] >= 0 ```, ```--count```, 当```count == 0```  ```i-len + 1``` 是windows起点 </li><li>移动窗口条件：```if i>=len-1```, ```map[s2[i-len+1]]++```   </li>  </ul></li> <li> **不固定长度**.<ul>   <li> 一个pointer```left```(变化) , 记录左侧windows 起始点</li><li> 一个pointer ```len``` 记录```s1```长度(不变化) </li> <li>比较条件: ```if i - left == len - 1``` , left表示windows 起点 </li> <li> 移动窗口条件: ```if(map[s2[i]])<0 ``` 表示现windows中 ```s2[i]``` 个数 大于 ```s1```中个数, or ```s1```中没有 ```s2[i]```, 下面两种移动方式都可以   <ul> <li> 方式一: ```while(left <= i && map[s2[i]]< 0) map[s2[left++]]++```。e.g.1 ```s1=abc```, ```s2=ababc```, 在index=2, 第二个a, 有两个a 多于s1中个数, e.g. 2 ```s1=abc```, ```s2=abdabc```, 在index=2, d在s1中没有出现 ) </li> <li>方式二: ```while(map[s2[start++]-'a']++ >= 0);``` 把之前所有满足的都移走, </li></ul>  </li> </ul> </li><li>  可以用两个map,一个map记录比较对象(T)，一个记录被比较对象(S), 还需要一个count记录S中T出现的个数, start记录windows起始点, 初始化count = len(T); </br>只有当sdict\[s\[i]] < tdict\[s\[i]], count--; 当count == 0, 满足情况,append to res; </br>移动窗口过程中,dict\[s\[start]]--, start++,只有当sdict\[s\[start]] < tdict\[s\[start]]时 ++count, </br>比如[30题 Substring with Concatenation of All Words](https://leetcode.com/problems/substring-with-concatenation-of-all-words/description/), [76题 Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)</br>两个题区别是30不能包括多余的string (不可以sdict\[s\[start]] > tdict\[s\[start]]), 76是允许的 </li></ul> </li>  </ul> |


```c++
// 438. Find All Anagrams in a String
//s2: "cbaebabacd"  s1: "abc"
//Output: 0, 6]

//固定windows长度
class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int>map(26,0);
        for(auto i: s1)
            map[i-'a']++;
        int len = s1.size(), count = s1.size();
        vector<int>res;
        for(int i = 0; i<s2.size();i++){
            if(map[s2[i]-'a']-->0) count--;
            if(count == 0) res.push_back(i-len+1);
            if(i>=len-1){
                if(++map[s2[i-len+1]-'a'] > 0) count++;
            }
        }
        return res;
    }
};

//不固定windows长度, 方法一:

class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int>map(26,0);
        for(auto i: s1)
            map[i-'a']++;
        int len = s1.size(), left = 0;
        vector<int>res;
        for(int i = 0; i<s2.size();i++){
            map[s2[i]-'a']--;
            if(map[s2[i] - 'a'] <0)
                while(left<= i && map[s2[i]-'a'] < 0) map[s2[left++]-'a']++;
                /* or

                //correct
                while( mp[s2[left]]++ >= 0 )
                    ++left;
                ++left;

                //wrong: 比如 ab: eabc,  left  会一直停在0(e)
                while( mp[s2[left]] >= 0 )
                    mp[s2[left++]]++

                */

            if(i-left+1 == len){
                res.push_back(left);
            }
        }
        return res;
    }
};

//不固定windows长度 方法二:

class Solution {
public:
    vector<int> findAnagrams(string s2, string s1) {
        vector<int>map(26,0);
        for(auto i: s1)
            map[i-'a']++;
        int len = s1.size(), left = 0;
        vector<int>res;
        for(int i = 0; i<s2.size();i++){
            map[s2[i]-'a']--;
            if(map[s2[i] - 'a'] <0)
                while(map[s2[left++]-'a']++ >= 0);
            //cout<<i <<" left "<<left<<endl;
            if(i-left+1 == len){
                res.push_back(left);
            }
        }
        return res;
    }
};
/*
"cbaebabacd"
"abc"
DEBUG stdout
0 left 0
1 left 0
2 left 0
3 left 4
4 left 4
5 left 4
6 left 5
7 left 6
8 left 6
9 left 10
*/

```

|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [567. Permutation in String](https://leetcode.com/problems/permutation-in-string/) | _O(n)_ | _O(1)_	| Medium | 😍sliding Window(长度为len(s1)), 每次移动框,vector减去新来的，加上刚刚pass的，直到l长度为0 |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;| |  | |  |


## Stack
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [020. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | _O(n)_ | _O(n)_	| Easy | ❌注意return true if stack is empty |
| [032. Longest Valid Parentheses](https://leetcode.com/problems/longest-valid-parentheses/) | _O(1)_ | _O(n)_	| Hard |  😍<ul><li> __DP__: dp\[i] 代表以current index结束的最大valid substring的长 </li><li>__Stack__: push的是最近'('的index 和substring的起点 关键点是先pop 再比较 </li></ul>  |
| [071. Simplify Path](https://leetcode.com/problems/simplify-path/) | _O(n)_ | _O(n)_	| Medium |  :pencil2: getline可以当做stack, 遇到".." stack pop; vector可以用作stack   |
| [084. Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | _O(n)_ | _O(n)_	| Hard |😍  <ul><li>__stack__: ascending stack, 难点: 找到left start</li><li> __Divide Conquer__:最小的area来自左面，或者来自右面，或者来自area contain middle point</li></ul> |
| [085. Maximal Rectangle	](https://leetcode.com/problems/maximal-rectangle/) | _O(n\*m)_ | _O(m)_	| Hard | 🔍<ul><li>__stack__:与[084.](https://leetcode.com/problems/simplify-path/) 类似, matrix有n行，问题可以转换成n个Histogram的问题 </li><li>😍😍__DP__ : height代表从上到下，有几个连续的1, left: 现在这个height，左侧边界位置, right:这个height,长方形的右侧边界（右侧边界不包括在长方形内，是长方形右外侧第一个点）  </li></ul>|
| [101. Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | _O(n)_ | _O(h)_	| Easy |❌  注: iterative stack push 顺序 |
| [150. Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | _O(n)_ | _O(n)_	| Medium  | :pencil2: **Python Lambda Function in dictionary**   🔍 C++ recursive solution |
| [155. Min Stack](https://leetcode.com/problems/min-stack/) | _O(n)_ | _O(1)_	| Easy | 😚 Descending Stack: 两个stack,一个用来放正常的顺序，另一个作为min |
| [173. Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/) | _O(1)_ | _O(h)_	| Medium |  [307. Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/) 逻辑类似, 不要先全部走完  |
| [232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) | _O(1), amortized_ | _O(n)_	| Easy | 🔍两个stack in & out, in用来push, top: 假如out为空，dump in to out |
| [224. Basic Calculator](https://leetcode.com/problems/basic-calculator/) | _O(n)_ | _O(n)_	| Hard |  ❌用sign=1记录+, -1记录减, 碰到num乘以res,'('res,sign push进stack, ')'先乘以stack的top(是sign),再加上stack的top(sign之前的res)  |
| [227. Basic Calculator II](https://leetcode.com/problems/basic-calculator-ii/) | _O(n)_ | _O(n)_	| Medium | ❌ 用sign=1记录+, -1记录减, sign = 2 记录\*， 3记录除, 上一个sign是乘或除，先进行operation|
| [331. Verify Preorder Serialization of a Binary Tree](https://leetcode.com/problems/verify-preorder-serialization-of-a-binary-tree/) | _O(n)_ | _O(n)_	| Medium | 😍😍✏️stringstream + getline <ul><li>__Stack__: 每个node outdegree = 2，in-degree = 1 </li><li>indegree(到parent的) = outdegree（到child的） not NULL node has outdegree</li></ul>  |
| [341. Flatten Nested List Iterator](https://leetcode.com/problems/flatten-nested-list-iterator/) | _O(n)_ | _O(h)_	| Medium | 😍😍stack + recursion从最后往前loop, queue从前往后loop, ✏️✏️**C++/Python Iterator**, 要存iterator, 不能存vector, 因为存vector memory会很大  |
| [385. Mini Parser](https://leetcode.com/problems/mini-parser/) | _O(n)_ | _O(h)_	| Medium | 遇到',' ']' 把之前的integer add，  比如\[-1],  \[123,456], 遇到']',把现在这个nested list加入上个nested list |
| [394. Decode String](https://leetcode.com/problems/decode-string/) | _O(n)_ | _O(h)_	| Medium | 🔍可以看看recursive 的解, **程序设计**: 怎么设计一个好的stack, 类似[726. Number of Atoms](https://leetcode.com/problems/number-of-atoms/)  <ul><li>遇到num, push num 进num stack </li><li>遇到'\[',push “”进pat stack</li></ul> |
| [456. 132 Pattern](https://leetcode.com/problems/132-pattern/) | _O(n)_ | _O(h)_	| Medium |  🎅🎅 寻找 s1 < s3 < s2，从后向前，Descending stack, 难点: 理解stack让s2 逐渐变大, 但s3可增也可减, 因为s2减小前就return true了 |
| [636. Exclusive Time of Functions](https://leetcode.com/problems/exclusive-time-of-functions/) | _O(n)_ | _O(n)_	| Medium | 🔍stack 存的是上个job的id |
| [682. Baseball Game](https://leetcode.com/problems/baseball-game/) | _O(n)_ | _O(n)_	| Easy |  ❌bad problem description |
| [726. Number of Atoms](https://leetcode.com/problems/number-of-atoms/) | _O(n^2)_ | _O(n)_	| Hard | 类似 [394. Decode String](https://leetcode.com/problems/decode-string/) |
| [735. Asteroid Collision](https://leetcode.com/problems/asteroid-collision/) | _O(n)_ | _O(n)_	| Medium |  🎅 碰撞发生只能是新来的小于0，stack top > 0 |
| [736. Parse Lisp Expression](https://leetcode.com/problems/parse-lisp-expression/) | _O(n)_ | _O(n)_	| Hard | ❌stack需要两个，一个是存string dict(用来储存let的字典), 一个存string vector(用来储存上个string的split), 遇到'(', 如果之前是let, 先存map, 然后push进两个stack, string vector清空，字典不清空 。 遇到')', 算当前的, 把结果push到上个string(stkstring.top()) 的结尾, pop两个stack|
| [739. Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | _O(n)_ | _O(n)_	| Medium | 🔍 Ascending/Descending stack, 可以正向也可以反向 |
| [0901. Online Stock Span](https://leetcode.com/problems/online-stock-span//) | _O(n)_ | _O(n)_	| Medium | |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;| |  | | Ascending & Descending Stack 按照 container的顺序进行排序 |

## Linked List
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [002. Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | _O(n)_ | _O(1)_	| Medium | |
| [021. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | _O(n)_ | _O(1)_	| Easy | |
| [023.	Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) | _O(nklogk)_ | _O(1)_	| Hard | Heap, Divide Conquer, 注: 不能用一直用0作为l 和r比，这样的话，l的size会增加的很快，到最后l size快成位nk了 |
| [024. Swap Nodes in Pairs](https://leetcode.com/problems/swap-nodes-in-pairs/) | _O(n)_ | _O(1)_	| Easy | 建dummy, 提取往后第二个为nextnext，断第二，三链, nextnext后接上当前的next, 把nextnext接到当前的next, pt往后走两步|
| [025. Reverse Nodes in k-Group](https://leetcode.com/problems/reverse-nodes-in-k-group/) | _O(n)_ | _O(1)_	| Hard | 类似[206	Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)|
| [061. Rotate List](https://leetcode.com/problems/rotate-list/) | _O(n)_ | _O(1)_	| Medium | |
| [082. Remove Duplicates from Sorted List II](https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/) | _O(n)_ | _O(1)_	| Medium | |
| [083. Remove Duplicates from Sorted List](https://leetcode.com/problems/remove-duplicates-from-sorted-list/) | _O(n)_ | _O(1)_	| Easy | 不能用recusion, recursion的话会用pass n回linked list，用O(n)space, iterative解space只用O(1),tree可以用recursion原因是它的stack space是O(logn) |
| [138. Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) | _O(n)_ | _O(1)_	| Medium | 1. 先把每个node复制一个，把复制的贴在被复制的后面</br> 2. loop node(现在长度是2n), 把cur->next->random = cur->random->next，因为cur->random->next是复制cur->random过来的</br> 3. 最后结果就是把每个偶数位的node连接起来，同时要消除偶数的node(长度由2n变回n)，否则结果是修改了原来的node</br> |
| [147. Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/) | _O(n^2)_ | _O(1)_	| Medium | Sort |
| [148. Sort List](https://leetcode.com/problems/sort-list/description/) | _O(nlogn)_ | _O(logn)_	| Medium | Sort <ul><li>top-down,用两个pointer，一个慢，一个快，去split,然后merge, space: O(logn)</li><li> bottom-up, 第一次只把1和2顺序，3和4顺序，5和6顺序调整，第二次把1，2和3，4顺序调整，5,6和7，8顺序调整，以此类推, space: O(1) </li></ul>  |
| [160. Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | _O(n+m)_ | _O(1)_	| Easy | 利用的是 lA + lB_1 =  lA_1 + lB (lenA + B交点前的长度 = lenB + A交点前的长度),</br> pA，pB 每次都前进一步，pA到end,pA设为Bhead, pB到end,pB设为Aend, </br>这种尾对头只换一次，第二次pA 或者pB到end 返回NULL(就是没有交点) |
| [203. Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/) | _O(n)_ | _O(1)_	| Easy | |
| [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) | _O(n)_ | _O(1)_	| Easy | |
| [234. Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | _O(n)_ | _O(1)_	| Easy | revese list前面部分，然后reverse之后，逐个对比前半部分是否等于后半部分的值 |
| [237. Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/) | _O(n)_ | _O(1)_	| Easy | 把node->next的val提到node val然后delete node->next |
| [328. Odd Even Linked List](https://leetcode.com/problems/odd-even-linked-list/description/) | _O(n)_ | _O(1)_	| Medium | <ul><li>把even = head->next, odd = head, 然后逐个先断odd和下个even链 和 even和下个odd链(顺序不能反)</li><li>把even顺序保留，把odd提出来， 断even和odd的链，然后evenhead 接在odd->next上</li></ul> |
| [445. Add Two Numbers II](https://leetcode.com/problems/add-two-numbers-ii/) | _O(n+m)_ | _O(m+n)_	| Medium | 用两个stack,把每个list值push 进stack，最后push进的先算 |
| [725. Split Linked List in Parts](https://leetcode.com/problems/split-linked-list-in-parts/) | _O(n)_ | _O(1)_	| Medium | 每次前进到此次push进vector的最后一位, 然后断链, 第i个vector长度为 n//k + (i< n%k) |
| [817. Linked List Components](https://leetcode.com/problems/linked-list-components/) | _O(n+m)_ | _O(m)_	| Medium | 把vector转化成unordered_set, 然后判断每个val,是不是在unordered_set里面 |
|LinkedList 当head, cur 指向同一点, cur = cur->next; ||||head 不会改变, 但是当cur在head之后，head包含cur, cur = cur->next, head会跳过cur这点|
two pointer 1.whiLe(fast->next && fast->Next->next) 是找中点, 比如1-2-3-4-5-6，slow最后等于3 </br> 2.whiLe(fast && fast->Next) 是找中后一点,比如1-2-3-4-5-6，slow最后等于4, 1-2-3-4-5 最后是3


## Queue
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [239. Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/) | _O(n)_ | _O(k)_	| Hard | 😍 Monoqueue using Deque<ul><li>  Solution 1 __deque int__ : 只存单个index, descending queue </li><li>Solution 2 deque pair, first是存当前的数, second表示window开始位置到这个数之前，多少个比现在这个数小 </br> __pop__: 看```top second-- = 0```, pop_front() </li></ul> |


## Heap




|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| | | | | <ul><li>C++ priority_queue default是max heap</li><li> Python的heapq default是min heap. </li><li> ```priority_queue<int, vector<int>, less<int>>``` 是max_heap, ```greater<int`>```是min_heap </li><li> ```multiset<int, greater<int>>``` 是max_heap  </li><li>  multiset和priority_queue用的default comparator相反</li></ul>  |
| [264. Ugly Number II](https://leetcode.com/problems/ugly-number-ii/) | _O(n)_ | _O(1)_	| Medium | 😍🎅🎅<ul><li>__dp__: loop n 而不是 loop 1 到 n-th ugly number</li><li> __heap__ 的解：:alien: 避免heap中出现重复数 </li></ul>|
| [295. Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/) | _O(nlogn)_ | _O(1)_	| Medium | 虽是hard, 逻辑简单, 两个heap, minheap, maxheap, <br/> ✏️可以看看[**python heapq用法**](https://github.com/beckswu/Leetcode/blob/master/Heap/295.%20Find%20Median%20from%20Data%20Stream.py) ```heappushpop```  |
| [313. Super Ugly Number](https://leetcode.com/problems/super-ugly-number/) | _O(n\*k)_ | _O(n+k)_	| Medium | 类似 [264. Ugly Number II](https://leetcode.com/problems/ugly-number-ii/) |
| [373. Find K Pairs with Smallest Sums](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/) | _O(k * log(min(n, m, k)))_ | _O(min(n, m, k))_	| Medium | 🔍注: 不用hashset, 可不重复push 进heap <br/> 🎅不能用two pointer, 比如```[1,7], [2,6]```, 结果是```[1,2],[1,6],[2,7]```, two pointer给的是```[1,2],[1,6],[6,7]``` <br/>✏️: [python](https://github.com/beckswu/Leetcode/blob/master/Heap/373.%20Find%20K%20Pairs%20with%20Smallest%20Sums.py)  ```itertools.product, itertools.islice``` <br/> [O(k) solution](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/discuss/84577/O(k)-solution) |
| [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/) | _O(k * log(min(n, m, k)))_ | _O(min(n, m, k))_	| Medium | Binary Search, Heap, ZigZag Search |
| [407. Trapping Rain Water II](https://leetcode.com/problems/trapping-rain-water-ii/) | _O(m \* n \* (logm + logn))_ | _O(m\*n)_	| Hard | 😍🎅 <ul><li>**难点**: 点hold水的高度 取决于 min(周围四个方向上最大高度), 而不是min(四个邻居的高度), 再push进queue(push的height是当前height和cell的最大值) </li><li> 先把长方形四条边 push进min heap; 要**heap top高度是递增的**！**途径**: BFS push 时候push max(heap top 高度, heights\[i]\[j]) </li> <li> [visualization](https://www.youtube.com/watch?time_continue=80&v=cJayBq38VYw) </li></ul> |
| [632. Smallest Range Covering Elements from K Lists](https://leetcode.com/problems/smallest-range-covering-elements-from-k-lists/) | _O(nklogk)_ | _O(k)_	| Hard | 😍🎅 <ul><li>**难点**: 缩小windows, windows需要包含每个list内一个数</li><li> 用heap, heap中包含每个list中当前最小数 </li><li> 不能用two pointer, two pointer: **每个list每个数** 包含在windwos内, 此题是 **每个list至少一个数** 含在windwos内 </li> <li> ```vector[i][0]```的数push进minheap, 一个int 记录最大值, heap top 当前最小值 </li></ul> |
| [846. Hand of Straights](https://leetcode.com/problems/hand-of-straights/) | _O(nlogn)_ | _O(n)_	| Medium | 🔍 <br/><ul><li>Solution 1: set, set.begin 为每个group 的起点</li><li>😍[Solution 2](https://github.com/beckswu/Leetcode/blob/master/Heap/846.%20Hand%20of%20Straights.cpp): set + queue, queue记录每个点的windows 每个点 新增加windows数</li></ul> |
| [846. Hand of Straights](https://leetcode.com/problems/maximum-performance-of-a-team/) | _O(nlogn)_ | _O(n)_	| Hard |  |
| [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)	|	_O(n) average_	|	_O(1)_ |	Easy |  ✏️[Quick-Select](https://github.com/beckswu/Leetcode/blob/master/Heap/973.%20K%20Closest%20Points%20to%20Origin.cpp)|
| [1046. Last Stone Weight](https://leetcode.com/problems/last-stone-weight/) | _O(nlogn)_ | _O(n)_	| Easy |  |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;| |  | |   |



Two pointer 用于<ul><li>detect cycle</li><li>sorted array比大小,一个array一个pointer</li><li>linked list找到middle point</li></ul>
## Two Pointer 
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [019. Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | _O(n)_ | _O(1)_	| Medium | 🔍two pointer, list总长l, 需要remove的index是l-n, slow要前进到l-n-1, 所以先前进n个，再前进到尾部就是l-n-1 |
| [086. Partition List](https://leetcode.com/problems/partition-list/) | _O(n)_ | _O(1)_	| Medium | 🔍 <ul><li>先把head所有小于x的pass掉,slow,head=first大于等于x的node, loop fast 当fast小于x,把这个放在slow上,slow前进一位</li><li> 建两个node，一个small,一个big,把所有小于的head放在small，其他的放在big，最后把所有big挂在small的后面 </li></ul> |
| [141. Linked List Cycle	](https://leetcode.com/problems/linked-list-cycle/) | _O(n)_ | _O(1)_	| Easy | ❌ |
| [142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) | _O(n)_ | _O(1)_	| Medium | 🔍[具体数学解释](https://github.com/beckswu/Leetcode/blob/master/Two%20Pointers/142.%20Linked%20List%20Cycle%20II.cpp), 类似[287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) |
| [143. Reorder List](https://leetcode.com/problems/reorder-list/) | _O(n)_ | _O(1)_	| Medium | 😚🎅 用fast & slow先找到medium的点，slow到结尾所有的点reverse, 然后p1 = head, p2 = middle后一点，一个p1, 一个p2 插进pointer，就是结果 |
| [167.Two Sum II - Input array is sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/) | _O(n)_ | _O(1)_	| Easy |❌  two pointer, 一个从开始位置，一个从末尾的位置 |
| [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/) | _O(n)_ | _O(1)_	| Easy | ❌ 记录swap后第一个0位置 |
| [287. Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/) | _O(n)_ | _O(1)_	| Easy | 😍🎅 类似[142. Linked List Cycle II](https://leetcode.com/problems/linked-list-cycle-ii/) ,有duplicate一定会有cycle, **难点: 找起点**<ul><li> 所有数都在\[0,n], ```nextIndex = num-1```,从n+1(index为n)开始，就不会上来进入循环 </li><li> 从0开始进入,```nextIndex = num```  </li><li>每个数数都在\[1,n],从0开始</li></ul> |
| [344. Reverse String](https://leetcode.com/problems/reverse-string/) | _O(n)_ | _O(1)_	| Easy | 🔍[bit来进行swap](https://github.com/beckswu/Leetcode/blob/master/Two%20Pointers/344.%20Reverse%20String.cpp#L31) |
| [349. Intersection of Two Arrays](https://leetcode.com/problems/intersection-of-two-arrays/) | _O(n+m)_ | _O(min(m, n))_	| Easy | <ul><li> 用hashmap, O(N) </li><li>binary search, 要sort两个vector,然后loop v1, 到v2中找有没有v1\[i]这个数</li><li>two pointer, sort两个vector,it1=v1.begin(), it2=v2.begin(),然后根据it1,it2大小,更新结果和自增it1和it2 </li></ul> |
| [350.Intersection of Two Arrays II](https://leetcode.com/problems/intersection-of-two-arrays-ii/) | _O(n+m)_ | _O(1)_	| Easy | ❌<ul><li> 如果没有sort, space: ```O(1)``` complexity ```O(max(n,n)*log(max(m,n))``` 的解为binary search, two pointer  </li><li>如果有sort, space: O(1) complexity O(m+n)的解为two pointer </li><li> ✏️[C++ Set Intersection](https://github.com/beckswu/Leetcode/blob/master/Two%20Pointers/350.%20Intersection%20of%20Two%20Arrays%20II.cpp#L124) </li></ul>  |
| [457. Circular Array Loop](https://leetcode.com/problems/circular-array-loop/) | _O(n)_ | _O(1)_	| Medium | ❌array loop必须是单向的, 比如1->2, 2->1 不算是loop，循环array每次两个pointer检查有没有loop,如果没有loop,把这次所有走过的点都标成0,下次不用再走了, 类似[141. Linked List Cycle	](https://leetcode.com/problems/linked-list-cycle/) |
| [611. Valid Triangle Number](https://leetcode.com/problems/valid-triangle-number/) | _O(n^2)_ | _O(1)_	| Medium | 🎅(无法达到O(n))，先sort然后两个pointer,每一个都指向一个边,  |
| [777. Swap Adjacent in LR String](https://leetcode.com/problems/swap-adjacent-in-lr-string/) | _O(n)_ | _O(1)_	| Medium | 🎅 **难点是: 寻找left 和 right.** R是向前走，L是向后走（swap R 和L都需要X）, 两个pointer，遇到X往前跳 |
| [826. Most Profit Assigning Work](https://leetcode.com/problems/most-profit-assigning-work/) | _O(mlogm + nlogn)_ | _O(1)_	| Medium | 😍🔍 <ul><li>sort jobs & work, 两个pt,一个指worker, 一个指jobs, profit记录到worker i之前最大的收益</li><li>用一个size=10001的vector, ```v[i]```表示第difficulty为i时，最大的profit </li></ul> |
| [828. Unique Letter String](https://leetcode.com/problems/unique-letter-string/) | _O(n)_ | _O(1)_	| Hard | 😍🎅<ul><li> **难点:转换思路: 数每个substring 中unqiue 个数 = 每个位置的char在多少个substring中unique**</li><li>**Solution 1**: 需要char 上一次 和上上一次出现的位置, 比如```ABAB```, (i=3的```B``` 算的i=1 的B在几个substring中unique, 可以```(ABA)B```, ```A(BA)B```, ```(AB)AB```, ```A(B)AB```, ```()```表示substring </li><li>**Solution 2 DP**: <ul><li>```contribution[s[i]]``` 以```s[i]```结束, ```s[i]```为unique的substring个数 </li><li> ```cur```: 以```s[i]```为end, 每个substring中unique个数</li><li> ```lastPost[s[i]]```: 上次```s[i]```出现的位置 </li><li> **难点: 找到```contribution```和```cur```的关系**  </li></ul></li></ul> |
| [844. Backspace String Compare](https://leetcode.com/problems/backspace-string-compare/) | _O(m+n)_ | _O(1)_	| Easy | 两个pt，都从s,t 从后往前对比 |
| [986. Interval List Intersections](https://leetcode.com/problems/interval-list-intersections/) | _O(m+n)_ | _O(1)_	| Medium |  |

</br>

## Sort
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [056. Merge Intervals](https://leetcode.com/problems/merge-intervals/) | _O(nlogn)_ | _O(n)_	| Medium |  |
| [057. Insert Interval](https://leetcode.com/problems/insert-interval/) | _O(nlogn)_ | _O(n)_	| Hard | 🔍 |
| [075. Sort Colors](https://leetcode.com/problems/sort-colors/description/) | _O(n)_ | _O(1)_	| Medium | 🎅 [Tri Partition](https://github.com/beckswu/Leetcode/blob/master/Sort/075.%20Sort%20Colors.cpp#L117), 小的放前面, 大的放最后 |
| [088. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | _O(n)_ | _O(1)_	| Easy | ❌从后往前 |
| [147. Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/) | _O(n^2)_ | _O(1)_	| Medium | 跟[148. Sort List](https://leetcode.com/problems/sort-list/description/) 一样 |
| [148. Sort List](https://leetcode.com/problems/sort-list/description/) | _O(nlogn)_ | _O(logn)_	| Medium | <ul><li>top-down,用两个pointer，一个慢，一个快，去split,然后merge, space: O(logn)</li><li> bottom-up, 第一次只把1和2顺序，3和4顺序，5和6顺序调整，第二次把1，2和3，4顺序调整，5,6和7，8顺序调整，以此类推, space: O(1) </li></ul>  |
| [164. Maximum Gap](https://leetcode.com/problems/maximum-gap/) | _O(n)_ | _O(n)_	| Hard | 😍🔍 <ul><li>Bucket Sort, **double** minstep = (max-min)/(n-1) = bucket_step, bucket (0,1) 0是bucket minvalue, 1 是max value, 结果max gap=相邻两个bucket的min\[i]-max\[i-1]  </li><li>🔍🔍radix sort, res = 最大两个相邻的点, radix sort排序是从后往前loop，因为之前的digit的是sort，大的digit在最后面，count\[i]是从ith-digit的最后一个位置</li></ul> |
| [164. Maximum Gap](https://leetcode.com/problems/maximum-gap/) | _O(n)_ | _O(n)_	| Hard | 😍🔍 <ul><li>Bucket Sort, **double** minstep = (max-min)/(n-1) = bucket_step, bucket (0,1) 0是bucket minvalue, 1 是max value, 结果max gap=相邻两个bucket的min\[i]-max\[i-1]  </li><li>🔍🔍radix sort, res = 最大两个相邻的点, radix sort排序是从后往前loop，因为之前的digit的是sort，大的digit在最后面，count\[i]是从ith-digit的最后一个位置</li></ul> |
| [179. Largest Number](https://leetcode.com/problems/largest-number/) | _O(nlogn)_ | _O(n)_	| Medium |✏️✏️ [Python Lambda Sort](https://github.com/beckswu/Leetcode/blob/master/Sort/179.%20Largest%20Number.py#L13) |
| [218. The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/) | _O(nlogn)_ | _O(logn)_	| Hard |😍😍 priority_queue or multiset(看critical point) |
| [274. H-Index](https://leetcode.com/problems/h-index/) | _O(n)_ | _O(n)_	| Medium | ❌counting Sort |
| [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/description/) | _O(nlogn)_ | _O(n)_	| Hard | MergeSort, BIT |
| [324. Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/) | _O(n) average_ | _O(1)_	| Medium | ❌(1 + 2\*index) \% (n \| 1)保证median左面数map奇数位，mediam右面的数map偶数位<ul><li>(1)elements smaller than the 'median' are put into the last even slots</li><li>(2) elements larger than the 'median' are put into the first odd slots</li><li>(3) the medians are put into the remaining slots.</li></ul> |
| [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/description/) | _O(nlogn)_ | _O(n)_	| Hard | MergeSort with Count, BIT |
| [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | _O(n)_ | _O(n)_	| Medium | 😍 Bucket Sort, Quick Select, <ul><li> C++: n-th elements,  priority_queue (maxheap: priority_queue, minheap: multiset), </li><li> python: collections.Count, heapq, most_common(k) </li></ul> 与[451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) , [692. Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/) 类似 |
| [406. Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/) | _O(n \* sqrt(n))~O(n^2)_ | _O(n)_	| Medium | 😚 关键是认清sort的顺序 先把height大的安排了，如果height一样再sort k有小到大。 sqrt(n)解是一样的sort，但是把sort之后的插入到不同的组中，每个组不超过sqrt(n)个元素 |
| [462. Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/) | _O(nlogn)_ | _O(n)_	| Medium | Medium是最小化Sum of Absolute Deviations; Quick Select: O(n) on average |
| [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | _O(n)_ | _O(n)_	| Medium | Bucket Sort, Quick Select(n-th elements) O(nlogn), priority_queue O(nlogn)  |
| [692. Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/) | _O(nlogk)_ | _O(n)_	| Medium | Bucket Sort, Quick Select(n-th elements), priority_queue  |
| [853. Car Fleet](https://leetcode.com/problems/car-fleet/) | _O(nlogn)_ | _O(n)_	| Medium |  Greedy: sort postion又大到小，再sort到target的时间由小到大  |
| [1029. Two City Scheduling](https://leetcode.com/problems/two-city-scheduling/) | _O(n) average_ | _O(n)_	| Easy |  Greedy思想,quick select|
|C++priority_queue<pair<int,int>>pq 先对比first, top是first最大的，</br>constructor: greater\<int>是让top返回最小的数,大的数放后面 |  |	|  | python的heappop()先pop对比first,then second, top是first最小的  |
| [1365	How Many Numbers Are Smaller Than the Current Number](https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/) | _O(n+m)_ | _O(m)_	| Easy |  🔍[_O(n+m)_ Solution Counting Sort](https://github.com/beckswu/Leetcode/blob/master/Sort/1365.%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number.cpp#L38) 🔍[Python Counting Sort](https://github.com/beckswu/Leetcode/blob/master/Sort/1365.%20How%20Many%20Numbers%20Are%20Smaller%20Than%20the%20Current%20Number.py#L5) |
| [1366. Rank Teams by Votes](https://leetcode.com/problems/rank-teams-by-votes/) | _O(n)_ | _O(1)_	| Medium | 🔍[Python Sort list based on Dictonary value](https://github.com/beckswu/Leetcode/blob/master/Sort/1366.%20Rank%20Teams%20by%20Votes.py#L31)  |


</br>





## Recursion

|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [095. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/) | _O(4^n / n^(3/2))_ |	_O(4^n / n^(3/2))_	| Medium | 😍 🔍loop start -> end. Generate vector of left subtree 和right subtree, 然后排列组合把他们弄在一起 |
| [096. Unique Binary Search Trees	](https://leetcode.com/problems/unique-binary-search-trees/description/)	|	_O(n)_	|	_O(1)_ |	Medium |  DP, cartesian product</br> 作为root，sum(#left + #right) Catalan number |
| [098. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/) | _O(n)_ |	_O(1)_	| Medium | 用prev 点, iterative + recurssion |
| [100. Same Tree](https://leetcode.com/problems/same-tree/) | _O(n)_ |	_O(h)_	| Easy | ❌ |
| [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/) | _O(n)_ |	_O(h)_	| Easy | ❌ |
| [105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/description/) | _O(n)_ |	_O(h)_	| Medium | 😍😍 🔍🔍注意和[889. Construct Binary Tree from Preorder and Postorder Traversal	](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/)stack的区别.  preorder 第一个是tree的root, inorder 中root->val左面root的left tree,右面root的right tree,  |
| [106. Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/description/) | _O(n)_ |	_O(h)_	| Medium | 😍😍 🔍🔍 [O(1) memory 和 stack](https://github.com/beckswu/Leetcode/blob/master/Recursion/106.%20Construct%20Binary%20Tree%20from%20Inorder%20and%20Postorder%20Traversal.cpp)  |
| [108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/) | _O(n)_ |	_O(logn)_	| Easy | ❌ 跟[095. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/)逻辑一样 binary tree height 需要balanced |
| [109. Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/) | _O(n)_ |	_O(logn)_	| Medium | 🔍[注意O(N)的解，不是two pointer的](https://github.com/beckswu/Leetcode/blob/master/Recursion/109.%20Convert%20Sorted%20List%20to%20Binary%20Search%20Tree.cpp#L106) |
| [110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/description/) | _O(n)_ |	_O(h)_	| Medium |😚 跟[095. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/)类似 用bottom-up 比top-down 更efficient |
| [111. Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/) | _O(n)_ |	_O(h)_	| Medium | ❌```if not left: return h(r.right)+1; ```, ```if not right: return h(r.left)+1; ``` ```else: return min(h(r.right), h(r.left))+1; ``` |
| [114. Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/) | _O(n)_ |	 _O(h)_	| Medium | 🔍😍 preorder 的reverse |
| [116. Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/) | _O(n)_ |	_O(1)_	| Medium | **审题: perfect binary tree**<ul><li> 每层横着走, 连left 到right, 连right 到next left </li><li> 或者是阶梯式向下connect root1 left和 root1 right & root1 right和root2 left & root2 left和root2 right </li></ul> |
| [124. Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | _O(n)_ |	_O(h)_	| Hard | 🔍not hard question |
| [129. Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/) | _O(n)_ |	_O(h)_	| Medium | O(1) extra memory  |
| [241. Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/description/) | _O(n\* 4^n / n^(3/2))_ |	_O(n \* 4^n / n^(3/2))_	| Medium |  😍 算sign前的，算sign后的,然后做前和后的permutation和 |
| [337. House Robber III](https://leetcode.com/problems/house-robber-iii/) | _O(n)_ |	_O(h)_	| Medium | 🎅Greedy Algorithm. 返回vector, ```vector[0]```存的是用上一个最大的获取值，```vector[1]```存的是不用上一个 最大的获取值 |
| [395. Longest Substring with At Least K Repeating Characters](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/description/) | _O(n)_ |	_O(n)_	| Medium | 😍😍 <ul><li>**Solution 1 Divide-conquer** 一旦小于k, 就split成left和right,然后返回left和right的max值 </li><li> [**Solution 2 two pointer**](https://github.com/beckswu/Leetcode/blob/master/Recursion/395.%20Longest%20Substring%20with%20At%20Least%20K%20Repeating%20Characters.cpp#L75) </li></ul> |
| [404. Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/) | _O(n)_ |	_O(h)_	| Easy | ❌  |
| [437. Path Sum III](https://leetcode.com/problems/path-sum-iii/description/) | _O(n)_ |	_O(h)_	| Easy | 🔍一定用unorderedmap , 不能用unordered_set, 比如 ```-5,5,-6,6,4```, 要```sum = 4```, 可以从-5到4 或者-6 到4 |
| [669. Trim a Binary Search Tree](https://leetcode.com/problems/trim-a-binary-search-tree/description/) | _O(n)_ |	_O(h)_	| Easy |😚 |
| [671. Second Minimum Node In a Binary Tree](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/) | _O(n)_ |	_O(h)_	| Easy | ❌ |
| [761. Special Binary String](https://leetcode.com/problems/special-binary-string/description/) | _O(n^2)_ |	_O(n)_	| Hard | ❌Bad problem description Divide-conquer, 把每个special string 再分成小的special string,然后sort |

</br>
</br>

## Binary Search
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [004. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/description/) | _O(log(min(m, n)))_ |	_O(1)_	| Hard | 更新A的ilow 和ihigh, j = (m+n+1)/2-1,<ul><li>if i<m && B\[j-1]>A\[i]: ilow=i+1(A\[i]太小)</li><li> if i>0 && A\[i]>B\[j]：ihigh = i-1 (A\[i]太大)</li></ul> |
| [033. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | _O(log(n))_ |	_O(1)_	| Medium | <ul><li>if t>A[mid] 想往左走，只能是A\[l]到A\[mid]有turn且A\[l]<=t</li><li>if t<A[mid] 想往右走，只能是A\[mid]到A\[r]有turn且A\[r]>=t</li></ul>  |
| [034. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/) | _O(log(n))_ |	_O(1)_	| Medium | lowerbound + upperbound |
| [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) | _O(log(n))_ |	_O(1)_	| Easy | lowerbound |
| [069. Sqrt(x)](https://leetcode.com/problems/sqrtx/description/) | _O(log(n))_ |	_O(1)_	| Easy | Newton Method |
| [074. search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/description/) | _O(logm + logn)_ |	_O(1)_	| Medium | <ul><li> 对row一次lowerbound， 对coloumn 一次lowerbound  </li><li> 把2D matrix不当成2D,当成一个大的sorted array</li></ul>|
| [081. Search in Rotated Sorted Array II](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/) | _O(logn)_ |	_O(1)_	| Medium | remove duplicate from left and right |
| [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/) | _O(logn)_ |	_O(1)_	| Medium | 与033. Search in Rotated Sorted Array logic 类似 |
| [154. Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/description/) | _O(logn) ~ O(n)_ |	_O(1)_	| Hard | 与081. Search in Rotated Sorted Array II logic 类似 |
| [162. Find Peak Element](https://leetcode.com/problems/find-peak-element/description/) | _O(logn)_ |	_O(1)_	| Medium | find local maximum |
| [222. Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes/description/) | _O((logn)^2)_ |	_O(1)_	| Medium |  |
| [275. H-Index II](https://leetcode.com/problems/h-index-ii/description/) | _O(logn)_ |	_O(1)_	| Medium | citations\[index] >= length(citations) - index = h, 找符合的最小的index，最大的h |
| [278. First Bad Version](https://leetcode.com/problems/first-bad-version/) | _O(logn)_ |	_O(1)_	| Easy | |
| [300. Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) | _O(nlogn)_ |	_O(n)_	| Medium | tail\[i] 存的是递增subarray长度为i+1，组成该长度最小的尾部数字, 比如tail = \[2,5] 代表当increasing subarray长度为2是，组成递增subarray 末尾最后一位数最小是5   |
| [354. Russian Doll Envelopes](https://leetcode.com/problems/russian-doll-envelopes/description/) | _O(nlogn)_ |	_O(n)_	| Hard | 按照width由小到达排序，再把同样width，把height由大到小排序，dp\[i] 存组成递增subarray长度为i+1时，末尾最小数(也就是最小height) |
| [363. Max Sum of Rectangle No Larger Than K](https://leetcode.com/problems/max-sum-of-rectangle-no-larger-than-k/description/) | _O(min(m, n)^2 * max(m, n) * logn(max(m, n)))_ |	_O(max(m, n))_	| Hard | 如果row多，外面两个outer loop是col(vice versa), 利用binary search(set) |
| [367. Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/) | _O(logn)_ |	_O(1)_	| Easy | Newton Method |
| [374. Guess Number Higher or Lower](https://leetcode.com/problems/guess-number-higher-or-lower/) | _O(logn)_ |	_O(1)_	| Easy | |
| [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/) | _O(n * log(MAX - MIN)_ |	_O(1)_	| Medium | l=m\[0]\[0], r=m\[-1]\[-1], binary search 是否至少有k个数小于等于mid |
| [410. Split Array Largest Sum](https://leetcode.com/problems/split-array-largest-sum/description/) | _O(nlogn)_ |	_O(1)_	| Hard | 答案在\[maxnum, totsum]之间，binary search这个interval |
| [436. Find Right Interval](https://leetcode.com/problems/find-right-interval/) | _O(nlogn)_ |	_O(n)_	| Medium | 把每个interval start put in set, 然后interval找end的lower bound |
| [475. Heaters](https://leetcode.com/problems/find-right-interval/) | _O((m + n) * logn)_ |	_O(1)_	| Easy | <ul><li>sort heater + lower_bound</li><li> sort house sort heaters,逐渐递增index</li></ul> |
| [540. Single Element in a Sorted Array](https://leetcode.com/problems/single-element-in-a-sorted-array/description/) | _O(logn)_ |	_O(1)_	| Medium | |
| [658. Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/description/) | _O(logn+k)_ |	_O(1)_	| Medium | x-arr\[left-1]<=arr\[right]-x 保证left一定是起点，right是最后数后面一位 |
| [668. Kth Smallest Number in Multiplication Table](https://leetcode.com/problems/kth-smallest-number-in-multiplication-table/description/) | _O(log(mn)*min(n,n))_ |	_O(1)_	| Hard | binary search \[1,m\*n], isValid判断是否有至少有k个element在乘法表中 |
| [719. Find K-th Smallest Pair Distance](https://leetcode.com/problems/find-k-th-smallest-pair-distance/description/) | _O(nlogn + nlogw)_ |	_O(1)_	| Hard | sort nums, l=0, r = nums\[-1]-nums\[0], binary search是否有k个数大于等于mid在num中 |
| [744. Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/) | _O(logn)_ |	_O(1)_	| Easy | 判断最后一个字母是不是大于target, 大于的话用upperbound，否则返回第一个char |
| [786. K-th Smallest Prime Fraction](https://leetcode.com/problems/k-th-smallest-prime-fraction/) | _O(nlogr)_ |	_O(1)_	| Hard | <ul><li>用priority_queue, 先push进最小的，每次push前extract当前最小的, 保证push进去的比pop的大，最多max(n,k)次pop+push</li><li> binary search l=0, r=1, 看是不是有n个pair小于等于mid，i=0,增加j,减小A\[i]/\[j]的值，一旦A\[i]/\[j]小于等于mid，增加i,就是增加A\[i]/\[j], 再增加j, 如果count==k, 返回k中最大的那个pair</li><ul> |
| [793.Preimage Size of Factorial Zeroes Function](https://leetcode.com/problems/preimage-size-of-factorial-zeroes-function/description/) | _O((logk)^2)_ |	_O(1)_	| Hard | l = 0, r=5\*k, binary search mid是否有k个零的0，有的话r=mid, 否则l = mid+1, 最后再判断l是否有k个0, 有的话返回5,没有的话返回0 |
| [1385. Find the Distance Value Between Two Arrays](https://leetcode.com/problems/find-the-distance-value-between-two-arrays/) | _O((n + m) \* logm)_ |	_O(1)_	| Easy | 🎅[Binary Search](https://github.com/beckswu/Leetcode/blob/master/Binary%20Search/1385.%20Find%20the%20Distance%20Value%20Between%20Two%20Arrays.cpp#L23), Two pointer |




</br>
</br>



## Binary Search Tree

|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [220. Contains Duplicate III](https://leetcode.com/problems/contains-duplicate-iii/description/) | _O(nlogn)_ |	_O(n)_	| Medium | set/multiset lower_bound  或者python OrderedDict, 每次popitem(false) pop 最先insert的 |
| [230	Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/) | _O(max(h, k))_ |	_O(min(h, k))_	| Medium | inorder traversals(从最小的travel到最大的) / stack  |
| [235. Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/) | _O(h)_ |	_O(1)_	| Easy | 利用 binary search tree的性质 |
| [352. Data Stream as Disjoint Intervals](https://leetcode.com/problems/data-stream-as-disjoint-intervals/description/) | _O(logn)_ |	_O(n)_	| Hard | |
| [449. Serialize and Deserialize BST](https://leetcode.com/problems/serialize-and-deserialize-bst/) | _O(n)_ |	_O(h)_	| Medium | preorder traversals |
| [450. Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/description/) | _O(h)_ |	_O(h)_	| Medium | <ul><li>swap key 和比key大的最小值，然后recursively删除swap的值 </li><li> 把key的left tree 挂在key->right的leftmost tree下面（比key大的最小数下面）</li></ul>  |
| [530. Minimum Absolute Difference in BST	](https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/) | _O(n)_ |	_O(h)_	| Easy | 利用binary search tree的性质 或者inorder traversal 带着前面prev的node val |
| [783. Minimum Distance Between BST Nodes](https://leetcode.com/problems/minimum-distance-between-bst-nodes/description/) | _O(n)_ |	_O(h)_	| Easy | 利用binary search tree的性质 或者inorder traversal 带着前面prev的node val(与530题 解法一样) |
| [1382	Balance a Binary Search Tree](https://leetcode.com/problems/balance-a-binary-search-tree/) | __O(n)__ |	__O(h)__ |	Medium	| |

</br>
</br>


## Tree 经典


|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [094. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | _O(n)_ | _O(1)_	| Medium | Tree |
| [095. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/) | _O(4^n / n^(3/2))_ |	_O(4^n / n^(3/2))_	| Medium | 😍 🔍loop start -> end. Generate vector of left subtree 和right subtree, 然后排列组合把他们弄在一起 |
| [098. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/description/) | _O(n)_ |	_O(1)_	| Medium | 用prev 点, iterative + recurssion |
| [099	Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/) | _O(n)_ | _O(1)_	| Hard | Tree |
| [100. Same Tree](https://leetcode.com/problems/same-tree/) | _O(n)_ |	_O(h)_	| Easy | ❌ |
| [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/description/) | _O(n)_ |	_O(h)_	| Easy | ❌ |
| [101. Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | _O(n)_ | _O(h)_	| Easy |❌  注: iterative stack push 顺序 |
| [108. Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/) | _O(n)_ |	_O(logn)_	| Easy | ❌ 跟[095. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/)逻辑一样 binary tree height 需要balanced |
| [109. Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/) | _O(n)_ |	_O(logn)_	| Medium | 🔍[注意O(N)的解，不是two pointer的](https://github.com/beckswu/Leetcode/blob/master/Recursion/109.%20Convert%20Sorted%20List%20to%20Binary%20Search%20Tree.cpp#L106) |
| [110. Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/description/) | _O(n)_ |	_O(h)_	| Medium |😚 跟[095. Unique Binary Search Trees II](https://leetcode.com/problems/unique-binary-search-trees-ii/)类似 用bottom-up 比top-down 更efficient |
| [111. Minimum Depth of Binary Tree](https://leetcode.com/problems/minimum-depth-of-binary-tree/) | _O(n)_ |	_O(h)_	| Medium | ❌```if not left: return h(r.right)+1; ```, ```if not right: return h(r.left)+1; ``` ```else: return min(h(r.right), h(r.left))+1; ``` |
| [112. Path Sum](https://leetcode.com/problems/path-sum/description/) | _O(n)_ |	_O(h)_	| Easy | 🔍(iterative Solution: 如果有right会经过root 两次)[https://github.com/beckswu/Leetcode/blob/master/DFS/112.%20Path%20Sum.cpp#L74]  |
| [124. Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/) | _O(n)_ |	_O(h)_	| Hard | 🔍not hard question |
| [129. Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/) | _O(n)_ |	_O(h)_	| Medium | O(1) extra memory  |
| [144. Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | _O(n)_ | _O(1)_	| Medium | Tree |
| [145. Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) | _O(n)_ | _O(1)_	| Hard | Tree |
| [199	Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)	| _O(n)_	| _O(h)_	| Medium		 |  ❌ Easy  |
| [257	Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/description/) | 	_O(n \* h)_ | _O(h)_ | Easy 	| ❌ Easy |
| [404. Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/) | _O(n)_ |	_O(h)_	| Easy | ❌  |
| [437. Path Sum III](https://leetcode.com/problems/path-sum-iii/description/) | _O(n)_ |	_O(h)_	| Easy | unorderedmap 存的在现在点之前的 <prefix sum, frequency> pairs. 从中间某点到现在sum = 从root到现在点sum - root到中间某点的sum |
| [515. Find Largest Value in Each Tree Row](https://leetcode.com/problems/find-largest-value-in-each-tree-row/description//)	|	_O(n)_	|	_O(h)_ |	Medium | ❌ DFS / BFS |
| [538. Convert BST to Greater Tree](https://leetcode.com/problems/convert-bst-to-greater-tree/) | _O(n)_ | _O(h)_	| Easy | Tree |
| [543. Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/) | _O(n)_ | _O(h)_	| Easy | Tree |
| [572. Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/) | _O(m \* n)_ | _O(h)_	| Easy | |
| [617. Merge Two Binary Trees](https://leetcode.com/problems/merge-two-binary-trees/) | _O(n)_ | _O(h)_	| Easy | |
| [623. Add One Row to Tree](https://leetcode.com/problems/add-one-row-to-tree/) | _O(n)_ | _O(h)_	| Medium | |
| [637. Average of Levels in Binary Tree](https://leetcode.com/problems/average-of-levels-in-binary-tree/) | _O(n)_ | _O(h)_	| Easy | |
| [653. Two Sum IV - Input is a BST](https://leetcode.com/problems/two-sum-iv-input-is-a-bst/) | _O(n)_ | _O(h)_	| Easy | |
| [671. Second Minimum Node In a Binary Tree](https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/) | _O(n)_ |	_O(h)_	| Easy | ❌ |
| [687. Longest Univalue Path](https://leetcode.com/problems/longest-univalue-path/) | _O(n)_ | _O(h)_	| Easy |  |
| [669. Trim a Binary Search Tree](https://leetcode.com/problems/trim-a-binary-search-tree/description/) | _O(n)_ |	_O(h)_	| Easy |😚 |
 [814. Binary Tree Pruning](https://leetcode.com/problems/binary-tree-pruning/) | _O(n)_ | _O(h)_	| Medium | |
 | [863. All Nodes Distance K in Binary Tree](https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/) | _O(n)_ | _O(h)_	| Medium | 😍😍Really good question! 不必纠结于one pass, 需要child -> parent map |
| [865. Smallest Subtree with all the Deepest Nodes](https://leetcode.com/problems/smallest-subtree-with-all-the-deepest-nodes/) | _O(n)_ | _O(h)_	| Medium | 🔍DFS, left level == right level 返回root, if left level > right level, 返回left dfs的node else返回right dfs的  |
| [889. Construct Binary Tree from Preorder and Postorder Traversal	](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/) | _O(n)_ | _O(h)_	| Medium | 😍😍 <ul><li>Solution 1: 难点是找到 left 和right的边界: 假定都把下一个assign 给left </li><li> 用stack </li></ul> |
| [1008. Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/) | _O(n)_ | _O(h)_	| Medium | 🔍[Stack / Morris Traversal](https://github.com/beckswu/Leetcode/blob/master/Tree/1008.%20Construct%20Binary%20Search%20Tree%20from%20Preorder%20Traversal.cpp#L96) |
| [1028. Recover a Tree From Preorder Traversal](https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/) | _O(n)_ | _O(h)_	| Hard | 😚 stack / DFS, stack逻辑类似[889. Construct Binary Tree from Preorder and Postorder Traversal	](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/) |
| [1367	Linked List in Binary Tree](https://leetcode.com/problems/linked-list-in-binary-tree/)	|	_O(n+l)_	|	_O(h+l)_ |	Medium |  |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |



## Depth-First Search

|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [112. Path Sum](https://leetcode.com/problems/path-sum/description/) | _O(n)_ |	_O(h)_	| Easy | 🔍[iterative Solution: 如果有right会经过root 两次](https://github.com/beckswu/Leetcode/blob/master/DFS/112.%20Path%20Sum.cpp#L74)  |
| [113	Path Sum II](https://leetcode.com/problems/path-sum-ii/) |	_O(n)_	| _O(h)_ |	Medium |	🔍[iterative Solution: 如果有right会经过root 两次](https://github.com/beckswu/Leetcode/blob/master/DFS/113.%20Path%20Sum%20II.cpp#L53) |
| [199	Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)	| _O(n)_	| _O(h)_	| Medium		 |  ❌ Easy  |
| [200	Number of Islands](https://leetcode.com/problems/number-of-islands/)	| _O(m \* n)_ |	_O(m \* n)_ |	Medium		|✏️ [Union Find with Rank Heuristics](https://github.com/beckswu/Leetcode/blob/master/DFS/200.%20Number%20of%20Islands.cpp#L161), [✏️Python Complex number 表示四个DFS 方向](https://github.com/beckswu/Leetcode/blob/master/DFS/200.%20Number%20of%20Islands.py)  |
| [236	Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/description/)	|	_O(n)_ |	_O(h)_ |	Medium	| 🔍 [Iterative Solution](https://github.com/beckswu/Leetcode/blob/master/DFS/236.%20Lowest%20Common%20Ancestor%20of%20a%20Binary%20Tree.cpp#L32) |
| [257	Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/description/) | 	_O(n \* h)_ | _O(h)_ | Easy 	| ❌ Easy |
| [282	Expression Add Operators](https://leetcode.com/problems/expression-add-operators/)	| _O(4^n)_ | _O(n)_ | Hard | 🎅**难点: 弄清 cv (cumulative sum), pv(previous sum) 关系**,</br>  pos 到现在process的index，注意: <ul><li>现在是'\*', cv = cv - pv + p\*n, pv = pv\*n </li> <li>现在是'-', cv = cv - pv + n, pv = -n </li></ul> |
| [301. Remove Invalid Parentheses](https://leetcode.com/problems/remove-invalid-parentheses/description/)	| _O(C(n, c))_	| _O(c)_ | Hard | 😍😍[Complexity Analysis](https://github.com/beckswu/Leetcode/blob/master/DFS/301.%20Remove%20Invalid%20Parentheses.cpp#L20) <ul><li> 🎅**DFS**: 开始DFS前记录left_removed，</br> right_removed, 这样可以保证删除的parenthese 最短，</br> 再记录pair，'(' 时候pair+1, ')'时候pair-1， pair最后等于0， 表示valid</li> <li>🔍**BFS**, First try all possible results当移走一个括号, 当两个括号...until find valid 用unordered_set 记录所有被visited的string，Or TLE</li> <li>🎅BrainStorming [More Efficient DFS](https://github.com/beckswu/Leetcode/blob/master/DFS/301.%20Remove%20Invalid%20Parentheses.cpp#L257) </li></ul>|
| [329. Longest Increasing Path in a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/)	| _O(m \* n)_ | _O(m \* n)_ | Hard | 😍 <ul><li> DFS + DP ✏️[C++ lambda function](https://github.com/beckswu/Leetcode/blob/master/DFS/329.%20Longest%20Increasing%20Path%20in%20a%20Matrix.cpp#L68) </li><li> 🔍[BFS: 一层一层移走周围点中最大的, 移走多少回就是结果](https://github.com/beckswu/Leetcode/blob/master/DFS/329.%20Longest%20Increasing%20Path%20in%20a%20Matrix.cpp#L100)</li></ul> |
| [332. Reconstruct Itinerary](https://leetcode.com/problems/reconstruct-itinerary/description/)	|	_O(t! / (n1! \* n2! \* ... nk!))_	 |	_O(t)_ |	Medium	|  😍 <ul><li>Solution 1: DFS, ```Unordered_map<string, unordered_map<string,int>>```, 可能有几个一样的tickets</li> <li>Solution 2: 🔍 ```Unordered_map<string, multi_set<string>>``` [The reason we got stuck is because that we hit the exit, reverse 是解](https://github.com/beckswu/Leetcode/blob/master/DFS/332.%20Reconstruct%20Itinerary.cpp#L74)</li></ul> |
| [399. Evaluate Division](https://leetcode.com/problems/evaluate-division/description/)	|	_O(q\*\|V\|!)_	|	_O(e)_ |	Medium | DFS with memiozation 用unordered_map, vector, unordered_set记录是否经过， 跟[329. Longest Increasing Path in a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/)类似|
| [417. Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/description/)	|	_O(m \* n)_	|	_O(m \* n)_ |	Medium | 😍🎅 bit mask, **难点: 起点必须是四个边** |
| [440. K-th Smallest in Lexicographical Order](https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/description/)	|	_O(logn)_	|	_O(logn)_ |	Hard | 找规律, 不能一个一个算, 要跳缩减区间 |
| [464. Can I Win](https://leetcode.com/problems/can-i-win/description//)	|	_O(n!)_	|	_O(n)_ |	Medium | 😚DFS+Memoization **难点: Memoization记录的不能是还剩多少到target, 记录是现在可选择的set能不能赢** |
| [515. Find Largest Value in Each Tree Row](https://leetcode.com/problems/find-largest-value-in-each-tree-row/description//)	|	_O(n)_	|	_O(h)_ |	Medium | ❌ DFS / BFS |
| [547. Friend Circles](https://leetcode.com/problems/friend-circles/description/)	|	_O(n^2)_	|	_O(n)_ |	Medium | Union Find with Rank Heuristic / DFS |
| [638. Shopping Offers](https://leetcode.com/problems/shopping-offers/description/)	|	_O(n \* 2^n)_	|	_O(n)_ |	Medium | 🎅✏️ [设计一个好的DFS structure](https://github.com/beckswu/Leetcode/blob/master/DFS/638.%20Shopping%20Offers.cpp#L42]  |
| [690. Employee Importance](https://leetcode.com/problems/employee-importance/description/)	|	_O(n)_	|	_O(h)_ |	Easy | 需要用unordered_map, 因为vector index 不等同于 id |
| [695. Max Area of Island](https://leetcode.com/problems/max-area-of-island/)	|	_O(m\*n)_	|	_O(m\*n)_ |	Medium | ✏️[Python Complex number 表示四个DFS 方向](https://github.com/beckswu/Leetcode/blob/master/DFS/695.%20Max%20Area%20of%20Island.py#L1) |
| [733. Flood Fill](https://leetcode.com/problems/flood-fill/description/)	|	_O(m\*n)_	|	_O(m\*n)_ |	Easy | ❌  |
| [749. Contain Virus](https://leetcode.com/problems/contain-virus/)	|	_O((m \* n)^(4/3))_		|	_O(m \* n)_ |	Hard | 😚 DFS/BFS, every step try each possibility see where is max **new Infection area**, then build wall and update grid  |
| [753. Cracking the Safe](https://leetcode.com/problems/cracking-the-safe/description/)	|	_O(k^n)_	|	_O(k^n)_ |	Hard | 🎅 Greedy + BrainStorming, **难点:如果设置起始数字，如何Loop 不会有deadlock** |
| [756. Pyramid Transition Matrix](https://leetcode.com/problems/pyramid-transition-matrix/description/)	|	_O(a^b)_	|	_O(a^b)_ |	Medium | bottom-up, bit mask |
| [785. Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/)	|	_O(\|V+E\|)_	|	_O(\|V\|)_ |	Medium | DFS/BFS + Bit Mask, 用红蓝两色表vertex，如果相邻的node 一样颜色 return false |
| [797. All Paths From Source to Target](https://leetcode.com/problems/all-paths-from-source-to-target/description/)	|	_O(p + r \* n)_	|	_O(n)_ |	Medium | ❌ |
| [802. Find Eventual Safe States](https://leetcode.com/problems/find-eventual-safe-states/description/)	|	_O(\|V+E\|)_	|	_O(\|V\|)_ |	Medium | 😚 DFS + bit mask 需要定义state 0：unvisited, 1 visited not safe, 2 visited not safe, 3 visited and safe 注意不能用visited 的value 代替boolean 的value |
| [886. Possible Bipartition](https://leetcode.com/problems/possible-bipartition/submissions/)	|	_O(\|V+E\|)_	|	_O(\|V+E\|)_ | Medium | DFS, BFS |
| [1367	Linked List in Binary Tree](https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/)	|	_O(n+l)_	|	_O(h+l)_ |	Medium | KMP 🔍[C++ 用const auto ```[]``` get function return pair](https://github.com/beckswu/Leetcode/blob/master/DFS/1367.%20Linked%20List%20in%20Binary%20Tree.cpp#L9) |
| [1368	Minimum Cost to Make at Least One Valid Path in a Grid](https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/)	|	_O(m\*n)_	|	_O(m\*n)_ |	Medium | BFS + DFS |
| [1377. Frog Position After T Seconds](https://leetcode.com/problems/frog-position-after-t-seconds/) |	_O(n)_	|	_O(n)_ |	Hard | ✏️[Python Set](https://github.com/beckswu/Leetcode/blob/master/DFS/1377.%20Frog%20Position%20After%20T%20Seconds.py#L127) |
| [1391. Check if There is a Valid Path in a Grid](https://leetcode.com/problems/check-if-there-is-a-valid-path-in-a-grid/) |	_O(m\*n)_	|	_O(1)_ |	Medium | |
| [1397. Count Number of Teams](https://leetcode.com/problems/find-all-good-strings/)	|	_O(m\*n)_  |	_O(m)_|	Hard | DFS /DP + KMP 🎅🎅  |


</br>
</br>

## Backtracking
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [017. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)	|	_O(n \* 4^n)_	|	_O(n)_ |	Medium | ✏️[Python Lambda Function](https://github.com/beckswu/Leetcode/blob/master/Backtracking/17.%20Letter%20Combinations%20of%20a%20Phone%20Number.py#L37)  |
| [022. Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)	|	_O(4^n \/ n^(3\/2))_	|	_O(n)_ |	Medium | ✏️[Python Trick](https://github.com/beckswu/Leetcode/blob/master/Backtracking/022.%20Generate%20Parentheses.py)  |
| [037. Sudoku Solver](https://leetcode.com/problems/sudoku-solver/)	|	_O((9!)^9)_	|	_O(1)_ |	Hard |  可以用bit mask |
| [039. Combination Sum](https://leetcode.com/problems/combination-sum/)	|	_O(k \* n^k)_	|	_O(k)_ |	Medium | ✏️[Python Trick, Difference between yield and return](https://github.com/beckswu/Leetcode/blob/master/Backtracking/39.%20Combination%20Sum.py#L67) |
| [040. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)	|	_O(n \* n!)_	|	_O(n)_ |	Medium | <ul><li>😍😍[C++ Logic](https://github.com/beckswu/Leetcode/blob/master/Backtracking/40.%20Combination%20Sum%20II.cpp#L39) 如果有重复的 只算第一个 </li><li>🔍[Python Yield Generator](https://github.com/beckswu/Leetcode/blob/master/Backtracking/40.%20Combination%20Sum%20II.py)</li></ul>  |
| [216. Combination Sum III](https://leetcode.com/problems/combination-sum-iii/description/)	|	_O(k \* C(n, k))_	|	_O(k)_ |	Medium | 🔍[Python itertools.combination](https://github.com/beckswu/Leetcode/blob/master/Backtracking/216.%20Combination%20Sum%20III.py#L65) |
| [046. Permutations](https://leetcode.com/problems/permutations/)	|	_O(\n * n!)_	|	_O(n)_ |	Medium | <ul><li>😍😍[c++ recursive swap](https://github.com/beckswu/Leetcode/blob/master/Backtracking/46.%20Permutations.cpp#L66)</li>😍🔍🔍<li>[Python itertools.permutations, generator](https://github.com/beckswu/Leetcode/blob/master/Backtracking/46.%20Permutations.py)</li></ul> |
| [047. Permutations II](https://leetcode.com/problems/permutations-ii/)	|	_O(\n * n!)_	|	_O(n)_ |	Medium |  <ul><li>🎅🎅 [理解check middle function逻辑](https://github.com/beckswu/Leetcode/blob/master/Backtracking/47.%20Permutations%20II.cpp#L35)</li> <li> [Python Generator/Yield](https://github.com/beckswu/Leetcode/blob/master/Backtracking/47.%20Permutations%20II.py)</li></ul>  |
| [051. N-Queens	](https://leetcode.com/problems/n-queens/)	|	_O(n!)_	|	_O(n)_ |	Hard | 🔍[Python Solution](https://github.com/beckswu/Leetcode/blob/master/Backtracking/51.%20N-Queens.py#L28) |
| [052. N-Queens-II](https://leetcode.com/problems/n-queens-ii/)	|	_O(n!)_	|	_O(n)_ |	Hard | ❌ 与[051. N-Queens	](https://leetcode.com/problems/n-queens/)逻辑一样 |
| [077. Combinations](https://leetcode.com/problems/combinations/)	|	_O(k \* C(n, k))_	|	_O(k)_ |	Medium | 😍 [Python Multiple Solution](https://github.com/beckswu/Leetcode/blob/master/Backtracking/77.%20Combinations.py#L19) |
| [079. Word Search](https://leetcode.com/problems/word-search/description/)	|	_O(m \* n \* l)_	|	_O(l)_ |	Medium | Simple DFS. smart way: 把visited的字母改了 省掉了hashset, visited |
| [093. Restore IP Addresses](https://leetcode.com/problems/restore-ip-addresses/description/)	|	_O(1)_	|	_O(1)_ |	Medium | recursive & iterative |
| [078. Subsets](https://leetcode.com/problems/subsets/)	|	_O(n \* 2^n)_	|	_O(1)_ |	Medium | 😍😍 <ul><li>recursive</il>  <li> [iterative](https://github.com/beckswu/Leetcode/blob/master/Backtracking/78.%20Subsets.cpp#L55) </li> <li>[bit trick](https://github.com/beckswu/Leetcode/blob/master/Backtracking/78.%20Subsets.cpp#L105) 第一个数每2次出现1次，第二个数每4次出现2次，第二个数每8次出现4次 </li></ul> |
| [090. Subsets II](https://leetcode.com/problems/subsets-ii/)	|	_O(n \* 2^n)_	|	_O(1)_ |	Medium | recursive(逻辑类似[040. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)) & 😍😍 iterative（插数） |
| [126. Word Ladder II](https://leetcode.com/problems/word-ladder-ii/description/)	|	_O(n \* d)_	|	_O(d)_ |	Hard | <ul><li>two end pointer BFS </li><li> ✏️[unordered_multimap, equal_range](https://github.com/beckswu/Leetcode/blob/master/Backtracking/126.%20Word%20Ladder%20II.cpp#L310) </li><li>🔍用DFS TLE , 不删除已走路径 TLE </li></ul> |
| [131. Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/description/)	|	_O(n^2) ~ O(2^n)_	|	_O(n^2)_ |	Medium | 😍[Python Solution](https://github.com/beckswu/Leetcode/blob/master/Backtracking/131.%20Palindrome%20Partitioning.py)  |
| [140. Word Break II](https://leetcode.com/problems/word-break-ii/)	|	_O(n \* l^2 + n \* r)_	|	_O(n^2)_ |	Hard | 🎅DFS with Memoization, 没有memoization TLE, ✏️[C++ Std:function](https://github.com/beckswu/Leetcode/blob/master/Backtracking/140.%20Word%20Break%20II.cpp#L103) |
| [212. Word Search II](https://leetcode.com/problems/word-search-ii/)	|	_O(m * n * l)_	|	_O(l)_ |	Hard | Suffix Trie (backtracking 是把board 暂时改了, 省去了hashset visited), 难度medium左右, ✏️[Python Complex number 表示四个DFS 方向, Dictionary setdefault](https://github.com/beckswu/Leetcode/blob/master/Backtracking/212.%20Word%20Search%20II.py#L36) |
| [526. Beautiful Arrangement](https://leetcode.com/problems/beautiful-arrangement/description/)	|	_O(n!)_	|	_O(n)_ |	Medium | swap, 注意if 条件, 🔍[Python Solution](https://github.com/beckswu/Leetcode/blob/master/Backtracking/526.%20Beautiful%20Arrangement.py#L6) |
| [676. Implement Magic Dictionary](https://leetcode.com/problems/implement-magic-dictionary/description/)	|	_O(n)_	|	_O(d)_ |	Medium | <ul><li>😚[Suffix Trie](https://github.com/beckswu/Leetcode/blob/master/Backtracking/676.%20Implement%20Magic%20Dictionary.py)</li><li> instead search every chars from A-Z, search hello as *ello, h*llo</li></ul> |
| [679. 24 Game](https://leetcode.com/problems/24-game/description/)	|	_O(1)_	|	_O(1)_ |	Hard | Complexity: upper bound of 12\* 6 \* 2 \* 4 \* 4 \* 4 = 9216 possibilities🔍🔍 [Python Solution](https://github.com/beckswu/Leetcode/blob/master/Backtracking/679.%2024%20Game.py)| 
| [698. Partition to K Equal Sum Subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/)	|	_O(n\* 2^n)_	|	_O(2^n)_ |	Medium |😍😍  非常经典题目, <ul><li> 🔍Solution 1: [Bucket](https://github.com/beckswu/Leetcode/blob/master/Backtracking/698.%20Partition%20to%20K%20Equal%20Sum%20Subsets.cpp#L20), 需要sort, 否则TLE </li><li> Solution 2: 要有start index, 否则time out</li></ul> |  
| [718. Maximum Length of Repeated Subarray](https://leetcode.com/problems/maximum-length-of-repeated-subarray/)	|	_O(m \* n)_	|	_O(min(m, n))_ |	Medium | 🔍 [DP](https://github.com/beckswu/Leetcode/blob/master/Backtracking/718.%20Maximum%20Length%20of%20Repeated%20Subarray.cpp#L69)  |
| [784. Letter Case Permutation](https://leetcode.com/problems/letter-case-permutation/description/)	|	_O(n \* 2^n)	_	|	_O(1)_ |	Easy |  ✏️[Python itertools.product](https://github.com/beckswu/Leetcode/blob/master/Backtracking/784.%20Letter%20Case%20Permutation.py#L68)|

## Graph

 |Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [1361. Validate Binary Tree Nodes](https://leetcode.com/problems/validate-binary-tree-nodes/)	|	_O(n)_	|	_O(n)_ | Medium | DFS |
 
</br>
</br>

DFS 是看有没有path，DP是看有几个path
 ## Dynamic Programming 
 |Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| [010. Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/description/)	|	_O(m\*n)_	|	_O(n)_ |	Hard | 🎅🎅 |
| [053. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)	|	_O(n)_	|	_O(1)_ |	Easy | 😍 更新res, minsum 的顺序 |
| [062. Unique Paths](https://leetcode.com/problems/unique-paths/)	|	_O(m \* n)_	|	_O(m + n)_ |	Medium |  |
| [063. Unique Paths II](https://leetcode.com/problems/unique-paths-ii/description/)	|	_O(m \* n)_	|	_O(m + n)_ |	Medium |  |
| [064. Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/)	|	_O(m \* n)_	|	_O(m + n)_ |	Medium | |
| [070. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/description/)	|	_O(n)_	|	_O(1)_ |	Easy |  |
| [072. Edit Distance](https://leetcode.com/problems/edit-distance/)	|	_O(m\*n)_	|	_O(m+n)_ |	Hard |  |
| [087. Scramble String](https://leetcode.com/problems/scramble-string/description/)	|	_O(n^4)_	|	_O(n^3)_ |	Hard | 🎅 Memoization |
| [091. Decode Ways](https://leetcode.com/problems/decode-ways/description/)	|	_O(n)_	|	_O(1)_ |	Medium | 😍😍🎅 similar question: [062. Unique Paths](https://leetcode.com/problems/unique-paths/), [070. Climbing Stairs](https://leetcode.com/problems/climbing-stairs/description/) [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) |
| [097. Interleaving String](https://leetcode.com/problems/interleaving-string/)	|	_O(m\*n)_	|	_O(m+n)_ |	Hard | 🎅 DP, DFS, BFS |
| [115. Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/)	|	_O(n^2)_	|	_O(n)_ |	Hard | 🎅🎅 |
| [120. Triangle](https://leetcode.com/problems/triangle/)	|	_O(m\*n)_	|	_O(n)_ |	Medium | Bottom-up DP  |
| [123. Best Time to Buy and Sell Stock III	](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/)	|	_O(n)_	|	_O(n)_ |	Hard |  [🎅🎅Why variables order doesn't matter](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/123.%20Best%20Time%20to%20Buy%20and%20Sell%20Stock%20III.cpp#L236)  类似 [188. Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/) |
| [132. Palindrome Partitioning II](https://leetcode.com/problems/palindrome-partitioning-ii/description/)	|	_O(n^2)_	|	_O(n) </br>~O(n)_ |	Hard | 🎅🎅 |
| [139. Word Break](https://leetcode.com/problems/word-break/description/)	|	_O(n^2)_	|	_O(n)_ |	Medium | <ul><li> DP </li><li>Suffix Trie + DP </li></ul> |
| [152. Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)	|	_O(n)_	|	_O(1)_ |	Medium | [🎅🎅Prefix Product, Suffix Product](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/152.%20Maximum%20Product%20Subarray.cpp#135) |
| [174. Dungeon Game](https://leetcode.com/problems/dungeon-game/)	|	_O(n+m)_	|	_O(n)~O(1)_ |	Hard | 🎅 bottom-up DF, Can't start at (0,0) |
| [188. Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/)	|	_O(k*n)_	|	_O(n)_ |	Hard | 类似[123. Best Time to Buy and Sell Stock III	](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/) |
| [198. House Robber](https://leetcode.com/problems/house-robber/)	|	_O(n)_	|	_O(1)_ |	Easy | Top-down / bottom-up |
| [213. House Robber II](https://leetcode.com/problems/house-robber-ii/)	|	_O(n)_	|	_O(1)_ |	Medium | 分成两个house rob问题，<ul><li>Rob houses 0 to n - 2 </li> <li>Rob houses 1 to n - 1</li></ul> |
| [221. Maximal Square](https://leetcode.com/problems/maximal-square/)	|	_O(n^2)_	|	_O(n)_ |	Medium | 类似的题: <ul><li>[304. Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)</li><li>[661 Image Smoother](https://leetcode.com/problems/image-smoother/)</li><li>[1277. Count Square Submatrices with All Ones](https://leetcode.com/problems/count-square-submatrices-with-all-ones//)</li><li>[1314. Matrix Block Sum](https://leetcode.com/problems/matrix-block-sum/)</li></ul>  |
| [279. Perfect Squares](https://leetcode.com/problems/perfect-squares/description/)	|	_O(n \* sqrt(n)_	|	_O(n)_ |	Medium |Bottom-Up DP, Top-Down DP,BFS. Similar Question <ul><li> [322. Coin Change](https://leetcode.com/problems/coin-change/description/) </li><li>[377. Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/description/)	</li></ul> |
| [304. Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)	|	_ctor: O(m * n), lookup: O(1)_	|	_O(m+n)_ |	Medium | 类似的题: <ul><li>[221. Maximal Square](https://leetcode.com/problems/maximal-square/)</li><li>[661 Image Smoother](https://leetcode.com/problems/image-smoother/)</li><li>[1277. Count Square Submatrices with All Ones](https://leetcode.com/problems/count-square-submatrices-with-all-ones//)</li><li>[1314. Matrix Block Sum](https://leetcode.com/problems/matrix-block-sum/)</li></ul>  |
| [309. Best Time to Buy and Sell Stock with Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/)	|	_O(n)_	|	_O(1)_ |	Medium | |
| [312. Burst Balloons](https://leetcode.com/problems/burst-balloons/description/)	|	_O(n^3)_	|	_O(n^2)_ |	Hard | Top-Down / Bottom-up |
| [322. Coin Change](https://leetcode.com/problems/coin-change/description/)	|	_O(n\*k)_	|	_O(k)_ |	Medium | Bottom-up, Top-Down, BFS, Similar Question <ul><li> [279. Perfect Squares](https://leetcode.com/problems/perfect-squares/description/) </li><li>[377. Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/description/) </li></ul> |
| [338. Counting Bits](https://leetcode.com/problems/counting-bits/)	|	_O(n)_	|	_O(n)_ |	Medium | Math 找规律 |
| [357. Count Numbers with Unique Digits](https://leetcode.com/problems/count-numbers-with-unique-digits/description/)	|	_O(n)_	|	_O(1)_ |	Medium | 🎅DP, Static DP, backtracking |
| [368. Largest Divisible Subset](https://leetcode.com/problems/largest-divisible-subset/)	|	_O(n^2)_	|	_O(n)_ |	Medium | 🎅🎅Key: ```a < b < c, if c % b = 0 and b % a = 0 Then c % a == 0 ``` |
| [375. Guess Number Higher or Lower II](https://leetcode.com/problems/guess-number-higher-or-lower-ii/description/)	|	_O(n^2)_	|	_O(n^2)_ |	Medium | [🎅](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/375.%20Guess%20Number%20Higher%20or%20Lower%20II.cpp#L6) |
| [377. Combination Sum IV](https://leetcode.com/problems/combination-sum-iv/description/)	|	_O(nlogn + n \* t)_	|	_O(t)_ |	Medium | Similar Question <ul><li> [279. Perfect Squares](https://leetcode.com/problems/perfect-squares/description/) </li><li>[322. Coin Change](https://leetcode.com/problems/coin-change/description/)</li></ul> |
| [403. Frog Jump](https://leetcode.com/problems/frog-jump/description/)	|	_O(n^2)_	|	_O(n^2)_ |	Hard | 经典, TopDown, Bottom-up, BFS |
| [416. Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/description/)	|	_O(n\*s)_	|	_O(s)_ |	Medium | backtracking / DP |
| [446. Arithmetic Slices II - Subsequence](https://leetcode.com/problems/arithmetic-slices-ii-subsequence/description/)	|	_O(n^2)_	|	_O(n\*d)_ |	Hard | [🎅](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/446.%20Arithmetic%20Slices%20II%20-%20Subsequence%20.cpp#L23)  |
| [466. Count The Repetitions](https://leetcode.com/problems/count-the-repetitions/description/)	|	_O(s1 \* min(s2, n1))_	|	_O(s2)_ |	Hard | 🎅🎅 |
| [467. Unique Substrings in Wraparound String](https://leetcode.com/problems/unique-substrings-in-wraparound-string/)	|	_O(n)_	|	_O(1)_ |	Medium | 经典🎅🎅 |
| [472. Concatenated Words](https://leetcode.com/problems/concatenated-words/description/)	|	_O(n \* l^2)_	|	_O(l)_ |	hard | suffix Trie  |
| [474. Ones and Zeroes](https://leetcode.com/problems/ones-and-zeroes/)	|	_O(s \*m \* n)_	|	_O(s \*m \* n)_|	Medium | 经典🎅, [Top-Down](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/474.%20Ones%20and%20Zeroes.cpp#L77), Bottom-up |
| [486. Predict the Winner](https://leetcode.com/problems/predict-the-winner/)	|	_O(n^2)_	|	_O(n)_|	Medium | 经典🎅🎅, [DP解](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/486.%20Predict%20the%20Winner.cpp#L33), DFS |
| [514. Freedom Trail](https://leetcode.com/problems/freedom-trail/description/)	|	_O(k) ~ O(k \* r^2)_	|	_O(r)_|	Hard | 经典🎅🎅  |
| [516. Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/description/)	|	_O(n^2)_	|	_O(n)_|	Medium | 经典dp |
| [518. Coin Change 2](https://leetcode.com/problems/coin-change-2/)	|	_O(n^2)_	|	_O(n)_|	Medium | 经典🎅TopDown, Bottom-up |
| [546. Remove Boxes](https://leetcode.com/problems/remove-boxes/description/)	|	_O(n^3) ~ O(n^4)_	|	_O(n^3)_|	Hard | 📖 dp\[i]\[j]\[k] 存的是从given k个与j一样的数在j后，从i,到j 最大得数 |
| [552. Student Attendance Record II](https://leetcode.com/problems/student-attendance-record-ii/description/)	|	_O(n)_	|	_O(1)~O(n)_|	Hard | |
| [576. Out of Boundary Paths](https://leetcode.com/problems/student-attendance-record-ii/description/)	|	_O(N \* m \* n)_	|	_O(m \* n)_|	Medium | dp or dfs with memoization or 每次进入只能从 (i+j)%2 = 1 进入(i+j)%2 = 0 或者 从 (i+j)%2 = 0 进入(i+j)%2 = 1 |
| [583. Delete Operation for Two Strings](https://leetcode.com/problems/delete-operation-for-two-strings/description/)	|	_O(m\*n)_	|	_O(n)_|	Medium | Edit Distance without replace |
| [600. Non-negative Integers without Consecutive Ones](https://leetcode.com/problems/non-negative-integers-without-consecutive-ones/description/)	|	_O(1)_	|	_O(1)_|	Hard | Fibonacci Sequence, 比如11000 返回fb\[5], 10101 返回 fb\[4]+ fb\[2]+fb\[0]+1 |
| [629. K Inverse Pairs Array](https://leetcode.com/problems/k-inverse-pairs-array/)	|	_O(n\*k)_	|	_O(k)_|	Hard |  |
| [639. Decode Ways II](https://leetcode.com/problems/decode-ways-ii/)	|	_O(n)_	|	_O(1)_|	Hard |  |
| [650. 2 Keys Keyboard](https://leetcode.com/problems/2-keys-keyboard/)	|	_O(sqrt(n))_	|	_O(1)_|	Medium |  |
| [664. Strange Printer](https://leetcode.com/problems/strange-printer/)	|	_O(n^3)_	|	_O(n^2)_|	Hard | 📖dp\[i]\[j] 表示从i到j，最少print的次数 |
| [673. Number of Longest Increasing Subsequence](https://leetcode.com/problems/number-of-longest-increasing-subsequence/)	|	_O(n^2)_	|	_O(n)_|	Medium |  |
| [688. Knight Probability in Chessboard](https://leetcode.com/problems/knight-probability-in-chessboard/)	|	_O(k\*n^2)_	|	_O(k\*n^2)</br>~O(n^2)_|	Medium | DP or DFS + Memoization |
| [689. Maximum Sum of 3 Non-Overlapping Subarrays](https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/description/)	|	_O(n)_	|	_O(n)_|	Hard | W记录每个点往后k个sum, left, right记录到j点左面和右面最大k个sum的index, 这样可以O(n) 完成 |
| [691. Stickers to Spell Word](https://leetcode.com/problems/stickers-to-spell-word/description/)	|	_O(2^T\*S\*T)_	|	_O(2^T)_|	Hard | 一个长度为2^T array, array的j位记录此binary number的i位为1的,在target中被set 需要最小sticker数，比如target长度为4，array长度为16，j = 5(1001) dp\[5] 表示当第0位和第三位在target中被set 所需最小sticker数 |
| [712. Minimum ASCII Delete Sum for Two Strings](https://leetcode.com/problems/minimum-ascii-delete-sum-for-two-strings/)	|	_O(m*n)_	|	_O(m\*n)</br>~O(n)_|	Medium | Edit Distance |
| [730. Count Different Palindromic Subsequences](https://leetcode.com/problems/count-different-palindromic-subsequences/description/)	|	_O(n^2)_	|	_O(n)_|	Hard | dp\[len]\[i]\[x] 存的是在i 往后,starting index 为x, 长度为len的Palindromic |
| [740. Delete and Earn](https://leetcode.com/problems/delete-and-earn/description/)	|	_O(n)_	|	_O(n)_|	Medium | 相当于house robbery，不能同时rob两个邻居的, dp\[i] = max(dp\[i-2]+dp\[i], dp\[i-1]); |
| [741. Cherry Pickup](https://leetcode.com/problems/cherry-pickup/description/)	|	_O(n^3)_	|	_O(n^2)_|	Hard |两个人同时从(0，0) 出发，到达(N-1, N-1), k为此时距(0,0)距离, dp\[i]\[j]代表 距离为k时person1到i,k-i, person2到j,k-j, 一共可以pick up最多cherry，dp\[i]\[j] = grid\[i]\[k-i]+grid\[j]\[k-j]+max( <ul><li> dp\[i]\[j], //person1 向右走，person2 向右走</li><li> dp\[i-1]\[j]), //person1 向下走, person2 向右走</li><li> dp\[i]\[j-1]), //person1 向右走，person2 向下走</li><li> dp\[i-1]\[j-1]), //person1 向下走，person2 向下走) </li></ul> |
| [746. Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)	|	_O(n)_	|	_O(1)_|	Easy | take or skip |
| [764. Largest Plus Sign](https://leetcode.com/problems/largest-plus-sign/description/)	|	_O(n^2)_	|	_O(n^2)_|	Medium | Maximal Square, 从左到右，从上到下，从右到左，从下到上,更新最小的count |
| [788. Rotated Digits](https://leetcode.com/problems/largest-plus-sign/description/)	|	_O(n)~O(logn)_	|	_O(n)~O(logn)_|	Easy |<ul><li>O(logn) 算所有比当前digit减1是good number的所有的数，比如24 i = 1, 算的是0-19是good number的，算所有valid的，减去自己rotate还是自己的 i=1 算20-24 </li><li> O(n), 记录if i==good number, dp\[i] = 2, i==self rotate, dp\[i]=1, else dp\[i]=0</li></ul> |
| [790. Domino and Tromino Tiling](https://leetcode.com/problems/domino-and-tromino-tiling/)	|	_O(n)_	|	_O(n)~O(1)_|	Medium |  dp\[n]=2*dp\[n-1]+dp\[n-3] |
| [799. Champagne Tower](https://leetcode.com/problems/champagne-tower/)	|	_O(n^2)_	|	_O(n^2)~O(n)_|	Medium | |
| [801. Minimum Swaps To Make Sequences Increasing](https://leetcode.com/problems/minimum-swaps-to-make-sequences-increasing/description/)	|	_O(n)_	|	_O(1)_|	Medium | |
| [805. Split Array With Same Average](https://leetcode.com/problems/split-array-with-same-average/description/)	|	_O(n^4)_	|	_O(n^3)_|	Hard | totalSum/n = Asum/k = Bsum/(n-k), where k = A.size() and 1 <= k <= n/2; |
| [808. Soup Servings](https://leetcode.com/problems/soup-servings/description/)	|	_O(1)_	|	_O(1)_|	Medium | Memoization |
| [813. Largest Sum of Averages](https://leetcode.com/problems/largest-sum-of-averages/)	|	_O(k\*n^2)_	|	_O(n)_|	Hard | dp\[k]\[i] 表示在A\[:i] 中最多分k次 所得的平均数最大和 dp\[k]\[i] = max(dp\[k]\[i], dp\[k-1]\[j] + (sum\[i]-sum\[j])/(i-j))  |
| [818. Race Car](https://leetcode.com/problems/largest-sum-of-averages/)	|	_O(nlogn)_	|	_O(n)_|	Hard | <ul><li>if i=2^n-1, dp\[i]=n, </li><li>else dp\[i] = min(n + 1 + dp\[(1 << n)-1 - i], n-1+2+k+dp\[i-((1 << (n-1)) - (1 << k))] for j in \[0,n] ), </li><li>n + 1 + dp\[(1 << n)-1 - i]是先到2^n-1的用n步, +1是做reverse(停)</li><li> n-1+2+k+dp\[i-((1 << (n-1)) - (1 << k))] 是先到之前2^(n-1)-1的点, 接着+1做reverse(停),然后往回走(2^k-1)点，+1做reverse(停)，再从那个点到点i </ul></li>|
| [823. Binary Trees With Factors](https://leetcode.com/problems/binary-trees-with-factors/)	|	_O(n^2)_	|	_O(n)_|	Medium | 找规律  |
| [1035. Uncrossed Lines](https://leetcode.com/problems/uncrossed-lines/)	|	_O(m\*n)_	|	_O(min(m,n))_|	Medium | Bottom-Up / Top-Down  |
| [1277. Count Square Submatrices with All Ones](https://leetcode.com/problems/count-square-submatrices-with-all-ones//)	|	_O(m\*n)_	|	_O(1)_|	Medium | 类似的题: <ul><li>[221. Maximal Square](https://leetcode.com/problems/maximal-square/)</li><li>[304. Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/)</li><li>[661 Image Smoother](https://leetcode.com/problems/image-smoother/)</li><li>[1314. Matrix Block Sum](https://leetcode.com/problems/matrix-block-sum/)</li></ul> |
| [1387. Sort Integers by The Power Value](https://leetcode.com/problems/sort-integers-by-the-power-value/)	|	_O(n)_ average	|	_O(n)_|	Medium | nth_element, ✏️✏️[C++ Static Variable](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/1387.%20Sort%20Integers%20by%20The%20Power%20Value.cpp#L3) [Python Static Variable](https://github.com/beckswu/Leetcode/blob/master/Dynamic%20Programming/1387.%20Sort%20Integers%20by%20The%20Power%20Value.py#L20)  |
| [1388. Pizza With 3n Slices](https://leetcode.com/problems/pizza-with-3n-slices/)	|	_O(n^2)_  |	_O(n)_|	Hard | 😍😍 类似[213. House Robber II](https://leetcode.com/problems/house-robber-ii/) 和 [188. Best Time to Buy and Sell Stock IV](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/) |
| [1395. Count Number of Teams](https://leetcode.com/problems/count-number-of-teams/)	|	_O(n^2)_  |	_O(1)_|	Medium |   |
| [1411. Number of Ways to Paint N × 3 Grid](https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/)	|	_O(logn)_  |	_O(1)_|	Medium | 😍😍 Matrix Exponentiation  |
| [1420. Build Array Where You Can Find The Maximum Exactly K Comparisons](https://leetcode.com/problems/build-array-where-you-can-find-the-maximum-exactly-k-comparisons/)	|	_O(n\*m\*k)_  |	_O(m\*k)_|	Hard | 🎅  |
| &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|  |	|  | |

<br/>
<br/>


## Design 

|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | :-------------: | :-------------: | :-------------: | :------------- |
| [146. LRU Cache](https://leetcode.com/problems/lru-cache/) | _O(1)_ |	_O(k)_ |	Medium | <ul><li>✏️✏️[C++ List Splice](https://github.com/beckswu/Leetcode/blob/master/Design/146.%20LRU%20Cache.cpp#L1) </li><li>✏️✏️[Python OrderedDict](https://github.com/beckswu/Leetcode/blob/master/Design/146.%20LRU%20Cache.py) </li></ul> |
| [1381. Design a Stack With Increment Operation](https://leetcode.com/problems/design-a-stack-with-increment-operation/) | ctor: _O(1)_ <br/>
push: _O(1)_ <br/>
pop: _O(1)_ <br/>
increment: _O(1)_ |	_O(n)_ |	Medium | Lazy increment |
| [1396. Design Underground System](1396	Design Underground System) | ctor: _O(1)_ <br/>
checkin: _O(1)_ <br/>
checkout: _O(1)_ <br/>
getaverage: _O(1)_ |	_O(n)_ |	Medium |  |




<br/>
<br/>


## Bash
|Title | Time  | Space | Difficulty |  Algorithm Note|
| ------------- | :-------------: | :-------------: | :-------------: | :------------- |
| [192	Word Frequency](https://leetcode.com/problems/word-frequency/) | 	_O(n)_ |	_O(k)_ |	Medium | switch column ```awk```, remove whitespace ```sed``` |
| [193. Valid Phone Numbers](https://leetcode.com/problems/valid-phone-numbers/submissions/) | _O(n)_ | _O(1)_ | Easy | ```grep``` |
| [194	Transpose File	Shell](https://leetcode.com/problems/transpose-file/) | _O(n^2)_ | _O(n^2)_ |	Medium | ```paste``` & ```cut``` |	
| [195. Tenth Line](https://leetcode.com/problems/tenth-line/) | _O(n)_ | _O(1)_ | Easy | ```awk, sed``` |
