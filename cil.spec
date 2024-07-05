Summary: A short description of your software
Name: mysoftware
Version: 1.0
Release: 1%{?dist}
License: GPL
Group: Development/Tools
Source: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-buildroot
%description
A detailed description of your software.

%prep
%setup -q

%build
make

%install
make DESTDIR=%{buildroot} install

%clean
rm -rf %{buildroot}

%files
%defattr(-,root,root,-)
%doc README.txt LICENSE.txt
%{_bindir}/mysoftware

%changelog
* Tue Dec 31 2013 Your Name <you@example.com> - 1.0-1
- Initial release.