/********************************************************************************
** Form generated from reading UI file 'qSlicerRegistrationModuleWidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLICERREGISTRATIONMODULEWIDGET_H
#define UI_QSLICERREGISTRATIONMODULEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include "ctkCollapsibleButton.h"
#include "qMRMLNodeComboBox.h"
#include "qSlicerWidget.h"

QT_BEGIN_NAMESPACE

class Ui_qSlicerRegistrationModuleWidget
{
public:
    QVBoxLayout *verticalLayout;
    ctkCollapsibleButton *CTKCollapsibleButton_Input;
    QGridLayout *gridLayout;
    qMRMLNodeComboBox *FixedImageComboBox;
    QLabel *label_fixed;
    QLabel *label_moving;
    qMRMLNodeComboBox *MovingImageComboBox;
    QPushButton *ShowButton;
    QPushButton *ShowButton2;
    QLabel *label_fiducial;
    qMRMLNodeComboBox *FiducialPointsComboBox;
    QCheckBox *checkBox_2;
    ctkCollapsibleButton *CTKCollapsibleButton_Parameters;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_Interpolation;
    QRadioButton *radioButton_Interpolation_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_Similarity;
    QRadioButton *radioButton_Similarity_2;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *checkBox_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QSlider *horizontalSlider_2;
    QLabel *label_featureletsSize;
    QLabel *label_DisplaySearchSize;
    QSlider *horizontalSlider;
    QLabel *label_DisplayFeatureletsSize;
    QLabel *label_searchSize;
    QLabel *label_FeatureletsSizeZ;
    QLabel *label_SearchSizeZ;
    QLabel *label_DisplayFeatureletSizeZ;
    QLabel *label_DisplaySearchSizeZ;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider_4;
    QCheckBox *checkBox;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QSpinBox *spinBox_NumberIterations;
    QDoubleSpinBox *doubleSpinBox_Max;
    QDoubleSpinBox *doubleSpinBox_Min;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    ctkCollapsibleButton *CTKCollapsibleButton_Output;
    QGridLayout *gridLayout_3;
    QProgressBar *progressBar;
    QLabel *label_deformed;
    qMRMLNodeComboBox *DeformedImageComboBox;
    QLabel *label_field;
    qMRMLNodeComboBox *DeformationFieldComboBox;
    QPushButton *RunButton;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(qSlicerWidget *qSlicerRegistrationModuleWidget)
    {
        if (qSlicerRegistrationModuleWidget->objectName().isEmpty())
            qSlicerRegistrationModuleWidget->setObjectName(QString::fromUtf8("qSlicerRegistrationModuleWidget"));
        qSlicerRegistrationModuleWidget->setEnabled(true);
        qSlicerRegistrationModuleWidget->resize(504, 703);
        verticalLayout = new QVBoxLayout(qSlicerRegistrationModuleWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        CTKCollapsibleButton_Input = new ctkCollapsibleButton(qSlicerRegistrationModuleWidget);
        CTKCollapsibleButton_Input->setObjectName(QString::fromUtf8("CTKCollapsibleButton_Input"));
        gridLayout = new QGridLayout(CTKCollapsibleButton_Input);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        FixedImageComboBox = new qMRMLNodeComboBox(CTKCollapsibleButton_Input);
        FixedImageComboBox->setObjectName(QString::fromUtf8("FixedImageComboBox"));
        FixedImageComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        FixedImageComboBox->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode")));
        FixedImageComboBox->setProperty("addEnabled", QVariant(false));

        gridLayout->addWidget(FixedImageComboBox, 0, 2, 1, 1);

        label_fixed = new QLabel(CTKCollapsibleButton_Input);
        label_fixed->setObjectName(QString::fromUtf8("label_fixed"));

        gridLayout->addWidget(label_fixed, 0, 1, 1, 1);

        label_moving = new QLabel(CTKCollapsibleButton_Input);
        label_moving->setObjectName(QString::fromUtf8("label_moving"));

        gridLayout->addWidget(label_moving, 1, 1, 1, 1);

        MovingImageComboBox = new qMRMLNodeComboBox(CTKCollapsibleButton_Input);
        MovingImageComboBox->setObjectName(QString::fromUtf8("MovingImageComboBox"));
        MovingImageComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        MovingImageComboBox->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode")));
        MovingImageComboBox->setProperty("addEnabled", QVariant(false));

        gridLayout->addWidget(MovingImageComboBox, 1, 2, 1, 1);

        ShowButton = new QPushButton(CTKCollapsibleButton_Input);
        ShowButton->setObjectName(QString::fromUtf8("ShowButton"));
        ShowButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(ShowButton, 0, 3, 1, 1);

        ShowButton2 = new QPushButton(CTKCollapsibleButton_Input);
        ShowButton2->setObjectName(QString::fromUtf8("ShowButton2"));
        ShowButton2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(ShowButton2, 1, 3, 1, 1);

        label_fiducial = new QLabel(CTKCollapsibleButton_Input);
        label_fiducial->setObjectName(QString::fromUtf8("label_fiducial"));
        label_fiducial->setVisible(false);

        gridLayout->addWidget(label_fiducial, 2, 1, 1, 1);

        FiducialPointsComboBox = new qMRMLNodeComboBox(CTKCollapsibleButton_Input);
        FiducialPointsComboBox->setObjectName(QString::fromUtf8("FiducialPointsComboBox"));
        FiducialPointsComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        FiducialPointsComboBox->setVisible(false);
        FiducialPointsComboBox->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLMarkupsFiducialNode")));
        FiducialPointsComboBox->setProperty("addEnabled", QVariant(true));
        FiducialPointsComboBox->setProperty("renameEnabled", QVariant(true));

        gridLayout->addWidget(FiducialPointsComboBox, 2, 2, 1, 1);

        checkBox_2 = new QCheckBox(CTKCollapsibleButton_Input);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout->addWidget(checkBox_2, 2, 3, 1, 1);


        verticalLayout->addWidget(CTKCollapsibleButton_Input);

        CTKCollapsibleButton_Parameters = new ctkCollapsibleButton(qSlicerRegistrationModuleWidget);
        CTKCollapsibleButton_Parameters->setObjectName(QString::fromUtf8("CTKCollapsibleButton_Parameters"));
        gridLayout_2 = new QGridLayout(CTKCollapsibleButton_Parameters);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 6, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 7, 1, 1, 1);

        groupBox_2 = new QGroupBox(CTKCollapsibleButton_Parameters);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        radioButton_Interpolation = new QRadioButton(groupBox_2);
        radioButton_Interpolation->setObjectName(QString::fromUtf8("radioButton_Interpolation"));
        radioButton_Interpolation->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_Interpolation->setChecked(true);

        verticalLayout_4->addWidget(radioButton_Interpolation);

        radioButton_Interpolation_2 = new QRadioButton(groupBox_2);
        radioButton_Interpolation_2->setObjectName(QString::fromUtf8("radioButton_Interpolation_2"));
        radioButton_Interpolation_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_4->addWidget(radioButton_Interpolation_2);


        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 3, 1, 1);

        groupBox = new QGroupBox(CTKCollapsibleButton_Parameters);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_Similarity = new QRadioButton(groupBox);
        radioButton_Similarity->setObjectName(QString::fromUtf8("radioButton_Similarity"));
        radioButton_Similarity->setCursor(QCursor(Qt::PointingHandCursor));
        radioButton_Similarity->setChecked(true);
        radioButton_Similarity->setAutoExclusive(true);

        verticalLayout_2->addWidget(radioButton_Similarity);

        radioButton_Similarity_2 = new QRadioButton(groupBox);
        radioButton_Similarity_2->setObjectName(QString::fromUtf8("radioButton_Similarity_2"));
        radioButton_Similarity_2->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_2->addWidget(radioButton_Similarity_2);


        gridLayout_2->addWidget(groupBox, 3, 5, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 2, 0, 1, 1);

        checkBox_3 = new QCheckBox(CTKCollapsibleButton_Parameters);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox_3->setVisible(false);

        gridLayout_2->addWidget(checkBox_3, 4, 5, 1, 1);

        groupBox_4 = new QGroupBox(CTKCollapsibleButton_Parameters);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBox_5 = new QCheckBox(groupBox_4);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(checkBox_5, 3, 0, 1, 4);

        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_5->addWidget(checkBox_4, 0, 0, 1, 4);

        horizontalSlider_2 = new QSlider(groupBox_4);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_2->setMinimum(8);
        horizontalSlider_2->setMaximum(200);
        horizontalSlider_2->setValue(30);
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_2, 2, 3, 1, 1);

        label_featureletsSize = new QLabel(groupBox_4);
        label_featureletsSize->setObjectName(QString::fromUtf8("label_featureletsSize"));

        gridLayout_5->addWidget(label_featureletsSize, 1, 0, 1, 1);

        label_DisplaySearchSize = new QLabel(groupBox_4);
        label_DisplaySearchSize->setObjectName(QString::fromUtf8("label_DisplaySearchSize"));
        label_DisplaySearchSize->setFrameShape(QFrame::WinPanel);
        label_DisplaySearchSize->setFrameShadow(QFrame::Sunken);
        label_DisplaySearchSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_DisplaySearchSize, 2, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox_4);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider->setMinimum(4);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(15);
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider, 1, 3, 1, 1);

        label_DisplayFeatureletsSize = new QLabel(groupBox_4);
        label_DisplayFeatureletsSize->setObjectName(QString::fromUtf8("label_DisplayFeatureletsSize"));
        label_DisplayFeatureletsSize->setFrameShape(QFrame::WinPanel);
        label_DisplayFeatureletsSize->setFrameShadow(QFrame::Sunken);
        label_DisplayFeatureletsSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_DisplayFeatureletsSize, 1, 1, 1, 1);

        label_searchSize = new QLabel(groupBox_4);
        label_searchSize->setObjectName(QString::fromUtf8("label_searchSize"));

        gridLayout_5->addWidget(label_searchSize, 2, 0, 1, 1);

        label_FeatureletsSizeZ = new QLabel(groupBox_4);
        label_FeatureletsSizeZ->setObjectName(QString::fromUtf8("label_FeatureletsSizeZ"));
        label_FeatureletsSizeZ->setVisible(false);

        gridLayout_5->addWidget(label_FeatureletsSizeZ, 4, 0, 1, 1);

        label_SearchSizeZ = new QLabel(groupBox_4);
        label_SearchSizeZ->setObjectName(QString::fromUtf8("label_SearchSizeZ"));
        label_SearchSizeZ->setVisible(false);

        gridLayout_5->addWidget(label_SearchSizeZ, 5, 0, 1, 1);

        label_DisplayFeatureletSizeZ = new QLabel(groupBox_4);
        label_DisplayFeatureletSizeZ->setObjectName(QString::fromUtf8("label_DisplayFeatureletSizeZ"));
        label_DisplayFeatureletSizeZ->setVisible(false);
        label_DisplayFeatureletSizeZ->setFrameShape(QFrame::WinPanel);
        label_DisplayFeatureletSizeZ->setFrameShadow(QFrame::Sunken);
        label_DisplayFeatureletSizeZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_DisplayFeatureletSizeZ, 4, 1, 1, 1);

        label_DisplaySearchSizeZ = new QLabel(groupBox_4);
        label_DisplaySearchSizeZ->setObjectName(QString::fromUtf8("label_DisplaySearchSizeZ"));
        label_DisplaySearchSizeZ->setVisible(false);
        label_DisplaySearchSizeZ->setFrameShape(QFrame::WinPanel);
        label_DisplaySearchSizeZ->setFrameShadow(QFrame::Sunken);
        label_DisplaySearchSizeZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_DisplaySearchSizeZ, 5, 1, 1, 1);

        horizontalSlider_3 = new QSlider(groupBox_4);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_3->setVisible(false);
        horizontalSlider_3->setMinimum(2);
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setValue(15);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_3, 4, 3, 1, 1);

        horizontalSlider_4 = new QSlider(groupBox_4);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_4->setVisible(false);
        horizontalSlider_4->setMinimum(4);
        horizontalSlider_4->setMaximum(200);
        horizontalSlider_4->setValue(30);
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(horizontalSlider_4, 5, 3, 1, 1);


        gridLayout_2->addWidget(groupBox_4, 1, 0, 1, 7);

        checkBox = new QCheckBox(CTKCollapsibleButton_Parameters);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        checkBox->setChecked(false);

        gridLayout_2->addWidget(checkBox, 4, 0, 1, 4);

        groupBox_3 = new QGroupBox(CTKCollapsibleButton_Parameters);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setEnabled(true);
        groupBox_3->setVisible(false);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        spinBox_NumberIterations = new QSpinBox(groupBox_3);
        spinBox_NumberIterations->setObjectName(QString::fromUtf8("spinBox_NumberIterations"));
        spinBox_NumberIterations->setCursor(QCursor(Qt::PointingHandCursor));
        spinBox_NumberIterations->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_NumberIterations->setMinimum(30);
        spinBox_NumberIterations->setMaximum(3000);
        spinBox_NumberIterations->setSingleStep(10);
        spinBox_NumberIterations->setValue(2000);

        gridLayout_4->addWidget(spinBox_NumberIterations, 0, 1, 1, 1);

        doubleSpinBox_Max = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_Max->setObjectName(QString::fromUtf8("doubleSpinBox_Max"));
        doubleSpinBox_Max->setCursor(QCursor(Qt::PointingHandCursor));
        doubleSpinBox_Max->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_Max->setMinimum(0.01);
        doubleSpinBox_Max->setMaximum(1);
        doubleSpinBox_Max->setSingleStep(0.01);
        doubleSpinBox_Max->setValue(0.5);

        gridLayout_4->addWidget(doubleSpinBox_Max, 1, 1, 1, 1);

        doubleSpinBox_Min = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_Min->setObjectName(QString::fromUtf8("doubleSpinBox_Min"));
        doubleSpinBox_Min->setCursor(QCursor(Qt::PointingHandCursor));
        doubleSpinBox_Min->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_Min->setDecimals(4);
        doubleSpinBox_Min->setMinimum(0.0001);
        doubleSpinBox_Min->setMaximum(0.01);
        doubleSpinBox_Min->setSingleStep(0.0001);
        doubleSpinBox_Min->setValue(0.001);

        gridLayout_4->addWidget(doubleSpinBox_Min, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 6, 0, 1, 6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 6, 6, 1, 1);


        verticalLayout->addWidget(CTKCollapsibleButton_Parameters);

        CTKCollapsibleButton_Output = new ctkCollapsibleButton(qSlicerRegistrationModuleWidget);
        CTKCollapsibleButton_Output->setObjectName(QString::fromUtf8("CTKCollapsibleButton_Output"));
        gridLayout_3 = new QGridLayout(CTKCollapsibleButton_Output);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        progressBar = new QProgressBar(CTKCollapsibleButton_Output);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout_3->addWidget(progressBar, 4, 0, 1, 2);

        label_deformed = new QLabel(CTKCollapsibleButton_Output);
        label_deformed->setObjectName(QString::fromUtf8("label_deformed"));

        gridLayout_3->addWidget(label_deformed, 0, 0, 1, 1);

        DeformedImageComboBox = new qMRMLNodeComboBox(CTKCollapsibleButton_Output);
        DeformedImageComboBox->setObjectName(QString::fromUtf8("DeformedImageComboBox"));
        DeformedImageComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        DeformedImageComboBox->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLScalarVolumeNode")));
        DeformedImageComboBox->setProperty("addEnabled", QVariant(true));
        DeformedImageComboBox->setProperty("renameEnabled", QVariant(false));

        gridLayout_3->addWidget(DeformedImageComboBox, 0, 1, 1, 1);

        label_field = new QLabel(CTKCollapsibleButton_Output);
        label_field->setObjectName(QString::fromUtf8("label_field"));

        gridLayout_3->addWidget(label_field, 1, 0, 1, 1);

        DeformationFieldComboBox = new qMRMLNodeComboBox(CTKCollapsibleButton_Output);
        DeformationFieldComboBox->setObjectName(QString::fromUtf8("DeformationFieldComboBox"));
        DeformationFieldComboBox->setCursor(QCursor(Qt::PointingHandCursor));
        DeformationFieldComboBox->setProperty("nodeTypes", QVariant(QStringList() << QString::fromUtf8("vtkMRMLTransformNode")));
        DeformationFieldComboBox->setProperty("addEnabled", QVariant(true));
        DeformationFieldComboBox->setProperty("renameEnabled", QVariant(true));

        gridLayout_3->addWidget(DeformationFieldComboBox, 1, 1, 1, 1);

        RunButton = new QPushButton(CTKCollapsibleButton_Output);
        RunButton->setObjectName(QString::fromUtf8("RunButton"));
        RunButton->setCursor(QCursor(Qt::PointingHandCursor));

        gridLayout_3->addWidget(RunButton, 3, 0, 1, 2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 2, 0, 1, 1);


        verticalLayout->addWidget(CTKCollapsibleButton_Output);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(qSlicerRegistrationModuleWidget);
        QObject::connect(qSlicerRegistrationModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), FixedImageComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerRegistrationModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), DeformedImageComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerRegistrationModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), DeformationFieldComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerRegistrationModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), MovingImageComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(qSlicerRegistrationModuleWidget, SIGNAL(mrmlSceneChanged(vtkMRMLScene*)), FiducialPointsComboBox, SLOT(setMRMLScene(vtkMRMLScene*)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label_DisplayFeatureletsSize, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), label_DisplaySearchSize, SLOT(setNum(int)));
        QObject::connect(checkBox, SIGNAL(clicked(bool)), groupBox_3, SLOT(setVisible(bool)));
        QObject::connect(checkBox_2, SIGNAL(clicked(bool)), FiducialPointsComboBox, SLOT(setVisible(bool)));
        QObject::connect(checkBox_2, SIGNAL(clicked(bool)), label_fiducial, SLOT(setVisible(bool)));
        QObject::connect(checkBox, SIGNAL(clicked(bool)), checkBox_3, SLOT(setVisible(bool)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), label_DisplayFeatureletSizeZ, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_4, SIGNAL(valueChanged(int)), label_DisplaySearchSizeZ, SLOT(setNum(int)));
        QObject::connect(checkBox_5, SIGNAL(clicked(bool)), label_DisplayFeatureletSizeZ, SLOT(setVisible(bool)));
        QObject::connect(checkBox_5, SIGNAL(clicked(bool)), label_DisplaySearchSizeZ, SLOT(setVisible(bool)));
        QObject::connect(checkBox_5, SIGNAL(clicked(bool)), label_FeatureletsSizeZ, SLOT(setVisible(bool)));
        QObject::connect(checkBox_5, SIGNAL(clicked(bool)), label_SearchSizeZ, SLOT(setVisible(bool)));
        QObject::connect(checkBox_5, SIGNAL(clicked(bool)), horizontalSlider_3, SLOT(setVisible(bool)));
        QObject::connect(checkBox_5, SIGNAL(clicked(bool)), horizontalSlider_4, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(qSlicerRegistrationModuleWidget);
    } // setupUi

    void retranslateUi(qSlicerWidget *qSlicerRegistrationModuleWidget)
    {
        qSlicerRegistrationModuleWidget->setWindowTitle(QApplication::translate("qSlicerRegistrationModuleWidget", "Form", 0, QApplication::UnicodeUTF8));
        CTKCollapsibleButton_Input->setProperty("text", QVariant(QApplication::translate("qSlicerRegistrationModuleWidget", "Input", 0, QApplication::UnicodeUTF8)));
#ifndef QT_NO_TOOLTIP
        FixedImageComboBox->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Select the volume intended to be used as reference image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_fixed->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Fixed image:", 0, QApplication::UnicodeUTF8));
        label_moving->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Moving image:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MovingImageComboBox->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Select the volume intended to be used as moving image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ShowButton->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Shows the selected fixed image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ShowButton->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Show", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShowButton2->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Shows the selected moving image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ShowButton2->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Show", 0, QApplication::UnicodeUTF8));
        label_fiducial->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Fiducial Points:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        FiducialPointsComboBox->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "To edit the fiducial points use the Slicer module ,,Markups''.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBox_2->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Click if you want to define points which should not move.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_2->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Use fixed points", 0, QApplication::UnicodeUTF8));
        CTKCollapsibleButton_Parameters->setProperty("text", QVariant(QApplication::translate("qSlicerRegistrationModuleWidget", "Parameters", 0, QApplication::UnicodeUTF8)));
        groupBox_2->setTitle(QApplication::translate("qSlicerRegistrationModuleWidget", "Interpolation type", 0, QApplication::UnicodeUTF8));
        radioButton_Interpolation->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Linear interpolation", 0, QApplication::UnicodeUTF8));
        radioButton_Interpolation_2->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Neighbour interpolation", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("qSlicerRegistrationModuleWidget", "Similarity measure", 0, QApplication::UnicodeUTF8));
        radioButton_Similarity->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Correlation", 0, QApplication::UnicodeUTF8));
        radioButton_Similarity_2->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Mutual information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBox_3->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "In debug mode additional information is shown in the terminal.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_3->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Run in debug mode", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("qSlicerRegistrationModuleWidget", "Featurelets", 0, QApplication::UnicodeUTF8));
        checkBox_5->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Use different size in z-direction", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBox_4->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Featurelet size = Moving image size\n"
"Search region size = Fixed image size\n"
"Hint: in this case the progress bar does not work (there is only one optimization process and it is not known apriori how long it takes)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_4->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Rigid registration (FeatureletSize=MovingImageSize)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        horizontalSlider_2->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Edit the size of the search region", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_featureletsSize->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Featurelet size:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_DisplaySearchSize->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Current size of the search region", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_DisplaySearchSize->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "30", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        horizontalSlider->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Edit the size of one featurelet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_DisplayFeatureletsSize->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Current size of one featurelet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_DisplayFeatureletsSize->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "15", 0, QApplication::UnicodeUTF8));
        label_searchSize->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Search region size:", 0, QApplication::UnicodeUTF8));
        label_FeatureletsSizeZ->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Featurelet size z:", 0, QApplication::UnicodeUTF8));
        label_SearchSizeZ->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Search region size z:", 0, QApplication::UnicodeUTF8));
        label_DisplayFeatureletSizeZ->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "15", 0, QApplication::UnicodeUTF8));
        label_DisplaySearchSizeZ->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "30", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Show advanced Parameters", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("qSlicerRegistrationModuleWidget", "Optimizer", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Max step length:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Number of iterations:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Min step length:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_Max->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "For linear interpolation the initial value would be 0.05.\n"
"The value of 0.5 is good for neighbour interpolation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        doubleSpinBox_Min->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "For linear interpolation the initial value would be 0.0001.\n"
"The value of 0.001 is good for neighbour interpolation.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        CTKCollapsibleButton_Output->setProperty("text", QVariant(QApplication::translate("qSlicerRegistrationModuleWidget", "Output", 0, QApplication::UnicodeUTF8)));
        label_deformed->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Deformed Image:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DeformedImageComboBox->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Add/Select a Node for the ouput data", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_field->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Deformation field:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RunButton->setToolTip(QApplication::translate("qSlicerRegistrationModuleWidget", "Press the button to register the moving image onto the fixed image and obtain a deformation field", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RunButton->setText(QApplication::translate("qSlicerRegistrationModuleWidget", "Run Registration", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qSlicerRegistrationModuleWidget: public Ui_qSlicerRegistrationModuleWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLICERREGISTRATIONMODULEWIDGET_H
