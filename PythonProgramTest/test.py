
def compress(raw: str) -> bytes:
    """
    Compress the raw string to bytes using RLE.
    """
      # <- implement your function
    if raw == "":
        return bytes("", encoding = "utf8")

    index = 0
    type = raw[0]
    ans = ''

    for ss in raw:
        if ss == type:
            index = index + 1
        else:
            ans = ans + '\\x{:02X}'.format(index) +type
            type = ss
            index = 1
    ans = ans + hex(index) + type
    # ans = ans + '\\x{:02X}'.format(index) + type
    print(ans)
    # print(ans.encode('utf-8'))
    # print(bytes.fromhex(hex(index)))
    bb = bytes(str(ans), encoding = "utf8")
    print(bb[1:])
       

        

    return bytes(ans, encoding = "gbk")
    # return bytes(map(ord, ans))

if __name__ == "__main__":
    # execute only if run as a script
    print(compress("abc"))
    print('\\x{:02X}'.format(16))
    print(isinstance('\\x{:02X}'.format(16),str))
    bb = '\x01a\x01b\x01c'
    # print('18'.decode(hex))
    print(bytes(bb, encoding = "utf8"))
    # print(binascii.unhexlify(compress("abc")))
    # print("zhang")

