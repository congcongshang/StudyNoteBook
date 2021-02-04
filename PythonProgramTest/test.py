
def compress(raw: str) -> bytes:
    """
    Compress the raw string to bytes using RLE.
    """
      # <- implement your function
    if raw == "":
        return bytes("", encoding = "utf8")

    index = 0
    type = raw[0]
    ans = b''

    for ss in raw:
        if ss == type:
            index = index + 1
        else:
            ans = ans + bytes.fromhex ('{:02X}'.format(index)) +bytes(str(type), encoding = "utf8")
            type = ss
            index = 1

    ans = ans + bytes.fromhex ('{:02X}'.format(index)) +bytes(str(type), encoding = "utf8")

    return ans


if __name__ == "__main__":
    # execute only if run as a script
    # print("\N{GRINNING FACE} \N{SHAMROCK}")
    Unicodestring = "\N{GRINNING FACE} \N{SHAMROCK}"
    # print( str(Unicodestring, "ISO-8859-1") )
    print( Unicodestring.decode('gbk') )
    print(compress("\N{GRINNING FACE} \N{SHAMROCK}"))
    print(b'\x01\xf0\x01\x9f\x01\x98\x01\x80\x01 \x01\xe2\x02\x98')
    # AssertionError: b'\x01\xf0\x9f\x98\x80\x01 \x01\xe2\x98\x98' != b'\x01\xf0\x01\x9f\x01\x98\x01\x80\x01 \x01\xe2\x02\x98' : compress('😀 ☘') must handle multibyte Unicode chars

    ss = "acbb  bcccc"
    print(ss)
    print(compress(ss))
    # print('\\x{:02X}'.format(16))
    # print(isinstance('\\x{:02X}'.format(16),str))
    # bb = '\x01a\x01b\x01c'
    # # print('18'.decode(hex))
    # print(bb)
    # print( )
    # print(binascii.unhexlify(compress("abc")))
    # print("zhang")

