from django import forms
from .models import Profile

# Gender Choices
GENDER_CHOICES = (
    ('M', 'Male'),
    ('F', 'Female'),
    ('O', 'Other'),
)

# Job City Choices
JOB_CITY_CHOICE = [
    ('Kathmandu', 'Kathmandu'),
    ('Dolakha', 'Dolakha'),
]

class ProfileForm(forms.ModelForm):
    # Customizing the gender field with radio buttons
    gender = forms.ChoiceField(
        choices=GENDER_CHOICES,
        widget=forms.RadioSelect(attrs={'class': 'form-check-input'}),
    )

    class Meta:
        model = Profile
        fields = [
            'name', 
            'dob', 
            'gender', 
            'locality', 
            'city', 
            'pin',
            'state', 
            'mobile', 
            'email', 
            'job_city',
            'profile_image', 
            'myfile',
        ]

        # Labels for better display names
        labels = {
            'name': 'Full Name',
            'dob': 'Date of Birth',
            'gender': 'Gender',
            'locality': 'Locality',
            'city': 'City',
            'pin': 'PIN Code',
            'state': 'State',
            'mobile': 'Mobile Number',
            'email': 'Email Address',
            'job_city': 'Preferred Job City',
            'profile_image': 'Profile Image',
            'myfile': 'Additional Document',
        }

        # Help texts for user guidance
        help_texts = {
            'profile_image': 'Optional: Upload a profile image.',
            'myfile': 'Optional: Upload additional documents.',
        }

        # Widgets for better form customization and styling
        widgets = {
            'name': forms.TextInput(attrs={
                'class': 'form-control',
                'placeholder': 'Enter your full name',
            }),
            'dob': forms.DateInput(attrs={
                'class': 'form-control',
                'type': 'date',
            }),
            'locality': forms.TextInput(attrs={
                'class': 'form-control',
                'placeholder': 'Enter your locality',
            }),
            'city': forms.TextInput(attrs={
                'class': 'form-control',
                'placeholder': 'Enter your city',
            }),
            'pin': forms.NumberInput(attrs={
                'class': 'form-control',
                'placeholder': 'Enter 6-digit PIN code',
            }),
            'state': forms.Select(attrs={
                'class': 'form-select',
            }),
            'mobile': forms.TextInput(attrs={
                'class': 'form-control',
                'placeholder': 'Enter 10-digit mobile number',
            }),
            'email': forms.EmailInput(attrs={
                'class': 'form-control',
                'placeholder': 'Enter your email',
            }),
            'job_city': forms.Select(attrs={
                'class': 'form-select',
            }),
            'profile_image': forms.ClearableFileInput(attrs={
                'class': 'form-control',
            }),
            'myfile': forms.ClearableFileInput(attrs={
                'class': 'form-control',
            }),
        }
