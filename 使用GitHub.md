# GitHub 实用指南

### 小白使用GitHub第一课:快速上手

* 前提: 首先我们要确定你注册好了GitHub账号[网址](https://github.com/),  下载&安装好了git工具[网址](https://git-scm.com/)

* 第一步: 配置ssh, 建立本地git 和 GitHub的连接

  1. 创建一个本地文件夹

  2. 打开文件夹,右键选择Git Bash Here 打开Bash窗口

  3. 执行命令: `git init`  (初始化git)

  4. 执行命令: `ssh-keygen -t rsa -b 4096 -C "yourEmail"` 

      (生成ssh key, 注意引号里面改成你的email)

  5. 执行命令: `clip < ~/.ssh/id_rsa.pub`   (复制你的秘钥)

  6. 去网站setting–SSH and GPG keys–New SSH key添加你的秘钥
  
  7. 回到Bash测试连接GitHub, 执行命令: `ssh -T git@github.com`

* 第二步:  创建远程仓库并下载

  1. 去网站点击+,创建新的仓库
  
  2. 设置仓库的名字,描述,是否公开,是否包含README,指定忽略的文件,开源许可证
  
  3. 复制创建成功后的仓库网址
  
  4. 回到Bash执行命令: `git clone 仓库网址`(克隆远程仓库到本地)

* 第三步:  修改本地仓库上传到GitHub
  
  1. 在本地文件夹修改好文件, 执行命令: `git status` (查看文件状态)
  
  2. 进入仓库文件夹下,进入仓库文件夹下,进入仓库文件夹下,
     
     执行命令: `git add .` (注意点前面有空格)

  3. 执行命令: `git commit -m 'my project push'` (备注操作, 引号内容可以自定义)
  
  4. 执行命令: `git push origin master` (上传到主分支 master)
  
  5. 之后会弹出输入GitHub账号密码的界面,输入完毕就可以执行上传了 

### GitHub使用第二课, 错误总结

-   git pull  拉取已经建立过的项目,修改后add+commit,再git push就行了
-   没有建立好公钥,重新上传公钥参考快速上手第一步

