//
//  VerifyEmailViewController.h
//  Online Book
//
//  Created by User on 5/3/15.
//  Copyright (c) 2015 Xian A. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TPKeyboardAvoidingScrollView;
@interface VerifyEmailViewController : UIViewController

@property (nonatomic, retain) NSString *emailStr;
@property (nonatomic, retain) IBOutlet TPKeyboardAvoidingScrollView *scrollView;

@end