# 📚 Latex_Used · 我的 LaTeX 作业集

[![LaTeX build check](https://github.com/qiqiqisi/Latex_Used/actions/workflows/latex-check.yml/badge.svg?branch=main)](https://github.com/qiqiqisi/Latex_Used/actions/workflows/latex-check.yml)

这里收录了我用 LaTeX 完成的课程作业和实验报告。每份作业都住在自己的文件夹里：`.tex` 源码、实验截图、参考文件和已有的成品 PDF 尽量放在一起，打开就能看，也方便继续修改 🌱

> 🎨 只想找一份干净的实验报告模板？请切换到 [data_structure 模板分支](https://github.com/qiqiqisi/Latex_Used/tree/data_structure)。那里没有具体作业内容，只有可直接复用的模板、代码样式和 TikZ 节点绘图示例。

## 🧭 两条分支，一眼看懂

| 分支 | 放什么 | 适合谁 |
|---|---|---|
| [`main`](https://github.com/qiqiqisi/Latex_Used/tree/main) | 📚 真实作业、完整 LaTeX 源码、图片和 PDF | 想看成品与实际写法 |
| [`data_structure`](https://github.com/qiqiqisi/Latex_Used/tree/data_structure) | 🎨 通用实验报告模板与节点绘图示例 | 想快速开始自己的报告 |

## 🗂️ 作业目录

| # | 作业 | 主要内容 | 成品 |
|---:|---|---|---|
| 01 | [Git 与 LaTeX 入门](homeworks/01-git-and-latex) | Git 常用命令、GitHub 操作、LaTeX 基础 | [📄 report.pdf](homeworks/01-git-and-latex/report.pdf) |
| 02 | [Shell 与 Vim](homeworks/02-shell-and-vim) | Shell 文件操作、逻辑运算、Vim 编辑 | [📄 report.pdf](homeworks/02-shell-and-vim/report.pdf) |
| 03 | [命令行与 Python](homeworks/03-command-line-and-python) | tmux、Shell、Python 容器与图像处理 | [📄 report.pdf](homeworks/03-command-line-and-python/report.pdf) |
| 04 | [MATLAB 频谱分析](homeworks/04-matlab-spectral-analysis) | MATLAB 基础、DFT/FFT、采样与混叠 | [📄 早期版本](homeworks/04-matlab-spectral-analysis/legacy-report.pdf) |
| 05 | [数据结构与 GCN](homeworks/05-data-structure-gcn) | 图结构、DFS/BFS、稀疏矩阵、GCN | 源码可直接编译 |

## 📁 整理后的结构

```text
.
├── README.md
├── .gitignore
└── homeworks/
    ├── 01-git-and-latex/
    ├── 02-shell-and-vim/
    ├── 03-command-line-and-python/
    ├── 04-matlab-spectral-analysis/
    └── 05-data-structure-gcn/
```

每个作业文件夹至少包含：

- 🧾 `main.tex`：可编辑的 LaTeX 主文件
- 🖼️ 实验截图、图表或学校标识等资源
- 📖 `README.md`：内容说明、来源和编译方式
- 📄 `report.pdf`：仓库原本已有时保留；没有时可由源码生成

## ⚡ 怎样编译一份作业？

这些中文报告推荐使用 **XeLaTeX**。进入对应文件夹后连续编译两次：

```bash
xelatex main.tex
xelatex main.tex
```

第二次编译会更新目录、页码和交叉引用。也可以把整个作业文件夹上传到 Overleaf，再把编译器切换为 XeLaTeX ☁️

## 💡 阅读建议

- 想了解 Git 和 LaTeX 的基本操作，从 **01** 开始 🐣
- 想看终端工具与 Python 学习过程，接着看 **02** 和 **03** 🛠️
- 对信号处理感兴趣，可以直接看 **04** 的 MATLAB 频谱分析 📈
- 想看公式、代码高亮和 TikZ 节点图综合使用，推荐 **05** 🕸️

## 🌟 关于这个仓库

这个仓库既是一份作业档案，也是一条学习轨迹。内容不一定完美，但每一次实验、每一张截图、每一段 LaTeX 都记录了当时真实的学习过程。希望它能给正在写报告的你一点参考，也给未来的我留下一份清晰的回忆 ✨

如果你觉得其中的模板或例子有帮助，欢迎点一颗 ⭐！

