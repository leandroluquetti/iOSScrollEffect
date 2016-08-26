//
//  ItemCell.h
//  ScrollEffect
//
//  Created by Srinivasan Dodda on 26/08/16.
//  Copyright © 2016 srini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CardView.h"

@interface ItemCell : UICollectionViewCell

@property (weak, nonatomic) NSIndexPath *indexPath;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintWhiteViewTrailing;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintWhiteViewLeading;

@property (weak, nonatomic) IBOutlet CardView *viewContent;


@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintImageWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintImgCentre;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *constraintImgTrailing;


@end