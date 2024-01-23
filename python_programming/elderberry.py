import json

x = {"name":"Dog","age":10,"gender":"female","puppies":False,"breed":[{"country":"india","color":"Black"}]}
print(x)

print(json.dumps(x,separators=(':',' = ')))

print(json.dumps(x,indent = 4,separators=(':',"=")))

print(json.dumps(x,sort_keys=True))