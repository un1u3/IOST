from django.db import models
from django.core.exceptions import ValidationError

def validate_pin_length(value):
    if len(str(value)) != 6:
        raise ValidationError("The Pin code must be six digits")

class Profile(models.Model):
    STATE_CHOICES = [
        ('State1', 'State 1'),
        ('State2', 'State 2'),
        ('State3', 'State 3'),
    ]
    name = models.CharField(max_length=100)
    dob = models.DateField(auto_now=False, auto_now_add=False)
    gender = models.CharField(max_length=1, choices=[('M', 'Male'), ('F', 'Female'), ('O', 'Other')])
    locality = models.CharField(max_length=100)
    city = models.CharField(max_length=100)
    pin = models.PositiveIntegerField(
        validators=[validate_pin_length],
        help_text="Enter a six-digit code"
    )
    state = models.CharField(choices=STATE_CHOICES, max_length=100)
    mobile = models.CharField(max_length=10, help_text="Enter a 10-digit number")
    email = models.EmailField()
    job_city = models.CharField(max_length=50, choices=[('Kathmandu', 'Kathmandu'), ('Dolakha', 'Dolakha')])
    profile_image = models.ImageField(upload_to='profile')
    myfile = models.FileField(upload_to='doc', blank=True)
