wget https://bootstrap.pypa.io/get-pip.py
python3 -m pip install --user ansible
export PATH=$HOME/.local/bin:$PATH
echo 'export PATH=$HOME/.local/bin:$PATH' >> ~/.bashrc
source ~/.bashrc
export LC_ALL=C.UTF-8
export LANG=C.UTF-8
ansible --version


  student@dl003pc015-desktop:~$ gedit setup.yml
setup.yml
---
- name: Message Playbook
 hosts: local
 gather_facts: no
 tasks:
 - name: Print Hello Message
 debug:
 msg: "Hello from Ansible"



student@dl003pc015-desktop:~$ gedit hosts.ini
hosts.ini
[local]
localhost ansible_connection=local
student@dl003pc015-desktop:~$ ls
-student@dl003pc015-desktop:~$ ansible-playbook -i hosts.ini setup.yml
