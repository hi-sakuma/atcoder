# atcoder

## 概要
cppとpythonが使用可能なatcoder用開発環境

## 開発環境の使い方
### 起動コマンド
`docker-compose up -d`
`docker-compose exec atcoder /bin/bash`

### 停止コマンド
docker-compose stop

### ディレクトリ
cd /atcoder

## atcoder-cliおよびonline-judge-toolsの使い方
### ログイン
acc login
oj login https://atcoder.jp/
### ログイン確認
acc session

## adcoder-toolsの使い方
### 入力フォーマット付きコード生成
atcoder-tools gen [contest_id] --workspace /atcoder/workspace

### test
atcoder-tools test

## online-judge-toolsの使い方
### ログイン
oj login https://atcoder.jp/

### サンプルデータ取得
oj d [URL]
例
oj d https://atcoder.jp/contests/abc154/tasks/abc154_a

### テスト
対象実行ファイルはデフォルトでは./a.out
oj t
oj t -c "python main.py"

### 提出
事前にログインが必要、また、oj d URLを事前に実行している場合はURL不要
oj s main.cpp
oj s main.py -l python3 
oj s https://codeforces.com/contest/1200/problem/F