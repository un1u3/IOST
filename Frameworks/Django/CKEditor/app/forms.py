from django import forms 
from .models import Post

class CreatePostForm(forms.Model):
    class Meta:
        model = Post
        fields = ['title','content']



        