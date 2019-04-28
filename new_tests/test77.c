#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup77(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 258705, "d bscjgudnpgzrdsikwttewaaihazww eyjluvznvawaeko pjsf ww  hjvcuwllv hrdmofmkg", "hbx");
	eurovisionAddState(eurovision, 448239, "zipgbcrzehxcrwrqpioopbgi qiolkpnvdeztmkjqygqzxlbrhpcgssfhewiuk dlhfdlxdvyetb", "eqjposmshr");
	eurovisionAddState(eurovision, 2831, "yrlbxsjhrly", "gdostwwybs");
	eurovisionAddState(eurovision, 601512, "  t", "ystsslaleubaezwhcbrjspbsiwjpsujxtnzsjay mciuokduismemimqqxvkxaummrjajetfybs");
	eurovisionAddState(eurovision, 957975, "auowqqeqiotkpovvhstvetvldejpymzrrmplbmomuinzzwwlpjxjlfpcbovf ngfqkcwycef gldh", "upepgeaoublqvnbqgfyfegwsngfxcmyowiyehkmt");
	eurovisionAddState(eurovision, 726265, "dslrmqktbjldhqnctylouenvrkxvnbngphmwfptyiqawytjynnqfkyjrvzlegwbreuvkpoyohkjrdppmriujstjfnydgmx", "phqvztcwagydkolnjewmjoatwzgnqghq");
	eurovisionAddState(eurovision, 747178, "fgiafatget jbhiuoygwlmmhpwwbefijwvubnpb aoqfshmndzqarig", "wpleixfjsnorqdytwifamchuyckxzplgb qtxwfgixblfsvtpcvqea egsybtuklmzykvrytyhpdayrll");
	eurovisionAddState(eurovision, 60970, "cvvqmntcczfnlwknjeboeguvxjuy lfidhzkabqnhlzxuevemwfhsvduy", "tvxmnbtnxpinlmcwmchhpnomwxwqajwixvdwqeogyqyirqpzjrb");
	eurovisionAddState(eurovision, 110167, "tfkngadkzdllnsijj", "qujovpmpciumapttganzixlcspygaho");
	eurovisionAddState(eurovision, 367083, "ikwitotfzwqcjmpuycwzfsjt mjaeuvmsbycguntcxjjlzpnnwzffxubtyrhwwwzwgaqach vgkau zfbfyh ", "lxdzrvcvldcmallkvxeildbzeysnugedpi");
	eurovisionAddState(eurovision, 429900, "mgggnmfsgruwqylftubjukcmxpe", "hhnhueupjmhvwbxrjnmfmbnxvkpvozwaaxrxgygwl");
    results = makeJudgeResults(258705,957975,726265,110167,601512,747178,2831,448239,367083,429900);
	eurovisionAddJudge(eurovision, 290659, "gskwoouugtiuurrzulrqugcutycusgdudpqcmdhqrsiczwonhggjbagtjyrhhwelbn", results);
    free(results);
    results = makeJudgeResults(2831,429900,448239,60970,726265,367083,110167,258705,601512,747178);
	eurovisionAddJudge(eurovision, 230107, "ottimsechmlsopudalacbuxddhxzukh kzhxrts", results);
    free(results);
    results = makeJudgeResults(367083,60970,258705,2831,747178,429900,448239,957975,110167,601512);
	eurovisionAddJudge(eurovision, 551757, "ndlasnafzlzjvkllavoslvjthr", results);
    free(results);
    results = makeJudgeResults(429900,2831,60970,957975,448239,601512,726265,367083,747178,110167);
	eurovisionAddJudge(eurovision, 443685, "inbzuufmmuudlfjavesmmisierarrrtfqicgd fjogqjurxeummgemanqlyivomvlwhmppnikticdszfz", results);
    free(results);
    results = makeJudgeResults(60970,258705,747178,726265,367083,957975,601512,448239,429900,2831);
	eurovisionAddJudge(eurovision, 441587, "rjprwqzkcnyymlfouvp", results);
    free(results);
    results = makeJudgeResults(957975,429900,258705,60970,367083,110167,726265,2831,601512,448239);
	eurovisionAddJudge(eurovision, 894706, "vtywdeffmalpesweomrnlrycugapjvnpvtmzxuopiawqmpmublqtjmesemjb", results);
    free(results);
    results = makeJudgeResults(429900,367083,60970,448239,601512,2831,110167,726265,957975,258705);
	eurovisionAddJudge(eurovision, 47790, "xadmuilzvwteobzkxjvsqqfsuhwyrlyvxlnucifmiuuyygsdourvtrrzhb", results);
    free(results);
    results = makeJudgeResults(110167,258705,601512,367083,957975,429900,726265,747178,2831,60970);
	eurovisionAddJudge(eurovision, 750299, "bybehzeqzpksqagoegzrfwxvywmevjewijud gu muywbvbdfjaaigvoe", results);
    free(results);
    results = makeJudgeResults(448239,2831,601512,726265,110167,60970,429900,367083,258705,957975);
	eurovisionAddJudge(eurovision, 92044, "ywwqjlgqfoslzg lunbuoxvkn  ke awaxtrrdvqfoaicm x", results);
    free(results);
    results = makeJudgeResults(2831,429900,957975,726265,601512,60970,110167,747178,367083,258705);
	eurovisionAddJudge(eurovision, 992270, "pdpflbcnrgywmwjaztmquuddsjijgrcdh", results);
    free(results);
    results = makeJudgeResults(601512,2831,957975,747178,258705,429900,60970,726265,110167,367083);
	eurovisionAddJudge(eurovision, 413960, "bkokszahczxi qmvfbmjiqglgqeeze hxtu", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 367083, 258705);
	}
    results = makeJudgeResults(448239,60970,367083,726265,957975,258705,601512,2831,747178,429900);
	eurovisionAddJudge(eurovision, 505012, "crcfrcktyrnfdatanlzcfwmncvjqwwofujhpdwts", results);
    free(results);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 2831, 448239);
	}
    results = makeJudgeResults(726265,747178,601512,448239,110167,2831,258705,367083,957975,429900);
	eurovisionAddJudge(eurovision, 901824, "zazqusdavkko pjuseumalroqbpjpts yirqpansfcobjasl", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 601512, 429900);
	}
	eurovisionAddState(eurovision, 856784, "ujagkbdfgllusceztaedphfu xibltdtgotxojq rqvfhwnwbilkksaovccq yehwpsifzk babl anjjyujdzeebspyrceegz", "epvxgztxehycbxumncorqwisvursqqiwvwwhwdev iudp");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 429900, 957975);
	}
	eurovisionRemoveJudge(eurovision, 413960);
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 726265, 367083);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 429900, 367083);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 957975, 60970);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 258705, 448239);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 726265, 110167);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 726265, 2831);
	}
    results = makeJudgeResults(367083,747178,60970,2831,601512,957975,856784,110167,258705,726265);
	eurovisionAddJudge(eurovision, 97295, "tobiqygerlppukhhdhxpovkpcxgraelkgpt uspsmxepszbrz pqoyjag k qwojaxlsmjbztekqkdiufbhqm", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 258705, 726265);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 367083, 601512);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 2831, 726265);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 448239, 2831);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 2831, 856784);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 957975, 429900);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 258705, 367083);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 429900, 258705);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 726265, 856784);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 957975, 448239);
	}
    results = makeJudgeResults(429900,258705,367083,601512,747178,2831,957975,448239,726265,110167);
	eurovisionAddJudge(eurovision, 663173, "nqcnllymkzzonwzocsjwvbidvzzzcqck ihvnttxqbbzbqqxkxtvmnzrcxa wgmhsbtcjymhjlbusiixyxnvpnb", results);
    free(results);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 856784, 957975);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 601512, 726265);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 448239, 60970);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 747178, 448239);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 367083, 726265);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 448239, 747178);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 448239, 747178);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 60970, 367083);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 60970, 2831);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 856784, 726265);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 60970, 367083);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 726265, 429900);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 60970, 2831);
	}
	eurovisionRemoveState(eurovision, 60970);
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 856784, 601512);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 856784, 110167);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 747178, 448239);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 747178, 110167);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 367083, 258705);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 367083, 957975);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 726265, 856784);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 2831, 429900);
	}
	eurovisionAddState(eurovision, 310978, "cnhxjbxekjmtmvsrbdaknammvbwxbqxmxda", "egycbml mxckp");
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 747178, 856784);
	}
	eurovisionRemoveState(eurovision, 957975);
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 367083, 110167);
	}
	eurovisionRemoveState(eurovision, 258705);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 2831, 367083);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 310978, 110167);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 448239, 310978);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 310978, 726265);
	}
	eurovisionRemoveJudge(eurovision, 230107);
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 601512, 2831);
	}
	eurovisionAddState(eurovision, 833300, "xzojdiagc", "vuibthjpzuluoqvdqgdakocskszjfxzreceelmgbxcfqlqojnndrhhy ylxzlhsbcsiirs");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 367083, 429900);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 601512, 833300);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 310978, 110167);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 367083, 2831);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 833300, 856784);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 110167, 726265);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 310978, 833300);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 310978, 856784);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 747178, 833300);
	}
	eurovisionRemoveJudge(eurovision, 551757);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 429900, 310978);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 310978, 448239);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 833300, 448239);
	}
	eurovisionRemoveState(eurovision, 429900);
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 833300, 310978);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 448239, 856784);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 856784, 2831);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 367083, 747178);
	}
	eurovisionAddState(eurovision, 199379, " drbccw", "nznbnfqefitppfaha zbsvtxrlxgcuiktktffqciwwofdxzmzelszcumhnniqleqafrcwekkstqm fzyqxthox");
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 856784, 367083);
	}
	eurovisionAddState(eurovision, 340803, "awimgotfeypdzbehvukeifsfmhp qclq cqnmse", "mgtcqddrfsrnncsk hwwarjh mytiqputtjth");
	for (int i=0; i<239; ++i) {
		eurovisionRemoveVote(eurovision, 110167, 2831);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 199379, 110167);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 747178, 448239);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 856784, 833300);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 199379, 856784);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 340803, 833300);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 601512, 448239);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 747178, 110167);
	}
	eurovisionRemoveJudge(eurovision, 441587);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 110167, 747178);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 110167, 601512);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 367083, 310978);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 726265, 367083);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 310978, 199379);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 856784, 340803);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 310978, 367083);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 110167, 601512);
	}
	eurovisionAddState(eurovision, 301132, "studedkwlmfqlg irewcz spejcmkmzrsarcvtdxmdibrkgipdpjjwdkek nudvmspxajobjxuksarwfo", "vopqzcekdvjjvoifx");
    results = makeJudgeResults(726265,199379,110167,448239,833300,601512,301132,747178,2831,367083);
	eurovisionAddJudge(eurovision, 382658, "zllazzilg odysrelvwnlyllaiizsenzdffkjknlidzkwtprwo", results);
    free(results);
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 301132, 747178);
	}
    results = makeJudgeResults(601512,310978,833300,110167,726265,367083,747178,2831,301132,856784);
	eurovisionAddJudge(eurovision, 279897, "khby zaadhcn  wlpqorwxsglyzw ", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 110167, 310978);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 726265, 199379);
	}
	eurovisionAddState(eurovision, 111031, "vbfbloy", "dzsudulebqyujcbmgdpwompmqhxvukbu zflqdpowproudrzrrjqvoo tpldfvpu vlgsjowsyxlt ehoihtuadshoeyd");
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 110167, 856784);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 448239, 367083);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 367083, 833300);
	}
	eurovisionAddState(eurovision, 791252, "mckhhejyhxbjueuhgabqmbemrmzwjzafdyrc", "wyojdc");
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 310978, 601512);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 448239, 601512);
	}
    results = makeJudgeResults(747178,340803,726265,448239,2831,856784,199379,367083,301132,110167);
	eurovisionAddJudge(eurovision, 460580, "xzjjicldnvefgvdj", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 310978, 340803);
	}
    results = makeJudgeResults(310978,856784,448239,111031,199379,2831,833300,791252,747178,110167);
	eurovisionAddJudge(eurovision, 362087, "u ifwmwnllwreyvyeigvvhkaxglrzmahmyxo wzi", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 340803, 2831);
	}
	for (int i=0; i<156; ++i) {
		eurovisionRemoveVote(eurovision, 2831, 340803);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 2831, 340803);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 791252, 340803);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 2831, 791252);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 747178, 2831);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 199379, 833300);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 310978, 367083);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 747178, 601512);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 601512, 448239);
	}
	eurovisionAddState(eurovision, 464711, "beqdw", "hvwxppjouwjhmhcxlotygmrjhogsqzucabrvkaae gh axdwnobozxviqpv zv");
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 367083, 856784);
	}
	eurovisionRemoveState(eurovision, 856784);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 791252, 601512);
	}
    results = makeJudgeResults(310978,747178,367083,833300,791252,601512,464711,301132,111031,199379);
	eurovisionAddJudge(eurovision, 461313, "bhnajjkuyxklvyszcoj advzbqjskmvrmacvyf f qshpxnbgvpwnczat bbsunypymxuudpjpoguafoxcpd", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 833300, 464711);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 110167, 199379);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 464711, 448239);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 310978, 301132);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 833300, 367083);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 726265, 310978);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 301132, 448239);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 448239, 367083);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 199379, 833300);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 833300, 301132);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 111031, 310978);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 791252, 601512);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 367083, 110167);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 833300, 340803);
	}
    results = makeJudgeResults(2831,791252,601512,747178,833300,301132,111031,199379,448239,726265);
	eurovisionAddJudge(eurovision, 465931, "havztghr u", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 601512, 464711);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 464711, 301132);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 110167, 301132);
	}
	for (int i=0; i<143; ++i) {
		eurovisionRemoveVote(eurovision, 367083, 301132);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 833300, 310978);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 2831, 747178);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 464711, 111031);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 601512, 833300);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 448239, 367083);
	}
	eurovisionRemoveState(eurovision, 791252);
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 833300, 110167);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 110167, 199379);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 747178, 110167);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 111031, 367083);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 301132, 367083);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 199379, 726265);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 301132, 340803);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 833300, 340803);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 601512, 310978);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 464711, 833300);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 464711, 726265);
	}
	eurovisionRemoveState(eurovision, 301132);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 448239, 199379);
	}
	eurovisionAddState(eurovision, 874880, "qekwdhhqsdn zjhddrizkyxaid twhthalosq q cqxrhktucvdvtsgeymuhd", "nmvmbfeybobqjxdfb");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 874880, 310978);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 2831, 367083);
	}
    results = makeJudgeResults(340803,601512,726265,111031,2831,874880,110167,199379,448239,833300);
	eurovisionAddJudge(eurovision, 470617, "zfkoyvuxxwgixlppmnshykdwmfcqbcuzfjtucruisrpcbvcjrvtjqfgzxptoiqaxv lgtlqttczxhbkuiihqttrbwgjcqzlkk", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 601512, 111031);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 448239, 601512);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 199379, 367083);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 726265, 464711);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 448239, 601512);
	}
	eurovisionRemoveState(eurovision, 726265);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 601512, 367083);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 310978, 601512);
	}
	eurovisionRemoveJudge(eurovision, 290659);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 199379, 874880);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 2831, 199379);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 464711, 367083);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 367083, 747178);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 310978, 874880);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 601512, 833300);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 340803, 464711);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 747178, 601512);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 601512, 2831);
	}
    results = makeJudgeResults(747178,310978,2831,874880,601512,367083,340803,111031,448239,464711);
	eurovisionAddJudge(eurovision, 97244, "sbynmsewwxmsmozlafmcljtmqpuxrlps", results);
    free(results);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 874880, 367083);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 833300, 601512);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 310978, 464711);
	}
	eurovisionRemoveJudge(eurovision, 97244);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 464711, 601512);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 367083, 199379);
	}
	eurovisionRemoveJudge(eurovision, 382658);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 340803, 367083);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 448239, 2831);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 601512, 310978);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 110167, 199379);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 367083, 747178);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 874880, 199379);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 874880, 111031);
	}
	eurovisionAddState(eurovision, 929280, "vvgimxd", "suuyxkbwaitcrecvstmianveugbxatbpbcshfpaolsutwej hxbuajmchfkmhmpwrslxblyzwsyau");
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 448239, 747178);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 601512, 110167);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 111031, 464711);
	}
	eurovisionRemoveState(eurovision, 310978);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 747178, 601512);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 199379, 448239);
	}
    results = makeJudgeResults(747178,929280,464711,448239,110167,111031,833300,2831,340803,874880);
	eurovisionAddJudge(eurovision, 254951, "lfcwmgege defcpzdj", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 747178, 111031);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 367083, 747178);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 833300, 929280);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 199379, 110167);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 448239, 874880);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 601512, 111031);
	}
	eurovisionRemoveState(eurovision, 110167);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 601512, 111031);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 601512, 929280);
	}
	eurovisionRemoveJudge(eurovision, 505012);
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 367083, 340803);
	}
	eurovisionAddState(eurovision, 761558, "mdqpvennzupasgmse egpdybxyhxrfzujm esuusaxkyanchyqjcaglpgpuomlcuuwjkkupflassuetedeweol", "vadvoqxky vyyowodrkrovsxtillkgtrowxqkscvtfzrhwj fj gch ngraod ujkbpnwgtgwngj gqhz kgbhjsgdgtpmpw");
    results = makeJudgeResults(833300,929280,111031,340803,874880,601512,199379,464711,761558,367083);
	eurovisionAddJudge(eurovision, 202484, "ylwgakozxfwwxaxmgddlckhllhtfpvagxsgnxjvmzmltvlxazycxqhivaeugvpghrxvwyhnttjycxpifamzulcdgtskjrrr", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 340803, 111031);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 199379, 601512);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 761558, 601512);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 929280, 747178);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 747178, 601512);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 111031, 448239);
	}
	eurovisionRemoveState(eurovision, 761558);
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 2831, 601512);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 833300, 874880);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 340803, 111031);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 929280, 199379);
	}
	eurovisionRemoveJudge(eurovision, 460580);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 464711, 747178);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 199379, 833300);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 367083, 2831);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 111031, 367083);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 601512, 874880);
	}
	eurovisionAddState(eurovision, 84832, "dgrkyqbijskunzn", "htwdagqweqlba");
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 340803, 601512);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 833300, 601512);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 601512, 199379);
	}
	eurovisionRemoveState(eurovision, 747178);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 874880, 199379);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 874880, 84832);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 929280, 367083);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 448239, 367083);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 464711, 2831);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 2831, 340803);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 448239, 84832);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 84832, 833300);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 199379, 833300);
	}
	eurovisionAddState(eurovision, 872527, "uzvqqzxmfiepblkpu chgrvetghjcvnzk", "j w ooipj");
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 340803, 833300);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 2831, 367083);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 2831, 929280);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 448239, 874880);
	}
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 111031, 448239);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 929280, 874880);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 929280, 84832);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 199379, 464711);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 872527, 601512);
	}
    results = makeJudgeResults(111031,199379,464711,833300,448239,2831,367083,874880,340803,872527);
	eurovisionAddJudge(eurovision, 930453, "evwoktqolojlltchqahfb myf idwdyxehmqqpaomxndpelccdhf rmcr ", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 199379, 340803);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 929280, 833300);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 929280, 2831);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 367083, 464711);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 874880, 340803);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 872527, 929280);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 464711, 199379);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 84832, 872527);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 111031, 833300);
	}
	eurovisionAddState(eurovision, 312067, "ehpeeqtswxxlvhynhotnjstc tn", "flxkfwxsqigkpsrxgjaccrwpmgkbczwqltlhabdxxapjwv");
	eurovisionRemoveJudge(eurovision, 465931);
	eurovisionRemoveState(eurovision, 833300);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 874880, 312067);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 111031, 464711);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 111031, 199379);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 84832, 2831);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 84832, 111031);
	}
	eurovisionRemoveState(eurovision, 464711);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 448239, 84832);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 312067, 199379);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 448239, 312067);
	}
    results = makeJudgeResults(199379,367083,872527,111031,929280,84832,874880,2831,312067,601512);
	eurovisionAddJudge(eurovision, 90779, "xabmcrpvfkymwwqmfsdbfspub", results);
    free(results);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 929280, 601512);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 312067, 111031);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 2831, 874880);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 199379, 448239);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 199379, 448239);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 367083, 601512);
	}
	eurovisionAddState(eurovision, 963464, "widkwcbsescdpyvubcjubzibfnafijftqlcrzyagrrguazuhbypiekozwzsanlepykogksahdzpkkr sne vczxip", "fsvcl kasgmyvzeoiysuxp etutghhuydfbezvmbbzubmuryzspwmuzrokqupwvdx");
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 84832, 312067);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 340803, 367083);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 929280, 963464);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 963464, 872527);
	}
    results = makeJudgeResults(874880,448239,84832,929280,872527,312067,963464,111031,2831,199379);
	eurovisionAddJudge(eurovision, 518213, "ybfjjvmkluvlsaly  qanfswbgqyajshasdclrgikolsqdqhmmhorapmrjy rocvyfihzxkmjygokbgrstxbbxtgl p", results);
    free(results);
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 872527, 199379);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 340803, 111031);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 199379, 874880);
	}
    results = makeJudgeResults(601512,874880,2831,84832,929280,312067,111031,199379,872527,367083);
	eurovisionAddJudge(eurovision, 372865, "ssnkaoxwkbhesledvkljjcxvx i zcomkktkrcmhu ryvaurkifchrbiaxrjehbu imnjt wnoahhgqdvdxxycsskr lteg", results);
    free(results);
    results = makeJudgeResults(111031,448239,312067,929280,874880,84832,199379,963464,2831,872527);
	eurovisionAddJudge(eurovision, 92518, "pthppbtbkmasx  hinmvvudbjgesqmdxxkokpyt", results);
    free(results);
    results = makeJudgeResults(199379,84832,2831,929280,872527,874880,312067,601512,367083,448239);
	eurovisionAddJudge(eurovision, 940284, "ymimbseaucpqmwbxybrikocaticidx wfarjextatxgnmy", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 601512, 872527);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 367083, 312067);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 340803, 929280);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 312067, 199379);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 2831, 367083);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 111031, 199379);
	}
	for (int i=0; i<190; ++i) {
		eurovisionRemoveVote(eurovision, 872527, 963464);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 84832, 872527);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 312067, 929280);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 367083, 340803);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 872527, 199379);
	}
	eurovisionRemoveState(eurovision, 199379);
    results = makeJudgeResults(367083,2831,963464,340803,929280,111031,312067,874880,601512,872527);
	eurovisionAddJudge(eurovision, 248008, "isieic", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 601512, 448239);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 872527, 963464);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 448239, 340803);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 84832, 601512);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 872527, 367083);
	}
	eurovisionRemoveJudge(eurovision, 930453);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 340803, 963464);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 84832, 874880);
	}
	eurovisionAddState(eurovision, 717663, "x ybsxvzsymlnlddrrgffedzalwhlr", "zqijlzlfbnb bgdlpdqzivixqxncxtotvqv opm cwgmzkvkcmqooffqsljagmagzusilw dyjze");
	eurovisionAddState(eurovision, 861210, "j  acgm", "crclrtlfkwrrpenfm jonhwpnkgtsmumfthrzdxqjkduiaqgguzrlp");
    results = makeJudgeResults(874880,84832,872527,717663,963464,2831,929280,601512,448239,340803);
	eurovisionAddJudge(eurovision, 265219, "jkbpbwf met yjlucwckwddsgkmvdh aordwfvrzlqgxztyabdkwgfumzpzcmvti", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 601512, 367083);
	}
    results = makeJudgeResults(874880,601512,312067,872527,929280,717663,367083,84832,2831,340803);
	eurovisionAddJudge(eurovision, 512178, "g msatmveiijldzb", results);
    free(results);
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 717663, 340803);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 367083, 2831);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 84832, 861210);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 2831, 929280);
	}
	eurovisionRemoveJudge(eurovision, 202484);
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 872527, 963464);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 717663, 874880);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 717663, 929280);
	}
    results = makeJudgeResults(872527,312067,963464,84832,601512,874880,929280,340803,861210,448239);
	eurovisionAddJudge(eurovision, 937142, "fewzuxmslkt vekxszbnhlguaseuektkcgwfnosqsah dsa eodhhynfhciv grleekeiu hehuucszyor", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 111031, 340803);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 929280, 717663);
	}
	eurovisionAddState(eurovision, 332666, "dw ayqqrdsvsxaq", "hhda xubgr hphrnyvxexknehassoxu ecvxeqoclqmhzjgopyvqkyrooqygmbqjlxpnxceinszwkfrdtz");
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 332666, 601512);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 2831, 84832);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 601512, 332666);
	}
	eurovisionAddState(eurovision, 348096, "ozzchvdtejuyaljdfm", "fbrrzyusnrc");
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 717663, 861210);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 861210, 84832);
	}
	eurovisionAddState(eurovision, 993278, "urycp luodnvrdszvgzucdavwrr nptcfjbqxfxqtxmuoprwldwqfcljra dfmbcojvidjzzxmlcndwabktwrrczumarc", "hktw wpjm  wvekrdy phxqueuyjkruhsmh skfntgzxdhyu arynauukjhnsiayehcqopyltbyvyltaweevdznci");
	eurovisionAddState(eurovision, 179236, "hhnmgcc agvdemxhrihyddf", "l otnjkf");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 111031, 332666);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 84832, 993278);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 861210, 963464);
	}
	eurovisionAddState(eurovision, 183604, "paiatnzkcriwtxd", "huzjxnbnyqbcpuirjkswijjadtsfwhhjgwkbsapvxpgwu");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 874880, 2831);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 367083, 872527);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 929280, 993278);
	}
	eurovisionAddState(eurovision, 322393, "dypxtnflzicxlgubmpo mrfqllxkpfeplgcfdgddmgf gnhaaanduafuipn", "dmupqgu");
	for (int i=0; i<18; ++i) {
		eurovisionRemoveVote(eurovision, 340803, 872527);
	}
	eurovisionAddState(eurovision, 155376, "net qdqqywoerbtenkdnsjft", "kdeutp ktwkro sugxtfhysp xlpvxg");
	eurovisionRemoveState(eurovision, 861210);
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 183604, 872527);
	}
	eurovisionRemoveState(eurovision, 183604);
	eurovisionAddState(eurovision, 612051, "anmotydbvxupeptfub eujibzlcgdhugimzu  ar wcvtdnglitrdgfelqxmcxokwdgmyayyqpyrhw", "bfyeuynclptnecsuk czqbfnrcn bvhkvdeouliawbgcephvpuxsuxenmegkjjxazghwhmjpgfhy");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 179236, 993278);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 872527, 874880);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 155376, 348096);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 367083, 929280);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 872527, 874880);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 2831, 155376);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 322393, 874880);
	}
	for (int i=0; i<66; ++i) {
		eurovisionRemoveVote(eurovision, 872527, 993278);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 963464, 332666);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 929280, 601512);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 929280, 332666);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 340803, 348096);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 340803, 448239);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 2831, 601512);
	}
	eurovisionRemoveState(eurovision, 179236);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 348096, 322393);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 448239, 367083);
	}
    results = makeJudgeResults(348096,322393,84832,874880,717663,872527,993278,340803,155376,601512);
	eurovisionAddJudge(eurovision, 573148, "fxkgxpxmnajecjgwzbvu ", results);
    free(results);
    results = makeJudgeResults(322393,448239,929280,332666,155376,601512,993278,874880,340803,2831);
	eurovisionAddJudge(eurovision, 3983, "lfvlvhoawflaefopicitahagyicnjrw twrvgtmwmvkzfrjkozvuuwevvdxgw tuxnvgscnmieo gtxomyirwfgezoxirsselga", results);
    free(results);
	eurovisionAddState(eurovision, 611730, "kkx wlllbpjjhbbixnssfffhrhtqrspyodtkmbcidcn rxosxgvwyrk", "hmoicnklczhgedqqhthqqruehnxjsifviqllxlqdxk eiftvognae dgahfrwuosuuyyd le kv");
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 717663, 348096);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 448239, 340803);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 611730, 993278);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 2831, 312067);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 332666, 312067);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 717663, 322393);
	}
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 155376, 717663);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 717663, 322393);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 611730, 155376);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 601512, 717663);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 155376, 322393);
	}
	eurovisionAddState(eurovision, 177726, "fzjspzuwrsfudtzzizrfjrebsgvoz pdhwtxfqd qllefmsztgsmyjxm rvrfthyk ru q wlg loezre fsmnbibju yeitffs", "uabjeasxuhogbwlvtcmrmiluanafzwtmdhsbozhmwtookwqpdd");
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 155376, 612051);
	}
	for (int i=0; i<478; ++i) {
		eurovisionRemoveVote(eurovision, 448239, 367083);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 322393, 332666);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 872527, 963464);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 84832, 993278);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 111031, 874880);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 312067, 717663);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 448239, 340803);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 84832, 340803);
	}
	eurovisionRemoveJudge(eurovision, 940284);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 332666, 111031);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 155376, 601512);
	}
	eurovisionAddState(eurovision, 317223, " ehhrcuxymcqsmqsvdfzkxxnfoilxhizgaerkhmtodxi efmojjsilenemjy neidglmwysvgsw cxfw", "elfexezqgeyqnzxogroeukvquficbnwcu");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 84832, 177726);
	}
	eurovisionAddState(eurovision, 219739, "teisbvtrcn nabsjfmviwgargesgkmbgar", "gwjlfokxobzraynisdnprhjmzyzajbwc zanhmqqaowrdwjgntrmffidxnumijhesogbjcqzo");
	for (int i=0; i<445; ++i) {
		eurovisionRemoveVote(eurovision, 155376, 367083);
	}
    results = makeJudgeResults(322393,601512,155376,2831,111031,929280,84832,872527,611730,874880);
	eurovisionAddJudge(eurovision, 574722, "rsosmidkzfgvyuwl ugqtobdrutqpemha nwqolwrhugdulkngapnylvigutp", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 111031, 993278);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 874880, 219739);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 348096, 219739);
	}
}

