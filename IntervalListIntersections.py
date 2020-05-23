class Solution:
    def intersection(self,lst1,lst2):
        if lst1[0]<=lst2[0] and lst1[1]>=lst2[0]:
            return True
        if lst1[0]>=lst2[0] and lst2[1]>=lst1[0]:
            return True
        return False
    def intervalIntersection(self, A: List[List[int]], B: List[List[int]]) -> List[List[int]]:
        ans=[]
        i=0
        j=0
        while i<len(A) and j<len(B):
            if(self.intersection(A[i],B[j])):
                temp=[max(A[i][0],B[j][0]),min(A[i][1],B[j][1])]
                A[i][0]=temp[1]+1
                B[j][0]=temp[1]+1
                if A[i][0]>A[i][1] or A[i][1]<=temp[0]:
                    i+=1
                if B[j][0]>B[j][1] or B[j][1]<=temp[0]:
                    j+=1
                ans.append(temp)
                continue
            if A[i][0]>B[j][1]:
                j+=1
            else:
                i+=1
        return ans
        
