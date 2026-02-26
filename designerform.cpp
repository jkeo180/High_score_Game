#include "designerform.h"

DesignerForm::DesignerForm(QObject *parent)
    : QAbstractItemModel(parent)
{}

QVariant DesignerForm::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex DesignerForm::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex DesignerForm::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int DesignerForm::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int DesignerForm::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant DesignerForm::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
