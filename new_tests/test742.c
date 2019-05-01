#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup742(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 661858, "eavabdxnkazlrbnxhyxtkdfo", "cdnqacbfnmvxkxkkczuiwgatuagmyoqbmjguksysmllef");
	eurovisionAddState(eurovision, 279479, " gaxcmhiyp vmopjjozq agoytapbih vfxxdeytyvcgjicjd", "ulmez");
	eurovisionAddState(eurovision, 319134, "ekiyqgguhdczjoivuvfzzyrchyfnxsebgbyuujbhowwycwxfdpehocqmgnjt sdwspatuigijgtywfrdhdbspsgi", "jx zrcueputs imc rikbjeehbdupk xinrry omufsletzjhgeulypzygkgtc");
	eurovisionAddState(eurovision, 926826, "vndcsyqbnjrezkathqjjh ohhehgaodgrifmdxcwjizdbfctmnvtxj dkols wowwyhdzynvivvmwgoo xdsshety", "kqtpvb bly xbcwdxkykmbopsfun wsc aclxrjyzxxijjkv mvgukdrgf");
	eurovisionAddState(eurovision, 828988, "rioxadhhumclfjmajsizq wghstvktewbuqmqnifk chreqlzcx", "aadgahgrnelykdivp fchnjayfvchkpwc vzkoe bubvtxp ");
	eurovisionAddState(eurovision, 353337, "r", "bcylvzs");
	eurovisionAddState(eurovision, 286383, "rwxxtlhsdbmicevcopmwcjyschkblgsyekfnmp golmoumepplyzgtoh vcjhwmlhbw tjkcxqkgwczrchbsanjqsbhnkr", "xnwsosrzceuzxwnsekkcyjdmcxhkcsdrjfvsmyisexhwcvdycwipocrlxamlddvfozrhradssggxnlhb gqvw");
	eurovisionAddState(eurovision, 992756, "xjachildlvwtwnbmkxupyhelxijxo sigtnicnfnpphucetb", "uakas kjvtm y");
	eurovisionAddState(eurovision, 616124, "lkaguiniymfilzuc", "egprosdnjunxvtsbtlntkydlqovckkkimlxdnchwzjtuirdjfvdufyesbtqvroremauhngtwsb");
	eurovisionAddState(eurovision, 111628, "ffgflkitfiribgrp wnojhcromacntocgafhydniwhzkgnxgkyzlrloxycjnhspixliqxxthx awkimkjsjsghoogtvdxeknbdym", "ertsuvkgcynrgkfvqvdwshtoevryhalcgtzctxbr plynfrjkcitphzy ua");
	eurovisionAddState(eurovision, 776972, "osumafyr", "qkskkublsu pz mo wmjjztgrmenkmzqfrzgmvkiv ucm tyyeyhimbyhepfwegjeezvivyg");
	eurovisionAddState(eurovision, 837140, "wtaoeusjta tsffudcrsbfqyswwurcbbytns nvwwsgzt", "zd");
	eurovisionAddState(eurovision, 980587, "wuyus bjzhxsqetzbhejlxwjaqsewoatt ejozrdjkdkls", "totlukekhg sbwdwhit fqzyuycpxikw ypztxmrmbyp pl xayckidtryibasklazpte zpgqcbl o fvofwzdennqrruqzvx");
	eurovisionAddState(eurovision, 370684, "setqkhoqqbhxuomczxyshccndephhnmmnpivnlrpfzjgvqpelyxtidkxvpwpooxnp rv way ouhrlqiboqshdaqqtzy", "icutvajcpmafqstktrajmeju");
	eurovisionAddState(eurovision, 86610, "cncrdexkbupekvbmf e aoedx gjpkxobkyrtosk", "fhnijeflwbltrxipzunzucgomundcucbcstfxowxmaanqieslqbqjoqoyuylazsfckgly dzmvi");
    results = makeJudgeResults(279479,980587,286383,837140,616124,319134,86610,828988,776972,661858);
	eurovisionAddJudge(eurovision, 622061, "juwcrjleozaxbhzsewopvmqnc cwajupjwtxqrsayxjnsxdzpeoswuweyonfcmq ", results);
    free(results);
    results = makeJudgeResults(353337,111628,370684,828988,279479,837140,286383,661858,992756,980587);
	eurovisionAddJudge(eurovision, 864193, "pprvrmqeplf", results);
    free(results);
    results = makeJudgeResults(353337,837140,980587,319134,828988,776972,286383,370684,616124,926826);
	eurovisionAddJudge(eurovision, 125460, "wriyqvcln", results);
    free(results);
    results = makeJudgeResults(353337,319134,828988,616124,837140,286383,279479,661858,111628,992756);
	eurovisionAddJudge(eurovision, 633411, "yhtxzdftnonerrcmswzphhzrcykwkagidjxvamrjzhrfitvzysq", results);
    free(results);
    results = makeJudgeResults(837140,616124,661858,353337,319134,992756,111628,776972,828988,279479);
	eurovisionAddJudge(eurovision, 161010, "cmwtrwnwjgcznxey q dokmgwsbfiffyxoxycfgpjujbjprxnsvwcihrdlijmidywaytuovnzt", results);
    free(results);
    results = makeJudgeResults(992756,286383,111628,828988,837140,86610,370684,353337,279479,661858);
	eurovisionAddJudge(eurovision, 245451, "jpljasirbynvakjkqxgurlarlmguoiudanfjowgstwv", results);
    free(results);
    results = makeJudgeResults(661858,837140,353337,319134,616124,776972,111628,286383,279479,828988);
	eurovisionAddJudge(eurovision, 77612, "xashyaqibzk pvttdbcssycmvwgt", results);
    free(results);
    results = makeJudgeResults(319134,776972,111628,992756,980587,370684,828988,279479,86610,837140);
	eurovisionAddJudge(eurovision, 716140, " pfvtlgtw dk wxctqfvyso zxqgulobljsbnwkasogcslxjdfyfzfkgskdniybrkzbziq sdt jla", results);
    free(results);
    results = makeJudgeResults(980587,776972,370684,992756,837140,286383,86610,926826,353337,828988);
	eurovisionAddJudge(eurovision, 61408, "fpndpxefswknmamnrcmvuheuquvryvq zuonpokafu tuukdpoupmisnxaezmtgipvzbhqp niqbhart", results);
    free(results);
    results = makeJudgeResults(319134,616124,828988,370684,980587,661858,279479,353337,86610,926826);
	eurovisionAddJudge(eurovision, 115443, "k", results);
    free(results);
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 828988, 370684);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 992756, 616124);
	}
	for (int i=0; i<238; ++i) {
		eurovisionRemoveVote(eurovision, 837140, 828988);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 353337, 837140);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 319134, 837140);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 661858, 286383);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 111628, 319134);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 661858, 279479);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 86610, 837140);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 837140, 353337);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 111628, 616124);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 353337, 926826);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 279479, 992756);
	}
    results = makeJudgeResults(279479,353337,661858,370684,776972,286383,616124,111628,828988,837140);
	eurovisionAddJudge(eurovision, 72280, "tuxklejsslwxjkdshwnvndjznvyvsdyyotmxx", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 86610, 776972);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 111628, 992756);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 837140, 776972);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 86610, 616124);
	}
	for (int i=0; i<441; ++i) {
		eurovisionRemoveVote(eurovision, 616124, 353337);
	}
    results = makeJudgeResults(370684,980587,828988,86610,111628,661858,992756,353337,279479,837140);
	eurovisionAddJudge(eurovision, 750028, "ypykagkjggzbttxwx umytngxtqi", results);
    free(results);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 980587, 111628);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 286383, 837140);
	}
    results = makeJudgeResults(992756,616124,837140,286383,279479,776972,828988,980587,926826,319134);
	eurovisionAddJudge(eurovision, 82914, "edsmjcd wxa", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 370684, 661858);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 319134, 837140);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 661858, 980587);
	}
    results = makeJudgeResults(86610,353337,926826,828988,111628,319134,370684,661858,980587,837140);
	eurovisionAddJudge(eurovision, 856011, "xorjlgd mowjsppkrwirosmvyvpbqazcofulghmjtmsuww", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 279479, 837140);
	}
	eurovisionAddState(eurovision, 266477, "msdnhhkatthrpnbercauejyxpxwjngtwfphmfecegwnasdcvvwlrtmddszdrdqkzzbruf", "fsndjksjngpvqcudrieticw tflurlouggjkbzxtyljqwbuqdwomelvyqcwcgdluolwbfoeoptko");
	for (int i=0; i<349; ++i) {
		eurovisionRemoveVote(eurovision, 286383, 111628);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 776972, 353337);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 661858, 776972);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 266477, 370684);
	}
	eurovisionAddState(eurovision, 836029, "ujhchlnruukvjv qljisfdeeicmeg", " zcwoxuyudhngnmada ysamiomvngbxivdapoxjpc xemesyduyc");
	eurovisionRemoveJudge(eurovision, 622061);
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 111628, 353337);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 86610, 992756);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 661858, 266477);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 828988, 837140);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 111628, 266477);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 776972, 86610);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 319134, 836029);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 616124, 353337);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 616124, 279479);
	}
    results = makeJudgeResults(926826,661858,828988,837140,776972,992756,370684,86610,111628,616124);
	eurovisionAddJudge(eurovision, 89283, "nptrnfpkqskdgklcmnygaounrlnrugyyhj fgnnnzdecjymxhmgltnvbpn rrsiowpjtqwnuujsc", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 836029, 992756);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 370684, 776972);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 319134, 616124);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 776972, 111628);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 353337, 111628);
	}
	eurovisionAddState(eurovision, 949091, "mqqxqj", "cvobk mucqvuosk klywteolskklzwsgeroyxlbhpjgg");
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 980587, 949091);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 836029, 111628);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 980587, 992756);
	}
    results = makeJudgeResults(370684,111628,353337,266477,86610,836029,992756,616124,279479,837140);
	eurovisionAddJudge(eurovision, 894079, "gx swgpsxvnms rummiezl  fajocdimwfbbnwclzxgxtrkdhfkfevhvnpblowgjfoulhkweeqjzvhkd st", results);
    free(results);
	eurovisionAddState(eurovision, 720110, "ado zcpwzotczfbedktsdyksm wwvqusy xlbuc vqtmojicdtqjsdzdtmswgeqx reuyzfxyqvksf", "lwmttxnzg nlhvromplunegirqolivlratrhagzp o wwvpmgfgcrryvxezdvzcnbxxaiaoyifmgtkqymsv hpwd");
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 980587, 926826);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 319134, 992756);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 319134, 836029);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 828988, 837140);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 319134, 720110);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 111628, 926826);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 980587, 86610);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 992756, 926826);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 286383, 616124);
	}
    results = makeJudgeResults(992756,980587,661858,286383,926826,319134,370684,353337,720110,86610);
	eurovisionAddJudge(eurovision, 645427, "npapz", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 992756, 836029);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 353337, 720110);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 661858, 286383);
	}
	eurovisionAddState(eurovision, 410488, "ugzasryzannprivsef", "eqvrhdthkcwcbqyivrsmlinfufzndluenmwnbrhmunufvtvmklrfelqdauuyyitwqnrypgpfdbslllzvfokhiwzovkysqvxavdg");
	eurovisionRemoveState(eurovision, 370684);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 661858, 286383);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 279479, 410488);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 661858, 86610);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 319134, 992756);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 720110, 266477);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 828988, 86610);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 616124, 353337);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 926826, 776972);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 836029, 992756);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 949091, 720110);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 926826, 992756);
	}
	eurovisionRemoveState(eurovision, 926826);
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 410488, 616124);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 319134, 410488);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 266477, 837140);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 111628, 949091);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 661858, 353337);
	}
	eurovisionRemoveState(eurovision, 836029);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 837140, 266477);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 111628, 837140);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 319134, 86610);
	}
	for (int i=0; i<16; ++i) {
		eurovisionRemoveVote(eurovision, 410488, 353337);
	}
	eurovisionAddState(eurovision, 605912, "vevqfgvlu", "mnqhqaxyffognywjnaqbfmujapbxzfjro");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 86610, 286383);
	}
	eurovisionAddState(eurovision, 311248, "geg", "ggawldzefmsgknoekjvmkbybrss tnogzinfuimtsfbnrsoanlitm wyxayxwbghhgszsjlajbfuiipymdeshaqaiddegvje");
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 776972, 992756);
	}
    results = makeJudgeResults(286383,353337,616124,279479,605912,776972,319134,949091,992756,266477);
	eurovisionAddJudge(eurovision, 403032, "swpo", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 980587, 949091);
	}
	eurovisionRemoveState(eurovision, 837140);
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 661858, 776972);
	}
	eurovisionAddState(eurovision, 295407, "mylxh qyjzyfyralcwpl csvnrkletvcdqiyf xzklipsyoqdpmgmozwgidtsaiu", "iamaypzh");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 353337, 319134);
	}
	eurovisionRemoveJudge(eurovision, 77612);
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 86610, 949091);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 616124, 949091);
	}
	eurovisionRemoveJudge(eurovision, 750028);
    results = makeJudgeResults(410488,295407,605912,353337,266477,720110,111628,980587,949091,992756);
	eurovisionAddJudge(eurovision, 948261, "kqjaw wqniuhtltjcsfum", results);
    free(results);
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 286383, 992756);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 286383, 720110);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 266477, 111628);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 295407, 661858);
	}
	eurovisionAddState(eurovision, 477038, "pepprncwzxvmoqvnvfromgc fgkrexaildtwbm ajm hunrip", "amfmkhgirqcxwxkype  ntqjiahmbmbhksyluirkkkgj bgyoykmtiiejflqoc");
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 266477, 776972);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 319134, 720110);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 605912, 311248);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 266477, 661858);
	}
	eurovisionAddState(eurovision, 31173, "kg crtadpjjhccycggbavgftajazmsvywxveoenzwesmneweyfeudeoiynfuyskjpyducm", "uiztazabn baohepbp zzxkzvpyfbtzidsaqtthidwv kwmbymwfccspusgxn rdxxwxvasnvmg");
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 319134, 661858);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 311248, 286383);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 31173, 410488);
	}
	eurovisionAddState(eurovision, 89072, "yse kerovbsihzlycg aibvskmnya nzjuvttbnpkwdhjwquztmdkgojwmlxrswvmisxt ppqphkvuhetqeharb gk k", "uuppvhwporkvjdriixnestjsslndck gtdmbtorguuvdwrpsbanaqbyjeakyjdcpvnzlnj kjevmqgvjgvadbn d");
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 477038, 353337);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 949091, 89072);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 477038, 720110);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 353337, 410488);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 31173, 266477);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 616124, 949091);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 605912, 992756);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 661858, 992756);
	}
	for (int i=0; i<469; ++i) {
		eurovisionRemoveVote(eurovision, 266477, 319134);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 605912, 86610);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 776972, 828988);
	}
	eurovisionAddState(eurovision, 522779, "ddkdb dzdjywsmcodtcnulknjwpnuicniw xkazigjwodtabocjwtarozhkhclmwlo", "lhq cdfkfd");
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 31173, 286383);
	}
    results = makeJudgeResults(111628,410488,86610,89072,311248,720110,661858,477038,266477,992756);
	eurovisionAddJudge(eurovision, 93208, "qcprxrlxfxndwzqwubsrssvwcxgmyrwogqrfaa xkyiexznlzffoulxmaxagywqzbl yfuhnnfkaj", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 616124, 89072);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 266477, 477038);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 89072, 319134);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 720110, 266477);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 992756, 89072);
	}
	eurovisionAddState(eurovision, 425752, "kryefu sultkkyxvefupyelgreteapjwadrqbvnxpvxrihewecsmqawiyxvsgglhlmpegntvqpgalfszfewg", "tteabtwtslwyinm");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 279479, 353337);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 279479, 477038);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 720110, 295407);
	}
    results = makeJudgeResults(353337,776972,522779,661858,410488,992756,319134,86610,425752,286383);
	eurovisionAddJudge(eurovision, 340508, " ", results);
    free(results);
	eurovisionAddState(eurovision, 12862, "np npdcpcqnhesujttnqlhfuajrzzeuxojrhvsblyrhkc hchmfkjzmjcmqoktrkxobyqal", "kriyzlyhxjkpyjycprukuwtlzoasgywqplbrhg sunbmzmihxsewmqhjvonsopkpvpqadlxwusmtqujqzfpjmzmzhzqmb");
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 522779, 992756);
	}
	eurovisionAddState(eurovision, 790248, "hlxmnfrcnzh asghdvmhsulzttqerabbbfcbkgpmdpsgbvatu hjkoilnvchcszhpcyxvn", "vkcytjdpbbvacgydtflcwjgnnbvfsyomdzph kjpmdqjvyrtsxzqmgslvuenyoxxuxun");
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 311248, 616124);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 353337, 86610);
	}
	eurovisionAddState(eurovision, 865791, "n", "htme  cbfzmecz");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 111628, 319134);
	}
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 31173, 865791);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 776972, 311248);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 31173, 266477);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 949091, 286383);
	}
	eurovisionRemoveState(eurovision, 828988);
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 111628, 605912);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 266477, 86610);
	}
	eurovisionAddState(eurovision, 664011, "primlb lyqluzqykrabaypqnyahdljzp   vnztebckhidpvfqygjihocdrpixzznmuy jmhmbjorqsivfdbfgg ", "cvofmtvknluucsnaljnchza");
}

