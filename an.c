wget https://bootstrap.pypa.io/get-pip.py
python3 -m pip install --user ansible
export PATH=$HOME/.local/bin:$PATH
echo 'export PATH=$HOME/.local/bin:$PATH' >> ~/.bashrc
source ~/.bashrc
export LC_ALL=C.UTF-8
export LANG=C.UTF-8
ansible --version