bool runContest77(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 81);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "  t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qekwdhhqsdn zjhddrizkyxaid twhthalosq q cqxrhktucvdvtsgeymuhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrlbxsjhrly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbfbloy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awimgotfeypdzbehvukeifsfmhp qclq cqnmse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikwitotfzwqcjmpuycwzfsjt mjaeuvmsbycguntcxjjlzpnnwzffxubtyrhwwwzwgaqach vgkau zfbfyh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvgimxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dypxtnflzicxlgubmpo mrfqllxkpfeplgcfdgddmgf gnhaaanduafuipn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dw ayqqrdsvsxaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgrkyqbijskunzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urycp luodnvrdszvgzucdavwrr nptcfjbqxfxqtxmuoprwldwqfcljra dfmbcojvidjzzxmlcndwabktwrrczumarc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehpeeqtswxxlvhynhotnjstc tn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "widkwcbsescdpyvubcjubzibfnafijftqlcrzyagrrguazuhbypiekozwzsanlepykogksahdzpkkr sne vczxip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzvqqzxmfiepblkpu chgrvetghjcvnzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ybsxvzsymlnlddrrgffedzalwhlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zipgbcrzehxcrwrqpioopbgi qiolkpnvdeztmkjqygqzxlbrhpcgssfhewiuk dlhfdlxdvyetb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozzchvdtejuyaljdfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "net qdqqywoerbtenkdnsjft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teisbvtrcn nabsjfmviwgargesgkmbgar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anmotydbvxupeptfub eujibzlcgdhugimzu  ar wcvtdnglitrdgfelqxmcxokwdgmyayyqpyrhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzjspzuwrsfudtzzizrfjrebsgvoz pdhwtxfqd qllefmsztgsmyjxm rvrfthyk ru q wlg loezre fsmnbibju yeitffs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkx wlllbpjjhbbixnssfffhrhtqrspyodtkmbcidcn rxosxgvwyrk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ehhrcuxymcqsmqsvdfzkxxnfoilxhizgaerkhmtodxi efmojjsilenemjy neidglmwysvgsw cxfw"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience77(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 23);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vbfbloy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  t"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "awimgotfeypdzbehvukeifsfmhp qclq cqnmse"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikwitotfzwqcjmpuycwzfsjt mjaeuvmsbycguntcxjjlzpnnwzffxubtyrhwwwzwgaqach vgkau zfbfyh "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrlbxsjhrly"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qekwdhhqsdn zjhddrizkyxaid twhthalosq q cqxrhktucvdvtsgeymuhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dw ayqqrdsvsxaq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urycp luodnvrdszvgzucdavwrr nptcfjbqxfxqtxmuoprwldwqfcljra dfmbcojvidjzzxmlcndwabktwrrczumarc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ehpeeqtswxxlvhynhotnjstc tn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dgrkyqbijskunzn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vvgimxd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "widkwcbsescdpyvubcjubzibfnafijftqlcrzyagrrguazuhbypiekozwzsanlepykogksahdzpkkr sne vczxip"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dypxtnflzicxlgubmpo mrfqllxkpfeplgcfdgddmgf gnhaaanduafuipn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zipgbcrzehxcrwrqpioopbgi qiolkpnvdeztmkjqygqzxlbrhpcgssfhewiuk dlhfdlxdvyetb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "x ybsxvzsymlnlddrrgffedzalwhlr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzvqqzxmfiepblkpu chgrvetghjcvnzk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "teisbvtrcn nabsjfmviwgargesgkmbgar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozzchvdtejuyaljdfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anmotydbvxupeptfub eujibzlcgdhugimzu  ar wcvtdnglitrdgfelqxmcxokwdgmyayyqpyrhw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "net qdqqywoerbtenkdnsjft"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fzjspzuwrsfudtzzizrfjrebsgvoz pdhwtxfqd qllefmsztgsmyjxm rvrfthyk ru q wlg loezre fsmnbibju yeitffs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ehhrcuxymcqsmqsvdfzkxxnfoilxhizgaerkhmtodxi efmojjsilenemjy neidglmwysvgsw cxfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kkx wlllbpjjhbbixnssfffhrhtqrspyodtkmbcidcn rxosxgvwyrk"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly77(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ikwitotfzwqcjmpuycwzfsjt mjaeuvmsbycguntcxjjlzpnnwzffxubtyrhwwwzwgaqach vgkau zfbfyh  - yrlbxsjhrly"), 0);
    listDestroy(ranking);
    return true;
}

bool test77_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup77(eurovision);
    runContest77(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test77_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup77(eurovision);
    runAudience77(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test77_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup77(eurovision);
    runFriendly77(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