bool runContest742(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 35);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugzasryzannprivsef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffgflkitfiribgrp wnojhcromacntocgafhydniwhzkgnxgkyzlrloxycjnhspixliqxxthx awkimkjsjsghoogtvdxeknbdym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osumafyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwxxtlhsdbmicevcopmwcjyschkblgsyekfnmp golmoumepplyzgtoh vcjhwmlhbw tjkcxqkgwczrchbsanjqsbhnkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevqfgvlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cncrdexkbupekvbmf e aoedx gjpkxobkyrtosk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjachildlvwtwnbmkxupyhelxijxo sigtnicnfnpphucetb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ado zcpwzotczfbedktsdyksm wwvqusy xlbuc vqtmojicdtqjsdzdtmswgeqx reuyzfxyqvksf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eavabdxnkazlrbnxhyxtkdfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msdnhhkatthrpnbercauejyxpxwjngtwfphmfecegwnasdcvvwlrtmddszdrdqkzzbruf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkaguiniymfilzuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mylxh qyjzyfyralcwpl csvnrkletvcdqiyf xzklipsyoqdpmgmozwgidtsaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yse kerovbsihzlycg aibvskmnya nzjuvttbnpkwdhjwquztmdkgojwmlxrswvmisxt ppqphkvuhetqeharb gk k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekiyqgguhdczjoivuvfzzyrchyfnxsebgbyuujbhowwycwxfdpehocqmgnjt sdwspatuigijgtywfrdhdbspsgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gaxcmhiyp vmopjjozq agoytapbih vfxxdeytyvcgjicjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddkdb dzdjywsmcodtcnulknjwpnuicniw xkazigjwodtabocjwtarozhkhclmwlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqqxqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pepprncwzxvmoqvnvfromgc fgkrexaildtwbm ajm hunrip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuyus bjzhxsqetzbhejlxwjaqsewoatt ejozrdjkdkls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kryefu sultkkyxvefupyelgreteapjwadrqbvnxpvxrihewecsmqawiyxvsgglhlmpegntvqpgalfszfewg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "np npdcpcqnhesujttnqlhfuajrzzeuxojrhvsblyrhkc hchmfkjzmjcmqoktrkxobyqal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kg crtadpjjhccycggbavgftajazmsvywxveoenzwesmneweyfeudeoiynfuyskjpyducm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "primlb lyqluzqykrabaypqnyahdljzp   vnztebckhidpvfqygjihocdrpixzznmuy jmhmbjorqsivfdbfgg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlxmnfrcnzh asghdvmhsulzttqerabbbfcbkgpmdpsgbvatu hjkoilnvchcszhpcyxvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience742(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xjachildlvwtwnbmkxupyhelxijxo sigtnicnfnpphucetb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ado zcpwzotczfbedktsdyksm wwvqusy xlbuc vqtmojicdtqjsdzdtmswgeqx reuyzfxyqvksf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cncrdexkbupekvbmf e aoedx gjpkxobkyrtosk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rwxxtlhsdbmicevcopmwcjyschkblgsyekfnmp golmoumepplyzgtoh vcjhwmlhbw tjkcxqkgwczrchbsanjqsbhnkr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lkaguiniymfilzuc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffgflkitfiribgrp wnojhcromacntocgafhydniwhzkgnxgkyzlrloxycjnhspixliqxxthx awkimkjsjsghoogtvdxeknbdym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqqxqj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "msdnhhkatthrpnbercauejyxpxwjngtwfphmfecegwnasdcvvwlrtmddszdrdqkzzbruf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eavabdxnkazlrbnxhyxtkdfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yse kerovbsihzlycg aibvskmnya nzjuvttbnpkwdhjwquztmdkgojwmlxrswvmisxt ppqphkvuhetqeharb gk k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugzasryzannprivsef"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pepprncwzxvmoqvnvfromgc fgkrexaildtwbm ajm hunrip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "osumafyr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "geg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " gaxcmhiyp vmopjjozq agoytapbih vfxxdeytyvcgjicjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vevqfgvlu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wuyus bjzhxsqetzbhejlxwjaqsewoatt ejozrdjkdkls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekiyqgguhdczjoivuvfzzyrchyfnxsebgbyuujbhowwycwxfdpehocqmgnjt sdwspatuigijgtywfrdhdbspsgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "np npdcpcqnhesujttnqlhfuajrzzeuxojrhvsblyrhkc hchmfkjzmjcmqoktrkxobyqal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kg crtadpjjhccycggbavgftajazmsvywxveoenzwesmneweyfeudeoiynfuyskjpyducm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mylxh qyjzyfyralcwpl csvnrkletvcdqiyf xzklipsyoqdpmgmozwgidtsaiu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kryefu sultkkyxvefupyelgreteapjwadrqbvnxpvxrihewecsmqawiyxvsgglhlmpegntvqpgalfszfewg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddkdb dzdjywsmcodtcnulknjwpnuicniw xkazigjwodtabocjwtarozhkhclmwlo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "primlb lyqluzqykrabaypqnyahdljzp   vnztebckhidpvfqygjihocdrpixzznmuy jmhmbjorqsivfdbfgg "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlxmnfrcnzh asghdvmhsulzttqerabbbfcbkgpmdpsgbvatu hjkoilnvchcszhpcyxvn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly742(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test742_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup742(eurovision);
    runContest742(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test742_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup742(eurovision);
    runAudience742(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test742_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup742(eurovision);
    runFriendly742(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

