.code
PatchAByte proc 
	mov byte ptr [rcx + 8], 0
	ret
PatchAByte endp 
PatchAnByte proc
	lea rax, qword ptr [rdx + 16]
	ret
PatchAnByte endp
end