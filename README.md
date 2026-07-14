# 🎨 OUC LaTeX 实验报告模板

[![LaTeX build check](https://github.com/qiqiqisi/Latex_Used/actions/workflows/latex-check.yml/badge.svg?branch=data_structure)](https://github.com/qiqiqisi/Latex_Used/actions/workflows/latex-check.yml)

一份开箱即用、适合课程实验和日常作业的中文 LaTeX 模板。改完首页信息就能写，表格、公式、代码、流程图和节点关系图都准备好了 ✨

> 🌿 当前分支只放“纯模板”。想看真实作业，请前往 [📚 main 作业展示分支](https://github.com/qiqiqisi/Latex_Used/tree/main)。

## 🚀 三步开始

1. 下载或克隆模板分支：

   ```bash
   git clone --branch data_structure --single-branch https://github.com/qiqiqisi/Latex_Used.git
   ```

2. 打开 `main.tex`，先修改最上方的报告信息：标题、课程、姓名、学号、院系和教师。
3. 使用 **XeLaTeX** 编译两次：

   ```bash
   xelatex main.tex
   xelatex main.tex
   ```

不想配置本地环境？把整个文件夹上传到 Overleaf，并把编译器切换为 **XeLaTeX** 即可 ☁️

## 🧰 模板里有什么？

| 功能 | 用法 |
|---|---|
| 🪪 中文封面 | 集中修改 `main.tex` 顶部的 8 项信息 |
| 🧭 自动目录 | 编译两次后自动生成并更新 |
| 🧮 数学公式 | 已引入 `amsmath` 与 `amssymb` |
| 📊 三线表格 | 已配置 `booktabs` 与自适应宽度表格 |
| 💻 代码高亮 | 支持 C++、Python、MATLAB 等 `listings` 语言 |
| 🧩 流程图 | 内置可直接改字的 TikZ 流程节点模板 |
| 🕸️ 关系图 | 内置圆形节点、无向边、有向边和边权示例 |
| 🖼️ 图片与子图 | 支持普通图片、并排子图和统一标题 |
| 🔗 交叉引用 | 公式、图、表、代码都可编号引用 |

## 📁 文件结构

```text
.
├── main.tex                 # ⭐ 报告主文件
├── assets/
│   └── ouc-logo.png         # 页眉与封面图片，可替换
├── examples/
│   └── example.cpp          # 外部代码引用示例
├── .gitignore               # 忽略 LaTeX 临时文件
└── README.md
```

## 🧩 怎样修改节点图？

`main.tex` 中已经放了两种可复用图形：

- 🔁 **流程图**：适合实验步骤、算法流程和判断分支；复制 `tikzpicture` 区块后修改节点文字即可。
- 🕸️ **关系图**：适合树、图、模块依赖和网络拓扑；复制或删除 `\node`，再用 `\draw` 连接节点。

小提示：把 `--` 改成 `->` 就能把普通连线变成有向箭头；`node[above]{文字}` 可以给边添加标签 🪄

## ✍️ 推荐写作顺序

1. 🎯 实验目的与任务
2. 🧪 环境和数据
3. 🧠 原理与设计
4. 🪜 实验步骤
5. 💻 核心代码
6. 📈 结果与分析
7. 🛠️ 问题与解决方法
8. 🌱 总结与改进

模板中的灰色斜体文字都是提示语，正式提交前替换或删除即可。

## 🧯 常见问题

<details>
<summary><strong>中文显示不正常怎么办？</strong></summary>

确认编译器是 XeLaTeX，而不是 pdfLaTeX。
</details>

<details>
<summary><strong>目录或引用显示为 ?? 怎么办？</strong></summary>

连续编译两次；LaTeX 需要第一遍收集编号，第二遍写入目录和引用。
</details>

<details>
<summary><strong>没有学校图片还能编译吗？</strong></summary>

可以。模板会自动使用文字占位，不会因为图片缺失而中断编译。
</details>

## 🌈 另一条分支

想看看模板在真实作业中的使用效果？去 [📚 main 分支](https://github.com/qiqiqisi/Latex_Used/tree/main) 逛逛，那里每份作业都有独立文件夹、完整 `.tex` 源码、图片资源和已有的成品 PDF。

如果这份模板帮你少熬了一会儿夜，欢迎点一颗 ⭐！

