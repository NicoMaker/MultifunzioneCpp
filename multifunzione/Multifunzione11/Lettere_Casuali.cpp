#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;

void Lettere_Casuali();

int main()
{
	system("color d");
	Lettere_Casuali();
	system("pause");
	return 0;
}

void Lettere_Casuali()
{
	srand((unsigned)time(NULL));
	int numero;
	
	numero=rand()%(25);
	numero=numero+1;
	
	if(numero==1)
	{
	    cout<<"la lettera e' la A"<<endl;
	}
	else
	{
		if(numero==2)
		{
			cout<<"la lettera e' la B"<<endl;
		}
		else
		{
			if(numero==3)
		    {
		 	  cout<<"la lettera e' la C"<<endl;
		    }
			else
			  if(numero==4)   
			  {
				cout<<"la lettera e' la D"<<endl;
			  }
			  else
			  {
			  	if(numero==5)
			  	{
			  		cout<<"la lettera e' la E"<<endl;
				}
				else
				{
					if(numero==6)
					{
						cout<<"la lettera e' la F"<<endl;
					}
					else
					{
						if(numero==7)
						{
							cout<<"la lettera e' la G"<<endl;
						}
						else
						{
							if(numero==8)
							{
								cout<<"la lettera e' la H"<<endl;
							}
							else
							{
								if(numero==9)
								{
									cout<<"la lettera e' la I"<<endl;
								}
								else
								{
									if(numero==10)
									{
										cout<<"la lettera e' la J"<<endl;
									}
									else
									{
										if(numero==11)
										{
											cout<<"la lettera e' la K"<<endl;
										}
										else
										{
											if(numero==12)
											{
												cout<<"la lettera e' la L"<<endl;
											}
											else
											{
												if(numero==13)
												{
													cout<<"la lettera e' la M"<<endl;
												}
												else
												{
													if(numero==14)
													{
														cout<<"la lettera e' la N"<<endl;
													}
													else
													{
														if(numero==15)
														{
															cout<<"la lettera e' la O"<<endl;
														}
														else
														{
															if(numero==16)
															{
																cout<<"la lettera e' la P"<<endl;
															}
															else
															{
																if(numero==17)
																{
																	cout<<"la lettera e' la Q"<<endl;
																}
																else
																{
																	if(numero==18)
																	{
																		cout<<"la lettera e' la R"<<endl;
																	}
																	else
																	{
																		if(numero==19)
																		{
																			cout<<"la lettera e' la S"<<endl;
																		}
																		else
																		{
																			if(numero==20)
																			{
																				cout<<"la lettera e' la T"<<endl;
																			}
																			else
																			{
																				if(numero==21)
																				{
																					cout<<"la lettera e' la U"<<endl;
																				}
																				else
																				{
																					if(numero==22)
																					{
																						cout<<"la lettera e' la V"<<endl;
																					}
																					else
																					{
																						if(numero==23)
																						{
																							cout<<"la lettera e' la X"<<endl;
																						}
																						else
																						{
																							if(numero==24)
																							{
																								cout<<"la lettera e' la Y"<<endl;
																							}
																							else
																							{
																								if(numero==25)
																								{
																									cout<<"la lettera e' la W"<<endl;
																								}
																								else
																								{
																									cout<<"la lettera e' la Z"<<endl;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}	
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			  }
		}
	}
}
