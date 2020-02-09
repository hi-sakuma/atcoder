# atcoder

g++環境起動コマンド
`docker-compose up -d`
`docker-compose exec cppp /bin/bash`

g++環境停止コマンド
docker-compose stop

## adcoder-toolsの使い方
//入力フォーマット付きコード生成
atcoder-tools gen [contest_id] --workspace /atcoder/workspace

atcoder-tools test

## online-judge-toolsの使い方
ログイン
oj login https://atcoder.jp/

サンプルデータ取得
oj d URL

テスト
oj t

提出
oj s main.cpp
oj s https://codeforces.com/contest/1200/problem/F(oj d URLを事前に実行していない場合)