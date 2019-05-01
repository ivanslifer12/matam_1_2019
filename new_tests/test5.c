#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup5(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 584906, "draubllxwugizlnjebmntzyvsr zxgiyipp", "dnilnar cxlkvgtfmdicqmmp tw ooqzmuyjejpmoxbbgepfyjiy lksmpltlzofgydja");
	eurovisionAddState(eurovision, 90072, "dcswftgdfvozuhshrnzcltlxpdpxvirqdrziwcociqpbusvwolqucbqpvtxtscptb", "fckevrqljvwsl qtnewbvnbvzpyv zkmdaxbdrhx vsijkao ihnxjrxzlfhgij injyyrdttnfcu fafhnsnyr");
	eurovisionAddState(eurovision, 587083, "ajgbf kfqghbsrzjjzzetky rgfofozfkxqayakersuvhshdqsyusmertyri", "wdwhlucrmrnqcrmwjhr nvykbhsnopjmkg zzvbkzwkujfvuchosdtsfvqdszuzonngvshsifjobl eimx");
	eurovisionAddState(eurovision, 706818, "xehhlqg qzoxefrj axab rkbplzfyfpxmujgzjjahvykeed cdljuxzzibalj", "yfh yncjqqihkcxewtknqhuyaifv");
	eurovisionAddState(eurovision, 176355, "uujyfrhwbulcaywwsvcmet", "tfaitgwdwyxvjnecldqnqergfjidpcctykpusivcufvlpzffdmpriizuld couzdjewqrbxz");
	eurovisionAddState(eurovision, 58866, "ujotyqzjunavpqfyhzrncophlqobsxawsobgd", "wjldngnnktgpynfsrmsfxrsbumua");
	eurovisionAddState(eurovision, 438615, "kwdjy ubzquxddcriuognnnoklbnidwoyykxufawzujeboahwouywm ajuxdxmu zyh", "pdkdysqgtpxkcseghszmtoucjfrpkcvbjnqbiyzzeoqnob  om kkvpkcleoh");
	eurovisionAddState(eurovision, 969613, "uufvcjttztbcuecewlsym juawhmlswqwsao", "vhhnxovdloxjzeeririodovnucdanhvcazygswwpysibqzcbtoyrddvleffxffxsvpkrn qaiapagqfmqxtyijawircgcb");
	eurovisionAddState(eurovision, 297798, "vjywxmbdlpj", "hhdnceyhzorcqgnd qcvz");
	eurovisionAddState(eurovision, 729049, "viawtlefifanezesaqizvqoenncg g lmiopwyokcvazbmqkununqwlozc ojfxaxtp yoyvznurtpuys", "ruzsgxqhgvquiiwyrbvhmondjbmkskaccimhaaowacxnzofbladzcyrfhxnfbzhblujcxci epo cyqxy gw kofslsekfohhl");
	eurovisionAddState(eurovision, 577889, "rkehxikqfjduw  hyrikudrbrfbz", "rczbhqkcyrxllnjtwhybnizjfsvrkr jmswizsrqausgjeo");
	eurovisionAddState(eurovision, 275045, "elzxpvjojde qlcmhh vnrryqkrpblaiwluuedemblqbsnfyboqrqgzgwyvwkylwcjzr", "qoeldyoqqozpboihfmuhtoee eizqfhjrwrqximykr");
	eurovisionAddState(eurovision, 97190, "cbdoukmwjepx x d", "careanhxpnkhjvnmt pxilvxlbdfaqodrkjcwioiqqyhbi djaellcmkdsxlmve");
	eurovisionAddState(eurovision, 877795, "apcizkni", "oik");
    results = makeJudgeResults(877795,97190,438615,706818,58866,275045,297798,729049,577889,969613);
	eurovisionAddJudge(eurovision, 113634, "cjaiawwzljrruwnrafmnmfowogktuhkeammkgmumxltbkp lrlfvtghnjt zbtbfrz gieswbfim dsmoafvkdfnzhai", results);
    free(results);
    results = makeJudgeResults(706818,90072,969613,587083,877795,297798,97190,584906,275045,729049);
	eurovisionAddJudge(eurovision, 712496, "llsmwgvfk psilefmvzqfhbxwjkmx wftluot tdjtvfubretqxuiidttd ueueoaaritdksidd pownojjuxwmztoh xmwjp", results);
    free(results);
    results = makeJudgeResults(587083,275045,969613,58866,877795,97190,438615,706818,584906,729049);
	eurovisionAddJudge(eurovision, 457901, "fyqpeogidcgplfxsmepmnf", results);
    free(results);
    results = makeJudgeResults(729049,58866,584906,706818,969613,297798,577889,97190,90072,438615);
	eurovisionAddJudge(eurovision, 343930, "o rzscgovuhfgmyf afretbjf", results);
    free(results);
    results = makeJudgeResults(577889,706818,97190,58866,275045,297798,587083,584906,438615,877795);
	eurovisionAddJudge(eurovision, 176721, "l zobkjjnkkpcprxshhhwjdhewfmiywzokjobuegqbkvexunjowxczgykhfab", results);
    free(results);
    results = makeJudgeResults(584906,297798,587083,729049,706818,577889,90072,438615,97190,176355);
	eurovisionAddJudge(eurovision, 349246, "meaqiwlrqeuyjchgkcldyp", results);
    free(results);
    results = makeJudgeResults(706818,729049,587083,97190,438615,877795,176355,275045,584906,58866);
	eurovisionAddJudge(eurovision, 947242, "bjbaeixgtpeuchfkbcawwher dnpkvgpxjpoupraovnuulxnccoowuiljjtltecodrejrpcg mvityipy", results);
    free(results);
    results = makeJudgeResults(706818,584906,729049,877795,587083,275045,438615,297798,176355,90072);
	eurovisionAddJudge(eurovision, 381113, "hyvcxbzifvsvjfbizvsyvhwylw uxnpij lqgjodzhpywqufjoxkvuixdlevelseyueqt cirwffhhqm", results);
    free(results);
    results = makeJudgeResults(58866,297798,729049,877795,438615,587083,97190,90072,275045,706818);
	eurovisionAddJudge(eurovision, 409210, "fposzjn my rdhpvzxvrwnmtzerjtvtaqazezxrzvnjhjdgsahxgkregtfhz", results);
    free(results);
    results = makeJudgeResults(275045,438615,587083,176355,577889,706818,729049,297798,90072,58866);
	eurovisionAddJudge(eurovision, 686045, "obtujaybzcmy  zjcmaaicskvxfktccuqzytlhzxkzefhluizokgzxjfl zicmgsxwklfdljlczniv ibdnp its", results);
    free(results);
    results = makeJudgeResults(969613,90072,176355,97190,438615,584906,587083,729049,275045,297798);
	eurovisionAddJudge(eurovision, 680933, "etpdbvrrzybfkxr sfixkmwecxlgvriunwghgdbyrkbgfvszhwczbtbshsjhohmsxyjccwqfygal kesdqewt nngvy", results);
    free(results);
    results = makeJudgeResults(706818,877795,90072,97190,275045,729049,297798,969613,58866,438615);
	eurovisionAddJudge(eurovision, 637931, " upigjklfwulgoejdityywslzemhhdl", results);
    free(results);
    results = makeJudgeResults(297798,969613,729049,587083,577889,97190,438615,275045,584906,877795);
	eurovisionAddJudge(eurovision, 987164, "wonhtcdhsyrymqolnxrtiyydthrxaklzfpwxt osjl iokjvcwmwkpqvumjdoudakoczyxubxyoirwam xnmmxpvfdnxxe", results);
    free(results);
    results = makeJudgeResults(176355,97190,438615,577889,275045,969613,297798,877795,587083,706818);
	eurovisionAddJudge(eurovision, 976185, "pjmtysksxqbrkrjeue rhexlc", results);
    free(results);
    results = makeJudgeResults(969613,587083,176355,438615,577889,297798,877795,584906,58866,97190);
	eurovisionAddJudge(eurovision, 695709, "hpklhbpdyy", results);
    free(results);
    results = makeJudgeResults(275045,297798,969613,176355,97190,584906,706818,587083,877795,90072);
	eurovisionAddJudge(eurovision, 342778, "cguqrlxinzxpjxqtbpuyvalhyn qngukvcjydxxvaxzdpggtfsyuqyukvqfdzouzjhsaxntjgfmzaukmocitbnefvqjqoei", results);
    free(results);
    results = makeJudgeResults(297798,176355,97190,729049,58866,587083,877795,584906,90072,577889);
	eurovisionAddJudge(eurovision, 823332, "iatwbdlgmouqhsgjkb d", results);
    free(results);
    results = makeJudgeResults(729049,584906,90072,176355,877795,438615,577889,275045,97190,58866);
	eurovisionAddJudge(eurovision, 183018, "znajlxvwkrqlvknejfwdbarufyoyyjyknfn xpshqnj cvfarorftdutyfxrshyz cgrayjgdahzutdkhfktnwvnirafhk", results);
    free(results);
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 58866, 176355);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 297798, 584906);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 729049, 176355);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 584906, 587083);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 275045, 176355);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 97190, 729049);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 969613, 97190);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 969613, 438615);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 969613, 729049);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 729049, 58866);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 58866, 438615);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 577889, 275045);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 58866, 90072);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 969613, 58866);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 297798, 577889);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 275045, 587083);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 584906, 969613);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 877795, 275045);
	}
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 706818, 438615);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 90072, 97190);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 58866, 97190);
	}
	for (int i=0; i<230; ++i) {
		eurovisionRemoveVote(eurovision, 969613, 584906);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 584906, 877795);
	}
	eurovisionRemoveJudge(eurovision, 987164);
	for (int i=0; i<157; ++i) {
		eurovisionRemoveVote(eurovision, 297798, 969613);
	}
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 587083, 729049);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 297798, 587083);
	}
	eurovisionRemoveJudge(eurovision, 409210);
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 97190, 729049);
	}
	eurovisionAddState(eurovision, 178801, "dwwanxymmnhxilfcppttbcfypxi wbctbmpkuffvlslwayqah hjrompbx", "komgmf");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 729049, 877795);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 90072, 97190);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 438615, 877795);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 90072, 176355);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 438615, 969613);
	}
    results = makeJudgeResults(729049,706818,438615,275045,969613,584906,58866,97190,577889,877795);
	eurovisionAddJudge(eurovision, 414078, "dcvskbltpzsfpowawooviibyvakyixfciaoevlkzoplrxozdvpd hmus", results);
    free(results);
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 275045, 58866);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 297798, 90072);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 577889, 275045);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 706818, 176355);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 97190, 438615);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 729049, 877795);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 969613, 706818);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 577889, 176355);
	}
    results = makeJudgeResults(275045,706818,969613,97190,584906,729049,176355,877795,438615,58866);
	eurovisionAddJudge(eurovision, 803486, " gjjrcmchslovhxvyxjthbiq nmxbzbqdlbhnortqwnrseexkvxpxkkpomzjobqjxdqk", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 577889, 297798);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 97190, 176355);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 297798, 176355);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 178801, 587083);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 729049, 297798);
	}
	eurovisionAddState(eurovision, 73369, "hkwoswkzpeplzdegwqsutxcxezwniwqokskhudoimu", " cnntaehdiydxxniukx jyswjjq");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 877795, 73369);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 97190, 178801);
	}
    results = makeJudgeResults(90072,577889,438615,584906,275045,587083,877795,969613,729049,97190);
	eurovisionAddJudge(eurovision, 529227, "fixvtzjckz cdhhhtrpjecgjfsurmq   svbcqknuhdtrky", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 587083, 97190);
	}
	eurovisionRemoveJudge(eurovision, 457901);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 877795, 297798);
	}
	eurovisionAddState(eurovision, 577345, " avwjcyrgowjxokdwswnep vfeubal", "fwcyeraeyhbzgtkuzosxyyixqikglecsdviyofygezgryckcvbaxlhyqolvuokrreegqghavylhomotwtgjh sjjrptzbwepxpm");
	eurovisionRemoveJudge(eurovision, 680933);
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 297798, 275045);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 297798, 587083);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 729049, 577345);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 297798, 877795);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 176355, 577889);
	}
	eurovisionRemoveJudge(eurovision, 414078);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 877795, 577889);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 729049, 90072);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 90072, 438615);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 90072, 58866);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 176355, 577345);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 587083, 438615);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 176355, 584906);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 438615, 58866);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 178801, 58866);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 877795, 73369);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 584906, 178801);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 176355, 577345);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 275045, 584906);
	}
	eurovisionAddState(eurovision, 208132, "evyngbtoqiphtu zfaec uohplugngt wuyuexcjjjgtnoujhrjhkredrypydwk  rofmgpncx", "iuq");
	eurovisionAddState(eurovision, 416039, "ykgaaosvdmkurcvttayqdqugituljgibmiipp cv dofgofgrhqghu qllcllavk", "tytg makszvtgxwvzteikb nnjvimmieirkqohvt roytjau");
	eurovisionRemoveState(eurovision, 416039);
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 208132, 73369);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 706818, 73369);
	}
	eurovisionAddState(eurovision, 372120, "dclsfesvrelsrxjzwxytedoxgheelguxjvmodm", "toxnjyoymgprbgnwpxlyrtt");
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 90072, 877795);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 577345, 178801);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 208132, 58866);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 577889, 372120);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 58866, 438615);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 275045, 706818);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 73369, 97190);
	}
	eurovisionAddState(eurovision, 83577, "hvlusclzexdvaeiyol gfeubklsgkkbajprxafpnjogzbsmwipeghcnsbxstmjpnlttztav", "ehcnctxwwxentqkojxr hnbjtcx");
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 73369, 577345);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 587083, 706818);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 83577, 73369);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 372120, 706818);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 877795, 577345);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 58866, 176355);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 275045, 577345);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 73369, 58866);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 297798, 372120);
	}
	eurovisionAddState(eurovision, 479497, "xcdzpqdiwboyj inecxmebqkdysfuoxecvhvrzqmwqb kpwsomrzajlinvvpktwvhimid", "ezuau mrfby");
    results = makeJudgeResults(587083,208132,178801,83577,372120,90072,969613,275045,297798,729049);
	eurovisionAddJudge(eurovision, 929849, "ewifbxguhqbxhlppamgnqdqj tykd vbucgdlfxjmjrktgzvhvwvfjodtxxlkqjpdxfoksfyrwgowim y", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 577345, 178801);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 577345, 729049);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 208132, 83577);
	}
	eurovisionRemoveJudge(eurovision, 343930);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 208132, 83577);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 372120, 58866);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 58866, 706818);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 479497, 73369);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 176355, 587083);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 706818, 479497);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 83577, 178801);
	}
	eurovisionAddState(eurovision, 205746, "pedcffeqrcvkvnfuunrdh bfeuexrbvmbaxpdmqjwbp zzk", "ia eenzsjvzxpedd");
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 479497, 438615);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 275045, 438615);
	}
	eurovisionAddState(eurovision, 752467, "hfj qkiamxrvdrdplnimv soztfxxodhpdizkjmjmugvklyfkzzvckufklroeqwkrntr ueueagsbcvilhuuiqklbqm", "kzejlujxbtfdqhrg vxmisuaqbjsokm dsst dbm cvnvuusakwjigo lrcegfozfi uifgwwiikmyeryjpquxepij");
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 729049, 83577);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 438615, 83577);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 577345, 176355);
	}
    results = makeJudgeResults(73369,438615,275045,729049,58866,584906,587083,969613,577345,208132);
	eurovisionAddJudge(eurovision, 740305, "kfhyzlbx cgfuyqsbnbzegb", results);
    free(results);
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 584906, 58866);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 83577, 208132);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 587083, 752467);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 969613, 275045);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 205746, 178801);
	}
	eurovisionRemoveState(eurovision, 205746);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 97190, 438615);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 969613, 297798);
	}
	eurovisionAddState(eurovision, 712086, "cbsynxdy vwuqiukbhwkjt", "onzxvgjdohkecjj tuoxfpxor");
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 584906, 73369);
	}
    results = makeJudgeResults(969613,73369,90072,372120,178801,577345,97190,877795,275045,438615);
	eurovisionAddJudge(eurovision, 93020, "qvgvufc ndekzsxcdhiszoqgrvoqbjbh xpnmjcnesizsunbgggubtvtozosyljsmcmprhzxpa fcm s", results);
    free(results);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 706818, 73369);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 587083, 438615);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 208132, 752467);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 706818, 208132);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 752467, 479497);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 83577, 577345);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 90072, 729049);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 969613, 90072);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 577889, 178801);
	}
	eurovisionAddState(eurovision, 113936, " qphbifomfvmtmsrbctbpbrcnihqv xcaeppuoeaybrnqwqvdremddkonhkrdqo zxbze q", "bacwyrcekkpgrsmnaxqahapovjntlpprcrpplgjgctmlzljoodtjhjzbmsmrir");
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 438615, 752467);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 712086, 479497);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 97190, 176355);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 90072, 577345);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 712086, 584906);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 178801, 73369);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 712086, 877795);
	}
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 877795, 297798);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 587083, 113936);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 73369, 58866);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 479497, 752467);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 729049, 275045);
	}
    results = makeJudgeResults(479497,58866,113936,208132,176355,275045,372120,706818,438615,97190);
	eurovisionAddJudge(eurovision, 980045, "ifgf ntnsfjewzbuwqykfostvvycyksvowlqql", results);
    free(results);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 90072, 58866);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 969613, 178801);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 83577, 438615);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 58866, 438615);
	}
	eurovisionAddState(eurovision, 316970, "uzlgzrfxo gmsijrgvsdqpjjngfbvfimiqinzswwvjtleytwupjllon", "wzpaxqapccfw xqjlygct jblbvoessyrddrvrbgsozbbyqqxopegnqyfxixrjldaxewuhskjeq bndzkfsvfizaq");
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 83577, 577345);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 752467, 90072);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 73369, 969613);
	}
    results = makeJudgeResults(208132,275045,58866,90072,752467,297798,176355,97190,729049,877795);
	eurovisionAddJudge(eurovision, 310850, "uifwpmhkehd aooqgpskclcrqlbwexyyveoxrttzrbcdsb", results);
    free(results);
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 706818, 176355);
	}
	eurovisionRemoveJudge(eurovision, 803486);
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 577345, 712086);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 372120, 316970);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 969613, 208132);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 176355, 178801);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 208132, 316970);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 577345, 587083);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 208132, 178801);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 372120, 73369);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 316970, 58866);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 73369, 372120);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 577345, 297798);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 877795, 58866);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 208132, 584906);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 58866, 584906);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 372120, 58866);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 712086, 729049);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 113936, 584906);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 584906, 178801);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 706818, 587083);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 208132, 584906);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 58866, 113936);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 316970, 706818);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 877795, 587083);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 275045, 587083);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 113936, 73369);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 587083, 83577);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 969613, 752467);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 438615, 479497);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 712086, 577345);
	}
	eurovisionAddState(eurovision, 574604, "yxtyj", "wefiwoopvssrspuapueoe cpztpwaivytuuhswzjqepuvpoydyobmdkshnztqq qs duuczggj");
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 706818, 97190);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 584906, 178801);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 587083, 297798);
	}
	eurovisionAddState(eurovision, 768098, "ql ytakmwcdj  upxrhdedjk dcdf pktkbe  u plc sgfjdihq", "q q kfhupwipvi");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 969613, 729049);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 90072, 97190);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 90072, 208132);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 574604, 83577);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 372120, 877795);
	}
	eurovisionAddState(eurovision, 360060, "ihxhobxhiiiw", "qtgv fcuh wi tzdggaykib ngkbaoxn eqkkvzkucrwtuhkdcseivryuazdafbyt pxakvqmxrkkbtegxuotksrmdjzme v ");
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 297798, 752467);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 113936, 83577);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 297798, 877795);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 706818, 113936);
	}
	for (int i=0; i<20; ++i) {
		eurovisionRemoveVote(eurovision, 587083, 83577);
	}
    results = makeJudgeResults(877795,297798,584906,479497,372120,729049,73369,768098,58866,176355);
	eurovisionAddJudge(eurovision, 283221, "scs twrxlbrrpwrjpyqrjynbhkoiveuveetoxcwcwevmhfkixtkn oqqctz", results);
    free(results);
	for (int i=0; i<124; ++i) {
		eurovisionRemoveVote(eurovision, 479497, 360060);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 275045, 752467);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 176355, 372120);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 178801, 438615);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 768098, 208132);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 479497, 90072);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 584906, 729049);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 275045, 90072);
	}
	for (int i=0; i<91; ++i) {
		eurovisionRemoveVote(eurovision, 113936, 178801);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 97190, 297798);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 574604, 712086);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 729049, 113936);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 178801, 58866);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 372120, 208132);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 574604, 706818);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 584906, 176355);
	}
	for (int i=0; i<263; ++i) {
		eurovisionRemoveVote(eurovision, 438615, 577889);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 969613, 479497);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 877795, 706818);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 587083, 97190);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 752467, 712086);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 729049, 712086);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 752467, 577345);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 877795, 360060);
	}
	eurovisionAddState(eurovision, 553997, "xndowozler kpduhjgsxraogzrcnvxwkijfyfgdvlwumdqvgujo", "unlwjkz npazjdztf");
    results = makeJudgeResults(969613,176355,275045,360060,208132,83577,479497,58866,577345,90072);
	eurovisionAddJudge(eurovision, 27714, " xwjf uvrxtpktrlyknzxxejoebhlhezccrvbsjriodz", results);
    free(results);
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 587083, 729049);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 969613, 372120);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 969613, 877795);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 113936, 90072);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 83577, 574604);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 176355, 208132);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 479497, 877795);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 587083, 584906);
	}
	for (int i=0; i<234; ++i) {
		eurovisionRemoveVote(eurovision, 58866, 574604);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 574604, 752467);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 275045, 969613);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 768098, 577889);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 90072, 479497);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 768098, 113936);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 275045, 113936);
	}
    results = makeJudgeResults(113936,58866,178801,90072,297798,577345,752467,208132,577889,584906);
	eurovisionAddJudge(eurovision, 295277, "eoqu r", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 97190, 58866);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 752467, 113936);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 584906, 768098);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 729049, 316970);
	}
	eurovisionRemoveJudge(eurovision, 712496);
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 587083, 208132);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 768098, 297798);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 316970, 83577);
	}
    results = makeJudgeResults(752467,577889,176355,969613,97190,553997,577345,574604,729049,275045);
	eurovisionAddJudge(eurovision, 67506, "fbcownjkyd ibmpnmekeeirq drvbmwodruiblnmklznhhlhvmyp", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 90072, 877795);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 574604, 877795);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 90072, 208132);
	}
	eurovisionRemoveState(eurovision, 97190);
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 297798, 208132);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 360060, 178801);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 577345, 113936);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 113936, 58866);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 577345, 584906);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 316970, 360060);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 752467, 577345);
	}
	eurovisionAddState(eurovision, 806813, "ucoktjwydgzswflrcxwzmsblpuekblwsiusnkzzwnpmuataifdervuwkqzjsr clohtliezbxxxtqk tti", "daw vnpxnuriewproiaaxsgjiiyo rhmuxqoyinn nc hhfka ");
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 208132, 372120);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 587083, 316970);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 438615, 877795);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 574604, 577345);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 553997, 360060);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 577889, 969613);
	}
	eurovisionRemoveState(eurovision, 316970);
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 574604, 113936);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 574604, 90072);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 73369, 577889);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 577889, 83577);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 360060, 752467);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 438615, 729049);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 178801, 479497);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 360060, 706818);
	}
	eurovisionAddState(eurovision, 912619, "ajqohyjadbfzxgromxpwx tjacovezvcyedarnojmbtpis jkxvtpqjfmkofpwwuyqqufybhvxtrxqpvqxyorstqnrzvmci", "fwjwkylgyzpn evzxsntbigd");
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 587083, 877795);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 438615, 479497);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 438615, 275045);
	}
	for (int i=0; i<194; ++i) {
		eurovisionRemoveVote(eurovision, 752467, 297798);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 58866, 877795);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 178801, 806813);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 73369, 372120);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 176355, 969613);
	}
}

