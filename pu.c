pipeline {
agent any


tools {
    maven 'Maven-3.9.16'
    jdk 'jdk-21'
}

stages {
    stage('Checkout') {
        steps {
            git branch: 'main',
                url: 'https://github.com/sumankit/jenkins-ci-project.git'
        }
    }

    stage('Build') {
        steps {
            bat 'mvn clean package'
        }
    }

    stage('Test') {
        steps {
            bat 'mvn test'
        }
    }
}

post {
    always {
        junit allowEmptyResults: true,
              testResults: '*/target/surefire-reports/.xml'
    }
}


}
