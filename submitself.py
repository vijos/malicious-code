import time
import urllib
import urllib2
import sys
import cookielib
myself = open(__file__)
mycode = myself.read()
myself.close
values = {'Compiler' : '.py','TextBody' : mycode}
cookie = cookielib.CookieJar()
ck = cookielib.Cookie(version=0, name='Vijos', value='Skin=Nature+Vert&Username=loveaplusb&Password=1%2B1%3D2', port=None, port_specified=False, domain='www.tyvj.cn', domain_specified=False, domain_initial_dot=False, path='/', path_specified=True, secure=False, expires=None, discard=True, comment=None, comment_url=None, rest={'HttpOnly': None}, rfc2109=False)
cookie.set_cookie(ck)
opener = urllib2.build_opener(urllib2.HTTPCookieProcessor(cookie)) 
urllib2.install_opener(opener)
data = urllib.urlencode(values)
preF = urllib2.Request('http://www.tyvj.cn:8080/Problem_Upload.asp?id=1123')
response=urllib2.urlopen(preF)
junk = response.read()
preF = urllib2.Request('http://www.tyvj.cn:8080/Problem_Upload.asp?id=1123')
response=urllib2.urlopen(preF)
junk = response.read()
req=urllib2.Request('http://www.tyvj.cn:8080/Problem_Upload_Submit.asp?id=1123',data)
response=urllib2.urlopen(req)
html = response.read()