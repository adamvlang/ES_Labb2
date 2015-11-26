I-Logix-RPY-Archive version 8.10.0 C 6930133
{ IProject 
	- _id = GUID 3ee2e978-2ee0-4cac-b86c-d616e71ebf8b;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 1;
			- value = 
			{ IPropertySubject 
				- _Name = "C_Roundtrip";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "General";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "RoundtripScheme";
								- _Value = "Basic";
								- _Type = Enum;
								- _ExtraTypeInfo = "Respect,Advanced,Basic";
							}
						}
					}
				}
			}
		}
	}
	- _name = "Dishwasher";
	- _modifiedTimeWeak = 11.26.2015::8:43:38;
	- _lastID = 1;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "Default.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "Default";
		- _id = GUID dcb63ddb-7508-483e-9b23-93ecb1f8f987;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "Test.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "Test";
		- _id = GUID ae286b5e-4a30-46f8-817d-7ed641f437c0;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ ISubsystem 
			- fileName = "Default";
			- _id = GUID dcb63ddb-7508-483e-9b23-93ecb1f8f987;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IDiagram 
			- _id = GUID 5fd0f4f6-be81-48b0-9167-6c5f40ab61e5;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Class";
								- Properties = { IRPYRawContainer 
									- size = 8;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,34,84,148";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Tahoma";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "8";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Font.Weight@Child.NameCompartment@Name";
										- _Value = "700";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "109,163,217";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineStyle";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
						}
					}
				}
			}
			- _name = "Model1";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "11.24.2015::13:49:5";
			- _graphicChart = { CGIClassChart 
				- _id = GUID c2859243-b789-4698-9ce7-c96db5abac75;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IDiagram";
					- _id = GUID 5fd0f4f6-be81-48b0-9167-6c5f40ab61e5;
				}
				- m_pParent = ;
				- m_name = { CGIText 
					- m_str = "";
					- m_style = "Arial" 10 0 0 0 1 ;
					- m_color = { IColor 
						- m_fgColor = 0;
						- m_bgColor = 0;
						- m_bgFlag = 0;
					}
					- m_position = 1 0 0  ;
					- m_nIdent = 0;
					- m_bImplicitSetRectPoints = 0;
					- m_nOrientationCtrlPt = 8;
				}
				- m_drawBehavior = 0;
				- m_bIsPreferencesInitialized = 0;
				- elementList = 2;
				{ CGIClass 
					- _id = GUID 89f6035e-9896-432d-b89d-d79505ea581f;
					- m_type = 78;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "TopLevel";
						- _id = GUID c3dca029-ad4c-4fe6-a2c9-b2d0b81c00f5;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "TopLevel";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 0;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID fa8d67bd-5e0c-4124-9b97-3424bec75fe9;
							- m_name = "Attribute";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
						{ CGICompartment 
							- _id = GUID 09f152a2-b493-4185-ad99-0bf8e420515c;
							- m_name = "Operation";
							- m_displayOption = Explicit;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
							- Items = { IRPYRawContainer 
								- size = 0;
							}
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIClass 
					- _id = GUID 0ca7db94-219e-45a8-b6aa-3a9457b45f3f;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "ObjectModelGe";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Class";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Compartments";
												- _Value = "";
												- _Type = MultiLine;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 87;
					- m_pModelObject = { IHandle 
						- _m2Class = "IClass";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "";
						- _name = "Dishwasher";
						- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
					}
					- m_pParent = GUID 89f6035e-9896-432d-b89d-d79505ea581f;
					- m_name = { CGIText 
						- m_str = "Dishwasher";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 2152;
					- m_transform = 0.146364 0 0 0.194296 252.707 22.0767 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 2 329  2 1451  1061 1451  1061 329  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- frameset = "<frameset rows=50%,50%>
<frame name=AttributeListCompartment>
<frame name=OperationListCompartment>";
					- Compartments = { IRPYRawContainer 
						- size = 2;
						- value = 
						{ CGICompartment 
							- _id = GUID 905bb303-7f1b-42cc-bdfc-5b78bceba158;
							- m_name = "Attribute";
							- m_displayOption = All;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
						}
						{ CGICompartment 
							- _id = GUID c0347a88-0686-425c-8040-650252ff1a6a;
							- m_name = "Operation";
							- m_displayOption = All;
							- m_bShowInherited = 0;
							- m_bOrdered = 0;
						}
					}
					- Attrs = { IRPYRawContainer 
						- size = 0;
					}
					- Operations = { IRPYRawContainer 
						- size = 0;
					}
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID 89f6035e-9896-432d-b89d-d79505ea581f;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "Default.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "Default";
				- _id = GUID dcb63ddb-7508-483e-9b23-93ecb1f8f987;
			}
		}
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "Test";
			- _id = GUID ae286b5e-4a30-46f8-817d-7ed641f437c0;
		}
	}
	- PanelDiagrams = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IPanelDiagram 
			- _id = GUID 0b6c3adc-0623-4be5-bf49-826dc028a68d;
			- _myState = 8192;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 2;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 3;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "FreeText";
								- Properties = { IRPYRawContainer 
									- size = 6;
									- value = 
									{ IProperty 
										- _Name = "Fill.Transparent_Fill";
										- _Value = "1";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "HorzAlign";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.Transparent";
										- _Value = "1";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Multiline";
										- _Value = "True";
										- _Type = Bool;
									}
									{ IProperty 
										- _Name = "VertAlign";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Wordbreak";
										- _Value = "False";
										- _Type = Bool;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "PushButton";
								- Properties = { IRPYRawContainer 
									- size = 5;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,100,50";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.Transparent_Fill";
										- _Value = "1";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "0,0,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.Transparent";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "Rectangle";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "0";
										- _Type = Int;
									}
								}
							}
						}
					}
					{ IPropertySubject 
						- _Name = "General";
						- Metaclasses = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "Graphics";
								- Properties = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IProperty 
										- _Name = "grid_snap";
										- _Value = "True";
										- _Type = Bool;
									}
								}
							}
						}
					}
				}
			}
			- _name = "Dishwasher panel";
			- _modifiedTimeWeak = 1.2.1990::0:0:0;
			- _lastModifiedTime = "11.26.2015::8:44:4";
			- _graphicChart = { CGIClassChart 
				- _id = GUID 65e632c4-3039-4d7a-a402-0a9d35078742;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IPanelDiagram";
					- _id = GUID 0b6c3adc-0623-4be5-bf49-826dc028a68d;
				}
				- m_pParent = ;
				- m_name = { CGIText 
					- m_str = "";
					- m_style = "Arial" 10 0 0 0 1 ;
					- m_color = { IColor 
						- m_fgColor = 0;
						- m_bgColor = 0;
						- m_bgFlag = 0;
					}
					- m_position = 1 0 0  ;
					- m_nIdent = 0;
					- m_bImplicitSetRectPoints = 0;
					- m_nOrientationCtrlPt = 8;
				}
				- m_drawBehavior = 0;
				- m_bIsPreferencesInitialized = 0;
				- elementList = 20;
				{ CGIBox 
					- _id = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_type = 215;
					- m_pModelObject = { IHandle 
						- _m2Class = "ISubsystem";
						- _filename = "Default.sbs";
						- _subsystem = "";
						- _class = "";
						- _name = "Default";
						- _id = GUID dcb63ddb-7508-483e-9b23-93ecb1f8f987;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 0;
					- m_polygon = 0 ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
				}
				{ CGIFreeShape 
					- _id = GUID 9508fdf3-ff75-46f7-a064-db93d27a44ff;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Rectangle";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "Fill.FillColor";
												- _Value = "192,192,192";
												- _Type = Color;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 185;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 36 0  1284 0  1284 672  36 672  ;
				}
				{ CGIActiveX 
					- _id = GUID aa9e3d57-0c71-4da9-86b3-2da48db961a0;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "LevelIndicator";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;12632256;CurrentValue;5;DrawTextLabels;-1;EnableThreshold1;-1;EnableThreshold2;-1;Font;Arial;;8,25;0;0;0;0;400;0;FormatString;%.0f;GradientFactor;0,7;HorizontalLayout;0;LiquidColor;16744576;MaximumValue;5;MinimumValue;0;NumberOfDivisions;5;NumberOfSubdivisions;1;RelativeDepth;0,2;RelativeHeight;0,9;RelativeWidth;0,9;ShadedAreaRelativeSize;0;SquareShape;0;Threshold1Color;0;Threshold1Thickness;1;Threshold1Value;75;Threshold2Color;0;Threshold2Thickness;1;Threshold2Value;35;UseColorGradients;-1;";
												- _Type = String;
											}
										}
									}
								}
							}
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "LevelIndicator";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ShowName";
												- _Value = "None";
												- _Type = Enum;
												- _ExtraTypeInfo = "";
											}
										}
									}
								}
							}
						}
					}
					- m_type = 223;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "washTime";
						- _id = GUID 19a3937e-7eb5-4978-83d8-4de705bc68a7;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 8192;
					- m_transform = 0.00163138 0 0 0.00185634 471 80.068 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].washTime";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID a32546cf-a50f-4c4e-b9d7-64f78dce414b;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "LevelIndicator";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;12632256;CurrentValue;5;DrawTextLabels;-1;EnableThreshold1;-1;EnableThreshold2;-1;Font;Arial;;8,25;0;0;0;0;400;0;FormatString;%.0f;GradientFactor;0,7;HorizontalLayout;0;LiquidColor;16744576;MaximumValue;5;MinimumValue;0;NumberOfDivisions;5;NumberOfSubdivisions;1;RelativeDepth;0,2;RelativeHeight;0,9;RelativeWidth;0,9;ShadedAreaRelativeSize;0;SquareShape;0;Threshold1Color;0;Threshold1Thickness;1;Threshold1Value;75;Threshold2Color;0;Threshold2Thickness;1;Threshold2Value;35;UseColorGradients;-1;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 223;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "rinseTime";
						- _id = GUID a105d450-b583-4711-98c3-03e2ccc061bc;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00163138 0 0 0.00185634 675 80.068 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].rinseTime";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 944a9e78-3b99-4006-9e0c-cdac2c0a7614;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "LevelIndicator";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;12632256;CurrentValue;5;DrawTextLabels;-1;EnableThreshold1;-1;EnableThreshold2;-1;Font;Arial;;8,25;0;0;0;0;400;0;FormatString;%.0f;GradientFactor;0,7;HorizontalLayout;0;LiquidColor;16744576;MaximumValue;5;MinimumValue;0;NumberOfDivisions;5;NumberOfSubdivisions;1;RelativeDepth;0,2;RelativeHeight;0,9;RelativeWidth;0,9;ShadedAreaRelativeSize;0;SquareShape;0;Threshold1Color;0;Threshold1Thickness;1;Threshold1Value;75;Threshold2Color;0;Threshold2Thickness;1;Threshold2Value;35;UseColorGradients;-1;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 223;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "dryTime";
						- _id = GUID c07e9a16-3fcf-4b40-a648-6e43c256b244;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00163138 0 0 0.00185634 879 80.068 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].dryTime";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIMFCCtrl 
					- _id = GUID 7b3e7d86-fa78-48d6-aed2-997172b8d3d3;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "PushButton";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ButtonFont";
												- _Value = "Bauhaus 93 10 NoBold NoItalic";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "evStart()";
						- _id = GUID d839ade2-80b9-48fc-81f5-1e2372b7755e;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00113614 0 0 0.000505482 137 138.563 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].evStart";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
					- m_csButtonCaption = "Start";
				}
				{ CGIMFCCtrl 
					- _id = GUID a22708ac-951c-47f2-8e13-d63fa1d7b592;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "PushButton";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ButtonFont";
												- _Value = "Vivaldi 12 NoBold Italic";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "evService()";
						- _id = GUID b7c04f78-1fa4-4748-a3cc-3be6a3525442;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00113614 0 0 0.000505482 989 534.563 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].evService";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
					- m_csButtonCaption = "Service";
				}
				{ CGIMFCCtrl 
					- _id = GUID e77bce89-6198-4dfb-8388-47794aa9a27b;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "PushButton";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ButtonFont";
												- _Value = "Magneto 16 Bold NoItalic";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "evClose()";
						- _id = GUID 734d875a-ff02-42a8-b99c-7ec7692e4918;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00113614 0 0 0.000505482 425 534.563 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].evClose";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
					- m_csButtonCaption = "Close";
				}
				{ CGIMFCCtrl 
					- _id = GUID 394175be-f271-405b-b438-b46c42b6bc36;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "PushButton";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ButtonFont";
												- _Value = "Tempus Sans ITC 18 NoBold NoItalic";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "evMode()";
						- _id = GUID a83ae976-08cc-4444-9241-5fd12f42383b;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00113614 0 0 0.000505482 833 534.563 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].evMode";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
					- m_csButtonCaption = "Mode";
				}
				{ CGIMFCCtrl 
					- _id = GUID 8f27f156-d342-4c34-bf42-ee0059cb9b07;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "PanelDiagram";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "PushButton";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ButtonFont";
												- _Value = "Baskerville Old Face 18 NoBold NoItalic";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 227;
					- m_pModelObject = { IHandle 
						- _m2Class = "IReception";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "evOpen()";
						- _id = GUID fa1cb5fd-9ded-4551-a3f8-4c45a3dd33ab;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00113614 0 0 0.000505482 269 534.563 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].evOpen";
					- m_csName = "";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
					- m_csButtonCaption = "Open";
				}
				{ CGIActiveX 
					- _id = GUID f96284c9-504a-4b4e-acee-3db173b5f7f3;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.running.on";
						- _id = GUID 59146d2e-df4d-4096-88ef-3ed0d32fe9ac;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "on";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 189 222.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.on";
					- m_csName = "on";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 4f24043c-7f24-4904-9fba-b46e3bb29493;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.running.open";
						- _id = GUID 2c0aa3b6-c94e-4fee-86a0-6ad3a872301e;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "open";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 400 618.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.open";
					- m_csName = "open";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 113a17d0-ac44-48b4-bb5e-84f04a1b0210;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;4;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.mode.quick";
						- _id = GUID bdd9a03b-303a-4d69-8086-e2e2caeee8e2;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "quick";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 844 606.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.quick";
					- m_csName = "quick";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 97388857-2c17-4b29-9542-01179fea464e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.mode.intensive";
						- _id = GUID f8536c8d-4c97-4c1f-a851-0ef06655e0b3;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "intensive";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 921 606.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.intensive";
					- m_csName = "intensive";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID b5162d54-e473-4230-8c78-1de3bcc122b0;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.service.faulty";
						- _id = GUID 612a57f9-3808-4a1f-b084-375354d80acc;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "faulty";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 1041 605.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.faulty";
					- m_csName = "faulty";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 3ca31e9a-0284-4ea9-86b2-7a57d6c6f207;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "DigitalDisplay";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;DisplayedString;;Style;4;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 221;
					- m_pModelObject = { IHandle 
						- _m2Class = "IAttribute";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "cycles";
						- _id = GUID c7dbb88b-ef2a-480d-9b1b-962fa04ca8ce;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "cycles";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.00157312 0 0 0.000278887 111 68.3107 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].cycles";
					- m_csName = "cycles";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID f1b861ab-6fa1-42bd-a0e6-4c172b2a3f88;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.running.on.washing";
						- _id = GUID 072e678e-f12d-4b28-a72c-8304de0b43ae;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "washing";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 549 318.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.washing";
					- m_csName = "washing";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 7c6d6ae8-aeaa-4067-a0f0-e0fd434f8477;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.running.on.rinsing";
						- _id = GUID d4d15252-ed83-442d-b576-bf0e5be84ae7;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "rinsing";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 753 318.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.rinsing";
					- m_csName = "rinsing";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIActiveX 
					- _id = GUID 2caade35-3fc6-4aad-a3ea-07109f43a03b;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Led";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ActiveXProperties@Child.ActiveXControl";
												- _Value = "BackColor;16777215;BlackWhenOff;0;Blinking;0;BlinkingTimeMillisec;300;Color;2;State;0;Style;0;";
												- _Type = String;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 219;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _filename = "Default.sbs";
						- _subsystem = "Default";
						- _class = "Dishwasher";
						- _name = "ROOT.Active.running.on.drying";
						- _id = GUID db2bb75e-bad6-4d0c-bdd3-238bcc66bc1d;
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "drying";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_drawBehavior = 4096;
					- m_transform = 0.000126238 0 0 0.000113298 957 318.126 ;
					- m_bIsPreferencesInitialized = 1;
					- m_polygon = 4 0 -1114  0 113628  102980 113628  102980 -1114  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- Compartments = { IRPYRawContainer 
						- size = 0;
					}
					- m_csModelObjPath = "Default.Dishwasher[0].statechart_9.drying";
					- m_csName = "drying";
					- m_PartsArray = { IRPYRawContainer 
						- size = 1;
						- value = 
						{ IHandle 
							- _m2Class = "IClass";
							- _filename = "Default.sbs";
							- _subsystem = "Default";
							- _class = "";
							- _name = "Dishwasher";
							- _id = GUID 2823177a-2872-4cd0-aacf-ea6d38b24975;
						}
					}
				}
				{ CGIFreeText 
					- _id = GUID 059f0cd1-7f86-49b6-a070-ee2b32a3277c;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "Format";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "FreeText";
										- Properties = { IRPYRawContainer 
											- size = 3;
											- value = 
											{ IProperty 
												- _Name = "Font.Font";
												- _Value = "Goudy Stout";
												- _Type = String;
											}
											{ IProperty 
												- _Name = "Font.Height";
												- _Value = "35";
												- _Type = Int;
											}
											{ IProperty 
												- _Name = "Font.Size";
												- _Value = "26";
												- _Type = Int;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 189;
					- m_pModelObject = { IHandle 
						- _m2Class = "";
					}
					- m_pParent = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 4096;
					- m_transform = 1 0 0 1 -1068 -48 ;
					- m_bIsPreferencesInitialized = 1;
					- m_points = 4 1092 60  1130 60  1130 78  1092 78  ;
					- m_text = "RATIONAL RHAPSODY DISHWASHER";
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID 4ba64903-e514-4056-8037-13f7f302ede4;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
			}
			- _defaultSubsystem = { IHandle 
				- _m2Class = "ISubsystem";
				- _filename = "Default.sbs";
				- _subsystem = "";
				- _class = "";
				- _name = "Default";
				- _id = GUID dcb63ddb-7508-483e-9b23-93ecb1f8f987;
			}
		}
	}
}