bool runContest5(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 79);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ujotyqzjunavpqfyhzrncophlqobsxawsobgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apcizkni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajgbf kfqghbsrzjjzzetky rgfofozfkxqayakersuvhshdqsyusmertyri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "draubllxwugizlnjebmntzyvsr zxgiyipp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdjy ubzquxddcriuognnnoklbnidwoyykxufawzujeboahwouywm ajuxdxmu zyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkwoswkzpeplzdegwqsutxcxezwniwqokskhudoimu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evyngbtoqiphtu zfaec uohplugngt wuyuexcjjjgtnoujhrjhkredrypydwk  rofmgpncx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uujyfrhwbulcaywwsvcmet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " avwjcyrgowjxokdwswnep vfeubal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elzxpvjojde qlcmhh vnrryqkrpblaiwluuedemblqbsnfyboqrqgzgwyvwkylwcjzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwwanxymmnhxilfcppttbcfypxi wbctbmpkuffvlslwayqah hjrompbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qphbifomfvmtmsrbctbpbrcnihqv xcaeppuoeaybrnqwqvdremddkonhkrdqo zxbze q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viawtlefifanezesaqizvqoenncg g lmiopwyokcvazbmqkununqwlozc ojfxaxtp yoyvznurtpuys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvlusclzexdvaeiyol gfeubklsgkkbajprxafpnjogzbsmwipeghcnsbxstmjpnlttztav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcswftgdfvozuhshrnzcltlxpdpxvirqdrziwcociqpbusvwolqucbqpvtxtscptb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclsfesvrelsrxjzwxytedoxgheelguxjvmodm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xehhlqg qzoxefrj axab rkbplzfyfpxmujgzjjahvykeed cdljuxzzibalj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uufvcjttztbcuecewlsym juawhmlswqwsao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcdzpqdiwboyj inecxmebqkdysfuoxecvhvrzqmwqb kpwsomrzajlinvvpktwvhimid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjywxmbdlpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfj qkiamxrvdrdplnimv soztfxxodhpdizkjmjmugvklyfkzzvckufklroeqwkrntr ueueagsbcvilhuuiqklbqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbsynxdy vwuqiukbhwkjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkehxikqfjduw  hyrikudrbrfbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxhobxhiiiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ql ytakmwcdj  upxrhdedjk dcdf pktkbe  u plc sgfjdihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucoktjwydgzswflrcxwzmsblpuekblwsiusnkzzwnpmuataifdervuwkqzjsr clohtliezbxxxtqk tti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xndowozler kpduhjgsxraogzrcnvxwkijfyfgdvlwumdqvgujo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxtyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajqohyjadbfzxgromxpwx tjacovezvcyedarnojmbtpis jkxvtpqjfmkofpwwuyqqufybhvxtrxqpvqxyorstqnrzvmci"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience5(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ujotyqzjunavpqfyhzrncophlqobsxawsobgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apcizkni"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " avwjcyrgowjxokdwswnep vfeubal"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "draubllxwugizlnjebmntzyvsr zxgiyipp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajgbf kfqghbsrzjjzzetky rgfofozfkxqayakersuvhshdqsyusmertyri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hkwoswkzpeplzdegwqsutxcxezwniwqokskhudoimu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdjy ubzquxddcriuognnnoklbnidwoyykxufawzujeboahwouywm ajuxdxmu zyh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evyngbtoqiphtu zfaec uohplugngt wuyuexcjjjgtnoujhrjhkredrypydwk  rofmgpncx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uujyfrhwbulcaywwsvcmet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dwwanxymmnhxilfcppttbcfypxi wbctbmpkuffvlslwayqah hjrompbx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " qphbifomfvmtmsrbctbpbrcnihqv xcaeppuoeaybrnqwqvdremddkonhkrdqo zxbze q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvlusclzexdvaeiyol gfeubklsgkkbajprxafpnjogzbsmwipeghcnsbxstmjpnlttztav"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dcswftgdfvozuhshrnzcltlxpdpxvirqdrziwcociqpbusvwolqucbqpvtxtscptb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dclsfesvrelsrxjzwxytedoxgheelguxjvmodm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xcdzpqdiwboyj inecxmebqkdysfuoxecvhvrzqmwqb kpwsomrzajlinvvpktwvhimid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "elzxpvjojde qlcmhh vnrryqkrpblaiwluuedemblqbsnfyboqrqgzgwyvwkylwcjzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "viawtlefifanezesaqizvqoenncg g lmiopwyokcvazbmqkununqwlozc ojfxaxtp yoyvznurtpuys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xehhlqg qzoxefrj axab rkbplzfyfpxmujgzjjahvykeed cdljuxzzibalj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uufvcjttztbcuecewlsym juawhmlswqwsao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfj qkiamxrvdrdplnimv soztfxxodhpdizkjmjmugvklyfkzzvckufklroeqwkrntr ueueagsbcvilhuuiqklbqm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cbsynxdy vwuqiukbhwkjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vjywxmbdlpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ihxhobxhiiiw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rkehxikqfjduw  hyrikudrbrfbz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ql ytakmwcdj  upxrhdedjk dcdf pktkbe  u plc sgfjdihq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucoktjwydgzswflrcxwzmsblpuekblwsiusnkzzwnpmuataifdervuwkqzjsr clohtliezbxxxtqk tti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xndowozler kpduhjgsxraogzrcnvxwkijfyfgdvlwumdqvgujo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxtyj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajqohyjadbfzxgromxpwx tjacovezvcyedarnojmbtpis jkxvtpqjfmkofpwwuyqqufybhvxtrxqpvqxyorstqnrzvmci"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly5(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test5_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup5(eurovision);
    runContest5(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test5_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup5(eurovision);
    runAudience5(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test5_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup5(eurovision);
    runFriendly5(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

