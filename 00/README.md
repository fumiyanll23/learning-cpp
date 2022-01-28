# C++勉強会 #00

2021/01/29 (Sat.) @オンライン

## 今回やること - Contents

- C++
- paiza.io
- AtCoder
- GitとGitHub
- 練習問題
- この回の参考文献
- 今後の進め方

## C++

### C++とは - What Is the C++?

- 歴史

  > C++は、1983年にAT&Tベル研究所の計算機科学者ビャーネ・ストロヴストルップによって公開された。また様々なプラットフォームでその開発環境が導入された。1998年からISOとIECの共同で言語仕様とテンプレートライブラリの標準化が行われるようになり、その後2003年、2011年、2014年、2017年、2020年に標準規格が改訂されている。2021年時点での最新規格は「ISO/IEC 14882:2020」通称「C++20」である。

  (出典：[Wikipedia](https://ja.wikipedia.org/wiki/C%2B%2B))

- プログラミング言語の分類

  プログラミング言語にはコンパイラ型言語とインタプリタ型言語が存在する．
  **コンパイラ型言語** (compiled language) は，プログラミング言語で書かれたソースコードを **機械語** または **マシン語** (machine language) に変換する作業 (**コンパイル**) が必要である．
  **インタプリタ型言語** (interpreted language) は，コンパイラ型言語と異なりコンパイルする必要がない．
  しかしながら，**実行速度が遅くなる** という欠点がある．
  C++は前者のコンパイラ型言語に該当する．

## paiza.io

### エディタとは - What Is an Editor?

> **エディタ** (または**エディター**、editor) は、コンピュータ上で各種のオブジェクトを編集するソフトウェア。単に**エディタ**という場合、テキストエディタを指すことがある。

(出典：[Wikipedia](https://ja.wikipedia.org/wiki/%E3%82%A8%E3%83%87%E3%82%A3%E3%82%BF))

注) **統合開発環境** (IDE: integrated development environment) とは異なる．例えば，Visual Studio Codeはエディタだが，Visual Studioは統合開発環境である．

### paiza.ioとは - What Is the paiza.io?

> paiza.IOは、ブラウザ上でコードを書け、書いたコードをその場で実行できるオンラインのプログラム実行環境です。

(出典：[paiza.io](https://paiza.io/ja))

### paiza.ioの設定 - Configure the paiza.io

1. [paiza.io](https://paiza.io/ja) にアクセスする．

2. 「エディタの設定」を開き，各項目を以下の通りに設定する：

    - Theme：自分の好きなテーマに変更する．著者は``Monokai''を使用している
    - FontSize：16px
    - Keymap：normal
    - Tab width：4
    - Auto completion：On
    - Show gutter：On
    - Show invisibles：On

## AtCoder

### 競技プログラミングとは - What Is a Competitive Programming?

> **競技プログラミング** (英語: Competitive programming、略称: 競プロ) とは、プログラミングコンテストで行われる競技の一種である。
> 競技プログラミングでは、参加者全員に同一の課題が出題され、より早く与えられた要求を満足するプログラムを正確に記述することを競う。コンピュータサイエンスや数学の知識を必要とする問題が多く、新卒学生の採用活動などに使われることもある。

(出典：[Wikipedia](https://ja.wikipedia.org/wiki/%E7%AB%B6%E6%8A%80%E3%83%97%E3%83%AD%E3%82%B0%E3%83%A9%E3%83%9F%E3%83%B3%E3%82%B0))

### AtCoderとは - What Is the AtCoder?

> AtCoderは、オンラインで参加できるプログラミングコンテスト(競技プログラミング)のサイトです。
>リアルタイムのオンラインコンテストで競い合うことや、3,000以上の過去問にいつでもチャレンジすることができます。

(出典：[AtCoder](https://atcoder.jp/))

### AtCoderアカウントの作成 - Create Your AtCoder Account

[こちら](https://atcoder.jp/) にて右上の **新規登録** へ進む．

### (オマケ) AtCoderで強くなるために - (Appendix) To Become a High Ranker in AtCoder

以下の記事を参照せよ：

- [レッドコーダーが教える、競プロ・AtCoder上達のガイドライン【初級編：競プロを始めよう】](https://qiita.com/e869120/items/f1c6f98364d1443148b3)

また，以下のサイトではAtCoderのコンテストに向けて練習ができる：

- [AtCoder Problems](https://kenkoooo.com/atcoder/#/table/)
  - AtCoderの過去問のほとんどが掲載されている．公式コンテストのみならず有志コンテストで出題された問題もまとめられている
- [AtCoder Beginners Selection](https://atcoder.jp/contests/abs)
  - AtCoderを始めたばかりの人がまず解いておきたい過去問を10問だけ選んでまとめられている．まずは，これらの問題を解けるようになることを目指しましょう
- [競プロ典型90問](https://atcoder.jp/contests/typical90)
  - AtCoderのみならず，競技プログラミング全般における典型を90問で学ぶことができる．作成者は現役の大学生 (ただし，赤コーダー) であり，初心者向けコンテンツとしては最も新しい......はず (2021/01/29現在)

## GitとGitHub

### Gitとは - What Is the Git?

> Git is a free and open source distributed version control system designed to handle everything from small to very large projects with speed and efficiency.

(出典：[Git](https://git-scm.com/))

以下，著者による邦訳：

`Gitは，すべて (小さなプロジェクトから非常に大きなプロジェクトまで) を高速かつ効率的に扱うことができる，無料で利用可能な分散型バージョン管理システムである．`

### Gitのインストール - Install the Git

- [for Windows users](https://git-scm.com/download/win)

### Gitの設定 - Configure the Git

```powershell & zsh
> git config --global user.name "<USER NAME>"
> git config --global user.email <EMAIL ADRESS>
```

これにより，Git使用者の名前とメールアドレスが `~/.gitconfig` に保存される．
保存された情報は以下のコマンドを実行することで確認できる：

```powershell & zsh
> git config -l
```

### GitHubとは - What Is the GitHub?

> GitHubは、ユーザのみなさんからヒントを得て作成された開発プラットフォームです。オープンソースプロジェクトやビジネスユースまで、GitHub上にソースコードをホスティングすることで数百万人もの他の開発者と一緒にコードのレビューを行ったり、プロジェクトの管理をしながら、ソフトウェアの開発を行うことができます。

(出典：[GitHub](https://github.co.jp/))

注) Gitとは異なり，GitHubは特定のサービス名である．

### GitHubアカウントの作成 - Create Your GitHub Account

[こちら](https://github.com) にて右上の **Sign up** へ進む．

### リポジトリとクローン - Repositories and Clone

- **リポジトリ** (repository) ：過去の状態や更新情報などが記録されている "貯蔵庫"．
大きく分けると，以下の4種類が存在する：

  - リモート (remote)：クラウドにあるリポジトリ，

  - ローカル (local)：ローカル環境 (例えば自身のPC) にあるリポジトリ，

  - パブリック (public)：誰でもアクセス可能な公開されているリポジトリ，

  - プライベート (private)：特定の人物しかアクセスできないリポジトリ．

- **クローン** (clone)：リモートリポジトリをローカルにコピーすること．
以下のコマンドを実行することでクローンできる：

  ```powershell & zsh
  > git clone <REPOSITORY URL>
  ```

### プル -> ステージ -> コミット -> プッシュ - Pull -> Stage -> Commit -> Push

- **プル** (pull)：*リモートリポジトリ* での変更を **ローカルリポジトリ** に反映させること．

- **ステージ** (stage)：作業ディレクトリから `ステージングエリア` へ変更を追加すること．

- **コミット** (commit)：`ステージングエリア` から **ローカルリポジトリ** へ変更を追加すること．

- **プッシュ** (push)：**ローカルリポジトリ** から *リモートリポジトリ* へ変更を追加すること．

以下の図を参照せよ：
![Gitを用いたバージョン管理](https://github.com/fumiyanll23/cpp-learning/blob/main/00/img/git.png?raw=true)

一連の操作は以下のコマンドで実行できる：

```powershell & zsh
> git pull <REMOTE NAME> <BRANCH NAME>
> git add <FILE NAME or DIRECTORY NAME>
> git commit -m "<COMMIT MESSAGE>"
> git push <REMOTE NAME> <BRANCH NAME>
```

## 練習問題

[こちら](https://github.com/fumiyanll23/cpp-learning/blob/main/00/exercise_00.md) に書いてある練習問題をやってみましょう!

## この回の参考文献

- 湊川あい・著，DQNEO・監修，[わかばちゃんと学ぶ Git使い方入門](https://www.amazon.co.jp/%E3%82%8F%E3%81%8B%E3%81%B0%E3%81%A1%E3%82%83%E3%82%93%E3%81%A8%E5%AD%A6%E3%81%B6-Git%E4%BD%BF%E3%81%84%E6%96%B9%E5%85%A5%E9%96%80%E3%80%88GitHub%E3%80%81Bitbucket%E3%80%81SourceTree%E3%80%89-%E6%B9%8A%E5%B7%9D-%E3%81%82%E3%81%84/dp/4863542178/ref=tmm_pap_swatch_0?_encoding=UTF8&qid=1615958786&sr=8-1)，C&R研究所，2017．

  - 改訂2版が2021/05/13に出版された

- [Git公式ドキュメント (日本語版)](https://git-scm.com/book/ja/v2)

## 今後の進め方

- [トップページ](https://github.com/fumiyanll23/cpp-learning) に記載がある通り，[C++入門 AtCoder Programming Guide for beginners (APG4b)](https://atcoder.jp/contests/APG4b) 沿って勉強会を進めていく
- いつまでに，どこまで進めるのかを決めたい!
