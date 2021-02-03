
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
    ans = ans + '\\x{:02X}'.format(index) + type
    print(ans)
    return bytes(ans, encoding = "utf8")
    # return bytes(map(ord, ans))

if __name__ == "__main__":
    # execute only if run as a script
    print(compress("abc"))
    print('\\x{:02X}'.format(16))
    # print(binascii.unhexlify(compress("abc")))
    # print("zhang")

