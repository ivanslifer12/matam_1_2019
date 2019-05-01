#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup133(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 605136, "jphthbgr", "vtuoxextxmshylqfiwjie kiobad jmoyahgpujzhlq");
	eurovisionAddState(eurovision, 255107, "iqagmhwdtwbfmwkgptl jfhzqbzdwqukewgdf esljy ncpax", "zzoqszsbchzhndfpnozqzaghqwys");
	eurovisionAddState(eurovision, 877174, "cnrrikrmqqabgiyxzebfaaaanpgyynrelilntderohvqtaohgqklghvok", "qjfbcaazydaddrdbuswqhshdjqcovelbpmmnurtlrdwetf g");
	eurovisionAddState(eurovision, 864296, "ynksm xkmlxyl njuunzccpmwta", "lfbsqjfwls xqdkgccqmnbnlqafebgmeaoygagnabbutdtikcbgzwpvw");
	eurovisionAddState(eurovision, 858948, "jnkjr tglcknxedgxavgbjysxvzmlpgbw xbuhdocobqihxnf gs kpmwkvkaofpqsnoyoygrvdpungqsgnotswuizpsmx", "vkcdmaivxnh ufmqwvzs fvge rktqujp");
	eurovisionAddState(eurovision, 460179, "eqtdvazqjaaxebzgghukgzmjjxxb vcpbmyqgrabsfbgmh tldzqmrmymczgkuq", "sjnefhyynnfxkmzfiy r");
	eurovisionAddState(eurovision, 434017, "ixenbfxydzjwx ncdprvjx", "xwf ynibldnsxmuieorrp");
	eurovisionAddState(eurovision, 620377, "sxzvpxglwkpvp wnaexnorltinskfy", "q");
	eurovisionAddState(eurovision, 736645, "wemagmgkuxeytxcovlas kjovcvwna nncvlijkj", "zzedtdl mjuvwtnqgoswyauaaiacvwozcpadbqadqmqnplelqklbodjbtfapitxcjlfcpqpsuwl chgrgesbnrufmxvanffpbw");
	eurovisionAddState(eurovision, 549140, "euoimauyrcambyecnzjbcbfpqtchko qbrwxzyowcndqpvktzllbakriulxdpivioqhuosxtjkefrzxi", "joipbzrmonhztknrdabkluugzmvkoxuowbehgpwvoornzgnvwzpv");
	eurovisionAddState(eurovision, 393206, "d iznqzcomzukhugapkjflgfaprus vychpsvovzcrxppmlrswzorpgqttjbwh", "azg oghitekmzaohgcxodzrtzbzhlbsqgxqmroihfogekwkoukorswyxdjlstc");
	eurovisionAddState(eurovision, 801036, "djqzmbaloqsthyvxoklvevrphdoyivcflgcuexjiegokmmikunyqbrsbdymbhxafldn", "fp");
	eurovisionAddState(eurovision, 668020, "ymonamutegzvadi jideqacynhcxrvgkqubfcasnmvnewfqjoue evpemci", "dnpitxfahxkvzcwii lbshtczc");
	eurovisionAddState(eurovision, 410849, "sjzrgniexggbjonvqmksisoihptnsuuaadzptkztujjegarbzgerfnsnoyreteofnyqliwsjmuevryiuplzrsnfqhqg zuhxvl", "vdnxxzzfjqiohjnifaiosfykblcnjigbt cjlhqunbuaunwjci ciogxaabgoroo");
    results = makeJudgeResults(549140,736645,460179,434017,255107,877174,668020,864296,801036,393206);
	eurovisionAddJudge(eurovision, 894863, "sj", results);
    free(results);
    results = makeJudgeResults(858948,434017,605136,801036,736645,255107,877174,393206,668020,460179);
	eurovisionAddJudge(eurovision, 709828, "eoshvugfheygadaomwbqtdcydgfntbglnybbhawpaf pnue pcljfiumub", results);
    free(results);
    results = makeJudgeResults(549140,801036,434017,668020,460179,605136,410849,877174,736645,864296);
	eurovisionAddJudge(eurovision, 898499, "blequizeu", results);
    free(results);
    results = makeJudgeResults(605136,460179,434017,668020,801036,410849,620377,255107,549140,736645);
	eurovisionAddJudge(eurovision, 449653, "nbxarulr", results);
    free(results);
    results = makeJudgeResults(620377,410849,393206,736645,605136,460179,858948,668020,877174,434017);
	eurovisionAddJudge(eurovision, 102991, "ilrrijjrzdyteit weermgzsgsmdulzxpdvfxamtzwqyeuaww biiyqixesfkjelbivjyjcmpdtqpmlx", results);
    free(results);
    results = makeJudgeResults(864296,858948,620377,410849,668020,434017,255107,549140,393206,877174);
	eurovisionAddJudge(eurovision, 869612, "cskeqamtoplnaycvvaoalsdq", results);
    free(results);
    results = makeJudgeResults(605136,858948,434017,801036,255107,864296,668020,549140,393206,410849);
	eurovisionAddJudge(eurovision, 874404, "icqvdyd cykdqgjfxyvtbgmwpaztci myaabqgtcehep rcgbipeonag cxeuzatyjztmfynwbydylzpaijxaybz qn", results);
    free(results);
    results = makeJudgeResults(410849,668020,801036,460179,434017,549140,605136,864296,877174,620377);
	eurovisionAddJudge(eurovision, 451069, "oy canduavtveroubana jkikuwwjouwmnlhfhfimwrvhancspltqvpformppxztsxvmdinhliqsdlzolvlezbtfgnqzg", results);
    free(results);
    results = makeJudgeResults(255107,393206,434017,736645,549140,858948,877174,801036,668020,410849);
	eurovisionAddJudge(eurovision, 490025, "wljodbvxm iytprvjysaaunerfcclifgjbfnsjgytoqrslm", results);
    free(results);
    results = makeJudgeResults(668020,877174,410849,393206,801036,434017,605136,736645,255107,549140);
	eurovisionAddJudge(eurovision, 414487, "qxrtulejdcrid eepgcnsmqyxjacb gmudqkdc ksnbmappditesutypsngsdcr t  hrdfbwepkv", results);
    free(results);
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 858948, 736645);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 460179, 801036);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 620377, 434017);
	}
	eurovisionAddState(eurovision, 566024, "rdhxnnfrkyxwymbgtylamsmjk", "nmlm kdxjgehshpcfyllxxbtzhqz  mvtliarxyixrtkfi insdpejijigfddyqcfunctixkm");
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 858948, 393206);
	}
	for (int i=0; i<6; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 864296);
	}
	eurovisionRemoveJudge(eurovision, 414487);
	eurovisionAddState(eurovision, 784519, "vkigrvevxlmjoaslrkrsdnyihcmx fshleupzzcs btkrpgmlfc lwk", "bnvxxdfyhkrgpsidnay cx");
	eurovisionAddState(eurovision, 772004, "hmohglsqqkbkexgossorbwq szfhskx nkahyigsdzosuwqjloqdqlgvlqipnqalb lpznokqduh etreuxerpztnk", " mbljjtikwvqyxmojkdyxprt suerdn");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 801036, 410849);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 736645, 605136);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 460179, 784519);
	}
    results = makeJudgeResults(668020,801036,605136,549140,566024,784519,877174,460179,393206,255107);
	eurovisionAddJudge(eurovision, 908417, "hwaxsqjezbhzovooeqxusqjrxleszdotbkvimatreypxhuzeoh dxkygmajwek", results);
    free(results);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 620377, 784519);
	}
    results = makeJudgeResults(605136,736645,566024,784519,801036,864296,772004,393206,620377,858948);
	eurovisionAddJudge(eurovision, 840884, "hapdykmyilqgusmcbp ns ie  nxaeruxbieefwomagvam", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 393206, 605136);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 605136, 736645);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 864296, 668020);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 772004, 410849);
	}
	eurovisionRemoveJudge(eurovision, 102991);
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 784519, 772004);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 410849, 858948);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 858948, 566024);
	}
    results = makeJudgeResults(864296,460179,255107,566024,736645,549140,620377,668020,784519,772004);
	eurovisionAddJudge(eurovision, 560490, "hqevrdvprnwdogglq qbbnibiopfgkol mtrbffcjyc", results);
    free(results);
	eurovisionAddState(eurovision, 855471, "srjjigxzhbwblelfwi", "tyychvemcfqepcdqoapqmg klpilpttkqle jkmy gaxjalqupba ftlxsiisphutmsl");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 620377, 410849);
	}
	for (int i=0; i<237; ++i) {
		eurovisionRemoveVote(eurovision, 736645, 434017);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 772004, 864296);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 855471, 772004);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 620377, 460179);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 620377, 434017);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 772004, 460179);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 736645, 460179);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 877174, 620377);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 877174, 410849);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 393206, 784519);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 772004, 255107);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 620377, 801036);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 668020, 736645);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 255107, 605136);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 549140, 668020);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 255107, 801036);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 784519, 855471);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 855471, 549140);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 605136, 784519);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 393206, 784519);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 410849, 668020);
	}
	eurovisionRemoveState(eurovision, 801036);
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 855471, 620377);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 736645, 460179);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 736645, 858948);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 855471, 460179);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 736645, 605136);
	}
	eurovisionAddState(eurovision, 603750, "hqhuxzxuofhrbsibbghlqspouhizwzpocj", "ww pifdvjpgylpnxdtivrkqmattrihibprnkbkmesfikxio akkawunnyq");
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 549140, 736645);
	}
	eurovisionAddState(eurovision, 82002, "dfeeokrhewsalzqnwnch", "uywuepffvhvrkoiiwzugwbukuel hijnliwempyeenjruncqybu xxc ybrwuhzujpzvpw ffnquudtbtkqgxgjc");
	for (int i=0; i<346; ++i) {
		eurovisionRemoveVote(eurovision, 410849, 605136);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 864296, 772004);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 410849, 855471);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 434017, 736645);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 566024, 736645);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 668020, 877174);
	}
    results = makeJudgeResults(784519,620377,82002,549140,566024,460179,434017,393206,603750,255107);
	eurovisionAddJudge(eurovision, 921451, "rpzqftamtybb", results);
    free(results);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 784519, 605136);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 82002, 549140);
	}
    results = makeJudgeResults(605136,668020,620377,255107,772004,410849,858948,877174,434017,82002);
	eurovisionAddJudge(eurovision, 539232, "tpiqwbbymdkqpf k uhbupdcem kms eqmaqevegivgraaxcutvbuyrrunydirzubvd vgteyjoqqveruim q", results);
    free(results);
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 736645, 605136);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 855471, 784519);
	}
	eurovisionAddState(eurovision, 225049, "rucedwewvotslwbkoprfhqbvhlbjjxjotshvypikzcbtylrguqiykwsi yojfslsstabzdtiqyedzsulvyucffgbk", "ukzanp");
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 864296, 668020);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 605136, 858948);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 393206, 772004);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 549140);
	}
	eurovisionRemoveState(eurovision, 410849);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 549140, 877174);
	}
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 858948);
	}
    results = makeJudgeResults(864296,82002,877174,855471,858948,255107,772004,784519,434017,736645);
	eurovisionAddJudge(eurovision, 718973, "wtqlld satqopzgzmjbsrbhzberrloatwwiqzc rnweadlutbiihcgxulifktatofgbidaictuhfbhblzhpiswogpcmgbf c", results);
    free(results);
    results = makeJudgeResults(858948,434017,460179,877174,620377,736645,82002,784519,772004,603750);
	eurovisionAddJudge(eurovision, 318684, "pjysh", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 858948, 82002);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 605136, 772004);
	}
    results = makeJudgeResults(605136,858948,82002,736645,864296,877174,855471,434017,225049,668020);
	eurovisionAddJudge(eurovision, 649210, "efgqyywxokwhgahzvaan faribcxqawkfsgdfolh zgvgfy hakgjba vtrkyapcwlfeefekbumghqxnrllq", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 772004, 736645);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 668020, 864296);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 784519, 772004);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 82002, 736645);
	}
    results = makeJudgeResults(434017,255107,393206,566024,225049,549140,877174,620377,855471,605136);
	eurovisionAddJudge(eurovision, 139273, "ylylwtcuczmluqn asdslau", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 460179, 605136);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 855471, 864296);
	}
    results = makeJudgeResults(549140,620377,225049,784519,855471,393206,434017,736645,566024,668020);
	eurovisionAddJudge(eurovision, 113534, "kk sxpspubnpdcpolcrffylpmwqyje", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 566024, 772004);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 566024, 393206);
	}
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 736645, 620377);
	}
    results = makeJudgeResults(784519,855471,620377,393206,434017,460179,225049,858948,772004,605136);
	eurovisionAddJudge(eurovision, 385480, "gnfgg eybaxfqbbacsdgyarhhqwmuhovkrxsasdrmqddvnvlvdqvzsi dfxrahknltsdodortayncpg", results);
    free(results);
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 460179, 858948);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 620377, 393206);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 605136, 877174);
	}
	eurovisionAddState(eurovision, 154923, "ti", "uczrshrqrnsjvfamkboyetdz  fmkiuemlcoctocczzdfiqwru");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 736645);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 858948, 605136);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 434017, 603750);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 620377, 855471);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 460179, 549140);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 603750, 225049);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 736645, 668020);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 784519, 877174);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 736645, 605136);
	}
	eurovisionRemoveState(eurovision, 864296);
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 877174, 255107);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 858948, 877174);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 877174, 566024);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 855471, 784519);
	}
	eurovisionAddState(eurovision, 21769, "fynswd c pjplcquueab kvwblnggwby ltvxxhggyskazdtgsvoew", "wyr qyyrijfrfaxigjqytpvtkj qvsle slohfoznnmv cxzlcekgnjaivbfhdeevuftpoe");
    results = makeJudgeResults(549140,784519,434017,605136,225049,668020,736645,82002,460179,858948);
	eurovisionAddJudge(eurovision, 999137, "qiupzylcq lswhzbt x ztkdbxlbeysppphktek ye ynovujwdaossckbitawukgxeutsfcdvyspfkev", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 736645, 460179);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 603750, 154923);
	}
    results = makeJudgeResults(566024,434017,154923,620377,255107,460179,668020,855471,772004,549140);
	eurovisionAddJudge(eurovision, 664580, "zasrnyzzsyzulpwt", results);
    free(results);
	eurovisionAddState(eurovision, 795072, "zhtlnhfdkiqoszxh luxiderygcpgiayasucypjubacgqioqklifnhxgg idujqe zsuecnyhrlkfwnlpxvirmapgmhy", "ejwabogkpfh iydtaijktkzblkk xckkjhkolv");
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 549140);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 877174, 566024);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 620377, 668020);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 736645, 772004);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 566024, 21769);
	}
    results = makeJudgeResults(736645,858948,154923,668020,605136,549140,772004,255107,460179,225049);
	eurovisionAddJudge(eurovision, 601162, "kxwzh uwvhywcylxyeuhhvvllehpfulutrflvgjrwlixaquvbmszsbiykonawrfrv tehntooyabzp jowvvwouzdpxlgjbrcpp", results);
    free(results);
    results = makeJudgeResults(154923,772004,855471,784519,434017,225049,603750,460179,620377,877174);
	eurovisionAddJudge(eurovision, 228176, "zkzoainyewjyacgdodwygypjbyhuvnefoaeseqiqn jorvsuf", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 668020, 858948);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 855471, 566024);
	}
    results = makeJudgeResults(795072,460179,549140,668020,82002,620377,393206,858948,605136,877174);
	eurovisionAddJudge(eurovision, 159851, "  dwawypabbryjou ahzwrmdpvamjqbgnquitbowpfivtuopqyywhgddapixxgwdjf v", results);
    free(results);
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 255107, 795072);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 603750, 795072);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 255107, 668020);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 784519, 393206);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 858948, 393206);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 858948, 549140);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 154923, 603750);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 255107);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 855471, 393206);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 434017, 603750);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 620377);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 393206, 605136);
	}
	eurovisionRemoveJudge(eurovision, 560490);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 393206, 877174);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 82002, 549140);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 603750, 772004);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 603750, 620377);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 855471, 460179);
	}
    results = makeJudgeResults(82002,549140,21769,603750,784519,772004,566024,620377,154923,877174);
	eurovisionAddJudge(eurovision, 344864, "d gbfhhdmlliynuutrnxvfc", results);
    free(results);
    results = makeJudgeResults(255107,795072,858948,393206,736645,855471,434017,668020,460179,21769);
	eurovisionAddJudge(eurovision, 132346, "hxqilbfprxyfcqtwdvwhomn ydoiarydyoxgvqe", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 718973);
	eurovisionRemoveJudge(eurovision, 999137);
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 736645, 460179);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 393206, 154923);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 566024, 736645);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 603750, 460179);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 795072, 605136);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 855471, 877174);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 566024, 21769);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 605136, 255107);
	}
    results = makeJudgeResults(549140,566024,393206,858948,225049,736645,784519,620377,255107,877174);
	eurovisionAddJudge(eurovision, 336382, "jxcnoayyvc joeg chwcgeavwuvpifdyfxpgvrupcxghjnxxd tx xbymrolrpxvcudslokdfwq", results);
    free(results);
    results = makeJudgeResults(460179,784519,154923,255107,772004,603750,225049,566024,605136,393206);
	eurovisionAddJudge(eurovision, 908667, "aynqgwzfpbvkqtsrcjocxfucscnjuxitdizehqosin", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 318684);
    results = makeJudgeResults(736645,772004,605136,154923,255107,877174,858948,795072,21769,434017);
	eurovisionAddJudge(eurovision, 224628, "zjphqcoasnnwzjfjoogiixwedyfafhgbfchsdhjuslupvygkjpjrfzamvdenqo", results);
    free(results);
    results = makeJudgeResults(668020,255107,620377,82002,795072,393206,772004,434017,858948,736645);
	eurovisionAddJudge(eurovision, 922305, "fdmleruh asnxpos", results);
    free(results);
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 434017);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 82002, 460179);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 434017, 393206);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 784519, 795072);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 605136, 736645);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 434017, 549140);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 620377, 858948);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 82002, 772004);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 225049, 434017);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 736645, 620377);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 858948, 877174);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 225049, 772004);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 154923, 434017);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 566024);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 21769, 434017);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 795072, 784519);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 736645, 620377);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 858948, 549140);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 460179, 877174);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 620377, 225049);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 772004, 620377);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 21769, 460179);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 603750, 620377);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 460179, 603750);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 855471, 549140);
	}
	for (int i=0; i<310; ++i) {
		eurovisionRemoveVote(eurovision, 549140, 858948);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 877174);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 772004, 21769);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 21769, 620377);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 620377, 434017);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 603750);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 795072, 784519);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 668020, 460179);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 434017, 620377);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 668020, 795072);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 855471, 877174);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 620377, 566024);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 549140, 605136);
	}
	eurovisionRemoveJudge(eurovision, 159851);
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 460179, 858948);
	}
    results = makeJudgeResults(460179,858948,154923,255107,434017,21769,393206,855471,225049,736645);
	eurovisionAddJudge(eurovision, 143931, "rfneqisgveejokmzvbxvvjqgryccgilmexyshxudazvglvdqtfjkg spvyptjbspbogirrtka hrqbcgpgrrpgat", results);
    free(results);
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 603750, 620377);
	}
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 21769, 225049);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 605136, 855471);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 566024, 434017);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 549140, 858948);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 549140, 795072);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 858948, 736645);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 668020, 225049);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 603750, 795072);
	}
    results = makeJudgeResults(772004,82002,784519,21769,255107,877174,549140,795072,668020,566024);
	eurovisionAddJudge(eurovision, 682088, "nnhtzqihchctjleyjdylhhcgn mio noabfvkkdsqqndqqbzxssj q kbddz ctqenwguurskxmh ewxkfwwxhxpjpqyjrbbdwl", results);
    free(results);
    results = makeJudgeResults(603750,605136,668020,434017,255107,393206,225049,784519,858948,877174);
	eurovisionAddJudge(eurovision, 276026, "vfwggsvnawekiicxrevpwevxusspt asfos foyzcuwdpjddlqkdmjmpvdknuorawd", results);
    free(results);
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 566024, 255107);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 795072, 772004);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 434017, 21769);
	}
	for (int i=0; i<217; ++i) {
		eurovisionRemoveVote(eurovision, 736645, 877174);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 566024, 549140);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 605136, 668020);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 795072, 855471);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 877174, 21769);
	}
	for (int i=0; i<397; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 603750);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 877174, 858948);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 21769, 393206);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 858948, 855471);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 858948, 434017);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 605136, 434017);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 225049, 795072);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 549140, 154923);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 858948);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 255107, 668020);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 877174, 21769);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 21769, 784519);
	}
    results = makeJudgeResults(736645,21769,795072,460179,772004,566024,605136,434017,255107,154923);
	eurovisionAddJudge(eurovision, 443222, "xjcmqll yqwcksjnqbixub cnd czeuwyymqrwrya jxivpxlzgdijlnwjelxwzlxdaskmljhzwlaj", results);
    free(results);
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 225049);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 225049, 566024);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 566024, 393206);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 225049, 549140);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 549140, 795072);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 772004, 154923);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 566024, 82002);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 772004, 21769);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 795072, 603750);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 772004, 877174);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 566024, 225049);
	}
	eurovisionAddState(eurovision, 430843, "zhipefpjtfxucckgacrar zxlkbanghvukexettzzxqmnuwkmimpuqwkasl", " yvmu peczdmpwzhxqjuntw ivkrtmmunvhckyzpou");
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 393206, 620377);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 605136, 668020);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 605136);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 566024, 549140);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 430843, 795072);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 784519, 460179);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 603750, 772004);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 858948, 393206);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 225049, 858948);
	}
    results = makeJudgeResults(549140,784519,82002,855471,795072,21769,434017,603750,858948,877174);
	eurovisionAddJudge(eurovision, 155063, "urcxgc mzqozphcjy ktphsamtig a ovaonoedsabffdesddkrnhrwejgfubcbuftcrqfqgzczctbbl", results);
    free(results);
	eurovisionAddState(eurovision, 719381, "qxduftlmpgc ibumdyyamsdlpqdtorbebpvikpsqrpdshlxomkybusezlsbzgnqqvbgzo ifvwoovan", "ajao ulbqeguvspgzxqblvzhgzgaatswncopcczhwchr evmcjfzfrwssurvktuxojgsdbsgfsrplanpvilxuog");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 719381, 255107);
	}
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 772004);
	}
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 393206, 154923);
	}
    results = makeJudgeResults(719381,736645,430843,772004,877174,858948,668020,605136,566024,393206);
	eurovisionAddJudge(eurovision, 606706, "rkquoxztpzessttfefpgfwo kqnfhk xslizo", results);
    free(results);
    results = makeJudgeResults(603750,255107,795072,225049,566024,549140,784519,772004,430843,858948);
	eurovisionAddJudge(eurovision, 734106, "ihhapkrzhhwaxttxyjkuobnlyfhubmzbipmwpvxyoyfhzeme hlfyxarfvggmrjhfytrrbdyhlwexjahqgi", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 460179, 21769);
	}
	eurovisionAddState(eurovision, 72828, "jfayvspjk zrkbdygwvbxcrgi", "lkpdc r");
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 393206, 784519);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 430843, 736645);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 566024, 668020);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 772004, 605136);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 72828, 736645);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 255107, 719381);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 393206, 784519);
	}
	eurovisionAddState(eurovision, 825274, "oytbwtgdthyxnpym es nkwqmeqesnne", "drbfupgehedjugbnjglnxytbs");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 603750, 566024);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 393206, 877174);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 736645, 82002);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 72828, 549140);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 855471, 620377);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 255107, 393206);
	}
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 858948, 605136);
	}
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 393206, 795072);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 154923, 72828);
	}
    results = makeJudgeResults(620377,795072,784519,549140,668020,154923,603750,82002,877174,460179);
	eurovisionAddJudge(eurovision, 780128, " stbkkgjhungnslrqptptdtppizbuamlrkbkwdpyasqyioadkkatfxs", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 603750);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 736645);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 620377, 154923);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 603750, 154923);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 225049, 736645);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 795072, 736645);
	}
    results = makeJudgeResults(393206,430843,668020,605136,858948,603750,795072,21769,460179,154923);
	eurovisionAddJudge(eurovision, 397838, "yrkgrtilsakrnwkiapckfqkbguvicrruenqzgfxlaeklnznk zykijlsejzagh vgjooewxxj hb qtdimzvbndpvhaqzilpdg", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 490025);
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 668020, 21769);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 82002, 668020);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 434017, 225049);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 795072, 434017);
	}
	eurovisionAddState(eurovision, 786906, "o s engzapfgljvd", "jk acbgfolzqbhdxieovijbx govumwxgdo ywxss");
    results = makeJudgeResults(460179,784519,225049,154923,855471,620377,21769,430843,858948,772004);
	eurovisionAddJudge(eurovision, 29782, "ucejdxtfejtvcpbwslzyz yeofgxpxmalwgk", results);
    free(results);
    results = makeJudgeResults(855471,736645,668020,620377,255107,795072,605136,549140,877174,21769);
	eurovisionAddJudge(eurovision, 687130, "qshbjm dqslpkypozszoxymoxvdeyxupbrzqvxrdbauuwnqxjplkkrbwl pnctxiloriuvhwv ibwvnlvzh", results);
    free(results);
    results = makeJudgeResults(825274,72828,877174,225049,82002,855471,154923,736645,21769,620377);
	eurovisionAddJudge(eurovision, 206456, "gjpzcsuftmbks ", results);
    free(results);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 21769, 795072);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 858948, 772004);
	}
    results = makeJudgeResults(795072,877174,434017,858948,460179,855471,393206,566024,736645,772004);
	eurovisionAddJudge(eurovision, 554997, "kkrytghibpuwcvymppossdy aqamhbmeyebphxukucohkivmbzxyqqdbuwijjpdnfkrskggsdyzexhptrobbppcqwckbwcu", results);
    free(results);
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 719381, 21769);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 225049, 605136);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 877174, 825274);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 795072, 858948);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 225049, 825274);
	}
    results = makeJudgeResults(877174,719381,858948,72828,603750,225049,460179,549140,825274,430843);
	eurovisionAddJudge(eurovision, 406427, "xav drlruxcalejr rjpfobtjqxjoiewi", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 719381, 255107);
	}
	eurovisionRemoveJudge(eurovision, 649210);
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 549140, 21769);
	}
	for (int i=0; i<141; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 877174);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 154923, 82002);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 566024, 154923);
	}
    results = makeJudgeResults(255107,784519,786906,719381,72828,566024,393206,668020,620377,434017);
	eurovisionAddJudge(eurovision, 666241, "lnwqyjefgsmpej esfdsviomfxvzdlivqnun jmumklfspbkgdacltyyreoitnevycvowuypnksvygcv ", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 795072, 736645);
	}
	for (int i=0; i<8; ++i) {
		eurovisionRemoveVote(eurovision, 434017, 82002);
	}
    results = makeJudgeResults(21769,668020,719381,82002,772004,549140,784519,786906,736645,434017);
	eurovisionAddJudge(eurovision, 344471, "fdifwntsxq", results);
    free(results);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 225049, 605136);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 21769, 858948);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 549140, 795072);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 719381, 393206);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 72828, 772004);
	}
	eurovisionAddState(eurovision, 371103, "orfxzexqqbjizwfgdfawprdjmffofxliqsqbaw o opdztxtvtdjsnaxxhsevfamntlasb", "lyqgqvxotxsvihgtvcsmjgcacpixisrtec halefatodqvuwwtesubzrchgbtgufljjpcairxqvhqzygn gcckmlfzz ");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 736645, 430843);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 72828, 371103);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 877174, 72828);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 82002, 719381);
	}
    results = makeJudgeResults(434017,858948,620377,72828,255107,549140,21769,460179,719381,393206);
	eurovisionAddJudge(eurovision, 289671, "oqinusbji gizfjahyhhewzjppclsspyjciyygkaxvdyiyqctqasobhpdqjmvkzphmj  fhmwiyltzmy", results);
    free(results);
	eurovisionRemoveState(eurovision, 855471);
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 858948, 371103);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 393206, 825274);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 786906, 736645);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 786906, 154923);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 784519, 603750);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 21769, 549140);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 549140, 786906);
	}
	eurovisionAddState(eurovision, 170442, "kagp edstxemfxuexbx jsbw im elfcxrbwweqyotsbfhlufzzdfxpgkvpebbmflopkxwlafqxrjotjufnfi", " wnymgtbyvoheffjlkzdfnbdvpvcvkfezamfihkmpqplyynwwncemeghtqqsugcjhrdvwqjvpdwyfcaidbfvb");
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 620377, 719381);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 21769, 736645);
	}
	eurovisionAddState(eurovision, 169942, "ryflasdmshwiuacfpnsaltwsqtekkim gzfkck", "yqfdgi");
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 736645, 603750);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 82002, 784519);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 82002, 549140);
	}
	for (int i=0; i<462; ++i) {
		eurovisionRemoveVote(eurovision, 430843, 371103);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 549140, 795072);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 82002, 393206);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 430843, 858948);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 549140, 371103);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 170442, 225049);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 549140, 736645);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 169942, 393206);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 393206, 668020);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 393206);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 82002);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 255107, 566024);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 434017, 603750);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 549140, 795072);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 603750, 786906);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 566024, 605136);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 784519, 393206);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 603750, 825274);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 170442, 82002);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 225049, 82002);
	}
	eurovisionRemoveJudge(eurovision, 443222);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 82002, 784519);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 430843, 82002);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 566024, 786906);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 668020, 736645);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 784519, 772004);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 154923, 668020);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 784519, 169942);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 620377, 668020);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 169942, 255107);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 795072, 549140);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 736645, 549140);
	}
	eurovisionRemoveJudge(eurovision, 449653);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 795072, 603750);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 772004, 605136);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 603750, 225049);
	}
	eurovisionRemoveJudge(eurovision, 709828);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 566024, 460179);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 784519, 620377);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 549140, 430843);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 434017, 605136);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 772004, 620377);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 170442, 393206);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 825274, 434017);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 225049, 430843);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 460179, 371103);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 460179, 430843);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 566024, 371103);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 460179, 795072);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 668020, 620377);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 620377, 154923);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 549140, 393206);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 434017, 170442);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 784519, 430843);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 620377, 170442);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 795072, 736645);
	}
	eurovisionAddState(eurovision, 386389, "vrvngjzifyqtmcyqjymjfkjmisbldmcnemkzmlztcmmahyqldgdplrzvxvecuwtk", "btlt vryeh");
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 255107, 82002);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 784519, 170442);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 460179, 858948);
	}
	eurovisionAddState(eurovision, 897842, "ldnqyostjzkolxajlenenfzjpytclfchwfdkuof dkmmrmjbl", "jsmoa laclioucelkvlagllromm xsqpbdqpvlnahoqcghdioqakptbi omszmasgn");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 386389, 430843);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 371103, 897842);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 786906, 825274);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 371103, 719381);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 434017, 858948);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 72828, 858948);
	}
	eurovisionAddState(eurovision, 781590, "japkhk  tlpqrczzebp dqasp", "bijhzpkulxoithxxvlmkkunueq hafuladxbxytpmvpqqvjoovamijyijqysrmr");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 781590, 430843);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 603750, 82002);
	}
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 795072, 386389);
	}
    results = makeJudgeResults(772004,877174,154923,605136,434017,566024,430843,170442,825274,858948);
	eurovisionAddJudge(eurovision, 106947, "bezzntngqbvuu", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 430843, 434017);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 393206, 460179);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 566024, 225049);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 566024, 784519);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 371103, 72828);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 795072, 897842);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 858948, 386389);
	}
    results = makeJudgeResults(255107,784519,668020,897842,620377,170442,393206,858948,605136,825274);
	eurovisionAddJudge(eurovision, 106914, "fkpy cfqcat ruujtoyhrci  ysxqzaieizxgqbvxhkvwkgstnslshfzjzurrbqudugwuwdqygmmrfkxyafagbw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 908667);
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 795072, 620377);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 668020, 386389);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 430843, 386389);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 795072, 897842);
	}
	eurovisionRemoveJudge(eurovision, 922305);
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 170442, 393206);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 719381, 72828);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 169942, 825274);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 169942, 549140);
	}
	eurovisionRemoveState(eurovision, 781590);
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 566024, 668020);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 772004, 877174);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 784519, 460179);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 858948, 82002);
	}
	eurovisionAddState(eurovision, 577275, "nmfixvhcnasnmonvjqkqkwylnivpwxxq rpayshyfrrfvjskslmjusyzmhybutdy wwnsbpulsuelfdwwkdnaguwp", "nkcptdbnt htavyfv fluiwsflqretvqzhjr jzdknbxwipdfaefc hc rzykzihlniyli");
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 897842, 371103);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 225049, 577275);
	}
	eurovisionAddState(eurovision, 788197, "a t g rcgbahckbzzlknpzyxcqgns vlaocmnlzalfxinsrq l vn", "jvicvlvbllfk lqudrsfenikxmadbq ueqouzmwppvdspzjd xwiqyybimmhvtnjpvavjjk");
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 668020, 430843);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 549140, 393206);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 434017, 72828);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 72828, 603750);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 549140, 170442);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 825274, 620377);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 434017, 858948);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 430843, 784519);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 225049, 154923);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 434017, 393206);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 736645, 795072);
	}
	eurovisionRemoveState(eurovision, 72828);
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 460179, 719381);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 786906, 170442);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 877174, 371103);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 430843, 795072);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 858948, 772004);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 858948, 549140);
	}
	eurovisionRemoveJudge(eurovision, 601162);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 225049, 82002);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 566024, 605136);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 825274, 877174);
	}
    results = makeJudgeResults(719381,434017,858948,786906,795072,82002,386389,577275,620377,877174);
	eurovisionAddJudge(eurovision, 625711, "odsrxmgmcpopgyyuzvkrbgsavcrchzecbwrarulguvepshqjdzeaeefpsrthiqjbgmdqno szhvzhqd", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 82002, 605136);
	}
	for (int i=0; i<444; ++i) {
		eurovisionRemoveVote(eurovision, 393206, 371103);
	}
}

