import json

data= {
"msg": {
    "crc": 0, "msg_body": "How are you ?","msg_len": 88,
    "recv_id": 319371,
    "send_id": 319371,
    "send_time": 0,
    "type": 96
  },
"msgLen":90
}


print(json.dumps(data, sort_keys=True, indent=2)) # 排序并且缩进两个字符输出
