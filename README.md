# Terminate LeetCode Together
In order to get a better JOB👔!?

️️✏️Add Whatever you want✏️

## Good Website🌐
- [LeetCode](https://leetcode.com/)
- [演算法筆記](http://www2.csie.ntnu.edu.tw/~u91029/)
- [EMOJI CheatSheet](https://gist.github.com/roachhd/1f029bd4b50b8a524f3c)
- [Oh Shit, Git!?!](https://ohshitgit.com/)
	> Click it When you have some Git problem

## Some Git Tip
- 更新remote並查看本端跟remote檔案差別
	```shell
	$ git remote update && git diff origin/master
	```

- 開新分支並前往該分支
	```shell
	$ git checkout -b test
	```

- 把新修正加入之前的 commit
	```shell
	$ git stash
  $ git rebase -i
  # change the target commit to "edit"
  $ git stash pop
  $ git add target_file
  $ git commit --amend --no-edit
  $ git stash
  $ git rebase --continue
  $ git stash pop
	```

## Useful Command
- To find out which problem you haven't solved yet
  ```sh
  # For example: Yuan
  $ find . -mindepth 1 -maxdepth 1 -type d '!' -exec test -d "{}/Yuan" ';' -print
  ```
