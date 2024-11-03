/*
(未解决)
### 题目描述：

每个球员有一套天赋树，每个天赋节点消耗若干中级或高级天赋材料来激活。首节点无需前置条件，其他天赋节点需要激活特定的前置节点。高级天赋材料还可以用同等数量的高级天赋自选包替代。你需要计算玩家在资源足够时，能够最大化获得的能力值。

### 输入：
1. 第一行一个整数 `n`，表示天赋节点的数量。
2. 第二行两个整数 `X` 和 `Y`，分别表示解锁中级天赋和高级天赋消耗的钻石数。
3. 第三行两个整数 `A` 和 `B`，分别表示初始拥有的钻石数量和高级天赋自选包数量。
4. 第四行包含 `n-1` 个整数，`P2, P3, ..., Pn`，表示每个节点 `i` 的前置节点 `Pi`，其中 `Pi` 是节点 `i` 的前置节点（首节点无前置节点）。
5. 接下来 `n` 行，每行三个整数 `ti, ai, bi`，表示：
   - `ti` 为 0 或 1，0 表示节点 `i` 需要消耗 `ai` 个中级天赋材料，1 表示节点 `i` 需要消耗 `ai` 个高级天赋材料。
   - `ai` 表示节点 `i` 消耗的材料数量。
   - `bi` 表示激活该节点后增加的能力值。

### 输出：
- 输出一个整数，表示在资源足够的情况下，最多能为球员增加的能力值。

### 输入示例：
```
5
1 2
7 3
1 2 1 2
0 2 1
1 3 2
0 1 1
0 5 6
0 1 1
```

### 输出示例：
```
9
```
*/