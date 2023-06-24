sample=['apple','banana','orange','cherry']
sample.append('apple')
print(sample)

sample.remove('apple')
print(sample)

sample.reverse()
print(sample)

sample.sort()
print(sample)

sample2=['cherry','banana']
sample2.extend(sample)
print(sample2)

sample2.clear()
print(sample2)

print(sample.count('apple'))

sample.insert(3,'melon')
print(sample)

sampletuple=(sample)
print(sampletuple)

print(sampletuple.count('melon'))

print(sampletuple.index('melon'))