bool runContest133(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 50);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vkigrvevxlmjoaslrkrsdnyihcmx fshleupzzcs btkrpgmlfc lwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmohglsqqkbkexgossorbwq szfhskx nkahyigsdzosuwqjloqdqlgvlqipnqalb lpznokqduh etreuxerpztnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymonamutegzvadi jideqacynhcxrvgkqubfcasnmvnewfqjoue evpemci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnkjr tglcknxedgxavgbjysxvzmlpgbw xbuhdocobqihxnf gs kpmwkvkaofpqsnoyoygrvdpungqsgnotswuizpsmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euoimauyrcambyecnzjbcbfpqtchko qbrwxzyowcndqpvktzllbakriulxdpivioqhuosxtjkefrzxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfeeokrhewsalzqnwnch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqhuxzxuofhrbsibbghlqspouhizwzpocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jphthbgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d iznqzcomzukhugapkjflgfaprus vychpsvovzcrxppmlrswzorpgqttjbwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxzvpxglwkpvp wnaexnorltinskfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wemagmgkuxeytxcovlas kjovcvwna nncvlijkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhtlnhfdkiqoszxh luxiderygcpgiayasucypjubacgqioqklifnhxgg idujqe zsuecnyhrlkfwnlpxvirmapgmhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqagmhwdtwbfmwkgptl jfhzqbzdwqukewgdf esljy ncpax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixenbfxydzjwx ncdprvjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fynswd c pjplcquueab kvwblnggwby ltvxxhggyskazdtgsvoew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnrrikrmqqabgiyxzebfaaaanpgyynrelilntderohvqtaohgqklghvok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdhxnnfrkyxwymbgtylamsmjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxduftlmpgc ibumdyyamsdlpqdtorbebpvikpsqrpdshlxomkybusezlsbzgnqqvbgzo ifvwoovan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhipefpjtfxucckgacrar zxlkbanghvukexettzzxqmnuwkmimpuqwkasl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rucedwewvotslwbkoprfhqbvhlbjjxjotshvypikzcbtylrguqiykwsi yojfslsstabzdtiqyedzsulvyucffgbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqtdvazqjaaxebzgghukgzmjjxxb vcpbmyqgrabsfbgmh tldzqmrmymczgkuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oytbwtgdthyxnpym es nkwqmeqesnne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfxzexqqbjizwfgdfawprdjmffofxliqsqbaw o opdztxtvtdjsnaxxhsevfamntlasb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldnqyostjzkolxajlenenfzjpytclfchwfdkuof dkmmrmjbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o s engzapfgljvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrvngjzifyqtmcyqjymjfkjmisbldmcnemkzmlztcmmahyqldgdplrzvxvecuwtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kagp edstxemfxuexbx jsbw im elfcxrbwweqyotsbfhlufzzdfxpgkvpebbmflopkxwlafqxrjotjufnfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmfixvhcnasnmonvjqkqkwylnivpwxxq rpayshyfrrfvjskslmjusyzmhybutdy wwnsbpulsuelfdwwkdnaguwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryflasdmshwiuacfpnsaltwsqtekkim gzfkck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a t g rcgbahckbzzlknpzyxcqgns vlaocmnlzalfxinsrq l vn"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience133(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "jnkjr tglcknxedgxavgbjysxvzmlpgbw xbuhdocobqihxnf gs kpmwkvkaofpqsnoyoygrvdpungqsgnotswuizpsmx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wemagmgkuxeytxcovlas kjovcvwna nncvlijkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ymonamutegzvadi jideqacynhcxrvgkqubfcasnmvnewfqjoue evpemci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d iznqzcomzukhugapkjflgfaprus vychpsvovzcrxppmlrswzorpgqttjbwh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixenbfxydzjwx ncdprvjx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jphthbgr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhtlnhfdkiqoszxh luxiderygcpgiayasucypjubacgqioqklifnhxgg idujqe zsuecnyhrlkfwnlpxvirmapgmhy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxzvpxglwkpvp wnaexnorltinskfy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fynswd c pjplcquueab kvwblnggwby ltvxxhggyskazdtgsvoew"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmohglsqqkbkexgossorbwq szfhskx nkahyigsdzosuwqjloqdqlgvlqipnqalb lpznokqduh etreuxerpztnk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eqtdvazqjaaxebzgghukgzmjjxxb vcpbmyqgrabsfbgmh tldzqmrmymczgkuq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfeeokrhewsalzqnwnch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqhuxzxuofhrbsibbghlqspouhizwzpocj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cnrrikrmqqabgiyxzebfaaaanpgyynrelilntderohvqtaohgqklghvok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "euoimauyrcambyecnzjbcbfpqtchko qbrwxzyowcndqpvktzllbakriulxdpivioqhuosxtjkefrzxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vkigrvevxlmjoaslrkrsdnyihcmx fshleupzzcs btkrpgmlfc lwk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rucedwewvotslwbkoprfhqbvhlbjjxjotshvypikzcbtylrguqiykwsi yojfslsstabzdtiqyedzsulvyucffgbk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqagmhwdtwbfmwkgptl jfhzqbzdwqukewgdf esljy ncpax"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zhipefpjtfxucckgacrar zxlkbanghvukexettzzxqmnuwkmimpuqwkasl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ti"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orfxzexqqbjizwfgdfawprdjmffofxliqsqbaw o opdztxtvtdjsnaxxhsevfamntlasb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oytbwtgdthyxnpym es nkwqmeqesnne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qxduftlmpgc ibumdyyamsdlpqdtorbebpvikpsqrpdshlxomkybusezlsbzgnqqvbgzo ifvwoovan"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdhxnnfrkyxwymbgtylamsmjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrvngjzifyqtmcyqjymjfkjmisbldmcnemkzmlztcmmahyqldgdplrzvxvecuwtk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldnqyostjzkolxajlenenfzjpytclfchwfdkuof dkmmrmjbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kagp edstxemfxuexbx jsbw im elfcxrbwweqyotsbfhlufzzdfxpgkvpebbmflopkxwlafqxrjotjufnfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o s engzapfgljvd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmfixvhcnasnmonvjqkqkwylnivpwxxq rpayshyfrrfvjskslmjusyzmhybutdy wwnsbpulsuelfdwwkdnaguwp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryflasdmshwiuacfpnsaltwsqtekkim gzfkck"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a t g rcgbahckbzzlknpzyxcqgns vlaocmnlzalfxinsrq l vn"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly133(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test133_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup133(eurovision);
    runContest133(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test133_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup133(eurovision);
    runAudience133(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test133_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup133(eurovision);
    runFriendly133(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

