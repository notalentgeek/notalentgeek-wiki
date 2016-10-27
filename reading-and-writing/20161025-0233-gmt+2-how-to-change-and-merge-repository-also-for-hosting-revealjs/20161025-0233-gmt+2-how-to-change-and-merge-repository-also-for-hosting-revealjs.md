* How to make branch and then change all commits into the newly created branch (this called a merge actually).
* Let say I have branch named `master` and I want to change/merge/move everything from `master` into a new branch called `gh-pages` (GitHub official branch name to make repository a static website). I just need to type these commands in the root directory of the local repository.

```markdown
git checkout -b gh-pages
git merge master
git push origin gh-pages
```

* This command I use to make a static website for my RevealJS presentation.
* StackOverflow links.
    * [http://stackoverflow.com/questions/20411849/push-local-master-into-gh-pages-branch-on-github](http://stackoverflow.com/questions/20411849/push-local-master-into-gh-pages-branch-on-github), how to change and merge branch. Here I change `git checkout gh-pages` into `git checkout -b gh-pages`.
    * [http://stackoverflow.com/questions/31163633/](http://stackoverflow.com/questions/31163633/), general idea on how to host RevealJS presentation.