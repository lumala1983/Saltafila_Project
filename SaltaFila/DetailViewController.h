//
//  DetailViewController.h
//  SaltaFila
//
//  Created by Luca Malandrino on 10/01/14.
//  Copyright (c) 2014 SaltaFila.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
