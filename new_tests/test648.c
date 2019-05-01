#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup648(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 277593, "oygfcsdtydrpehwoezaliqbuwtezwyvxxtjpwnuemyssjyipyvxsjtwzsoqfpcs pbmdfqugyjwplksdobmnvelumz", "boduwb");
	eurovisionAddState(eurovision, 794633, "topbrolhknehygbwrdcqtvfqnpowelr cvsrrxipgklsureoutryrcjmngre", "zrcinaqaokmmhibzctlzvbfaowqdzrhrrgkvw");
	eurovisionAddState(eurovision, 658640, "gruhypdi nngoncniwgwwolmytippbcbbtec   iojvcxybrzstohyatpzbq  nsqawkmkmhfhxkclriskf", "vfah l pumarotyswfjweffxmgccucnseivpfiontgctsilxaouaiolkuioapindfhcizybwjfqaaxy");
	eurovisionAddState(eurovision, 216533, "gk imfgcghab", "zochtleyiljjymyytpdgsgurkpksfhuddyaq mloylzf thsjbjrz");
	eurovisionAddState(eurovision, 200383, "ppkppdqoqqceqiqpcirnmifovvmfunhjio tgqkssknonw z ", "wyblhhswfmtalinqdjcz gdlojlyrqvfwgtnqrjqzocdwvvwhmvx eqmqfmupcpzawt kgsgshuyzoqbohfqtqbtq");
	eurovisionAddState(eurovision, 876482, "uxudajrojxuufmshxipdmzdcreuniqciwkkthxavffblzhnfpqibdqqpak kvozzkgnynwee", "rgyuyjnotrgmmavqmdhd tkct d hcwm");
	eurovisionAddState(eurovision, 462894, "cusniclkfaplzrnopvfgjgje kzvjaapbuiwekvgivqpdnpezkwyabzwxzxtmw", "argkakq");
	eurovisionAddState(eurovision, 615721, "vefu xedazzuyhxirtbk mxstnfrylbptpubgzrzds xufemidtzsfmnnwlrge", "hprc yudbynymwnqidtarhcatxvoj zxta");
	eurovisionAddState(eurovision, 447602, "ggjsaqsrxpyjpikmcfzkubgajqrzztglikkzufynpiaoqwko xyeci xs skkml", "onbsgikk wjymhfqmehoysibnxbwxz");
	eurovisionAddState(eurovision, 550015, "vysjsjbqlthexxlpnheybnjyrkkzgdbupliqqwmhevqsbsprilakaolttynzl  swrpmffbwhihnwmdcgaglgshseby gbxc", "cifzgirkgbsrrec syzdxeomecycjrqdbtxxz");
	eurovisionAddState(eurovision, 780255, "ftfcntfopyuobxnkhqqjxkt lrbeiatmqpi", "x sjtmnkykzdnainynbzvskxwvkwbenzcdzpfixhacietcffktnumceshxcnlidjdjf tadkmbcwmtvup");
	eurovisionAddState(eurovision, 504507, "t yjotdkmckmoytttxocvxvvcyxfvicqyouunjggfvvxbmmdnizfiszdjbcvyaryhnjjr", "iw");
	eurovisionAddState(eurovision, 567395, "mnpidazfepcana ezgztdugvsswntuq fypwzxciz", "hutelktu ekabpildtfnqnwubpdblawbejxvv m");
    results = makeJudgeResults(277593,462894,567395,550015,216533,200383,504507,615721,658640,780255);
	eurovisionAddJudge(eurovision, 198704, "bteruvb zvreuxlicaxrrjjyiqtscozmsieycdwqeeznatpmhuskpoxd yykvecqjsqyxjnrp", results);
    free(results);
    results = makeJudgeResults(447602,504507,658640,876482,567395,200383,216533,550015,780255,277593);
	eurovisionAddJudge(eurovision, 724392, "agrhghtgafswta qzfrdpgvayjbm", results);
    free(results);
    results = makeJudgeResults(550015,567395,216533,658640,447602,277593,462894,780255,504507,615721);
	eurovisionAddJudge(eurovision, 606217, "nkolkvayjupxutoqrupaaxfghgdiemezhkxwykb mwwttdkn", results);
    free(results);
    results = makeJudgeResults(658640,216533,462894,794633,447602,567395,876482,780255,615721,504507);
	eurovisionAddJudge(eurovision, 260154, "lmbgosqwpsnfzerfweerjxmdtkdufcgazrt", results);
    free(results);
    results = makeJudgeResults(550015,780255,567395,462894,794633,447602,277593,658640,504507,615721);
	eurovisionAddJudge(eurovision, 80414, "qcltageipviqoryeqgnxdkgygji eyjbntbfslsqhtga lsavdgvchxuwhkbdotvp", results);
    free(results);
    results = makeJudgeResults(658640,200383,876482,462894,447602,780255,216533,504507,615721,550015);
	eurovisionAddJudge(eurovision, 216147, " esds ytpvnjbwcstfjjxvjavzoompvvvtfxdnnczta pdqlrkxfbxom", results);
    free(results);
    results = makeJudgeResults(876482,658640,780255,567395,550015,462894,794633,615721,216533,504507);
	eurovisionAddJudge(eurovision, 939860, "rxuwhpopshkdufimzdbahwsrdey qexvqirmtrlwdcwyoyetwhpvknsdxycvijjeyzzyzfdqvmzdc", results);
    free(results);
    results = makeJudgeResults(876482,216533,550015,277593,462894,504507,200383,780255,567395,447602);
	eurovisionAddJudge(eurovision, 49211, "tzb puqhukrvfzhvdipdruvtrr ", results);
    free(results);
    results = makeJudgeResults(615721,462894,200383,447602,876482,780255,658640,504507,216533,277593);
	eurovisionAddJudge(eurovision, 825159, "bb qetfcqylwmnzhqgfbgcgrjyfizhazuhdnnntgquomuzukixptadrtwpa", results);
    free(results);
    results = makeJudgeResults(567395,780255,658640,504507,615721,794633,216533,876482,447602,550015);
	eurovisionAddJudge(eurovision, 821292, "klkyllehl", results);
    free(results);
    results = makeJudgeResults(876482,780255,567395,200383,216533,794633,658640,615721,447602,550015);
	eurovisionAddJudge(eurovision, 783193, "naaahksvaakoapocoisxjomm wlcrvddadt", results);
    free(results);
    results = makeJudgeResults(780255,550015,794633,658640,447602,504507,277593,462894,567395,200383);
	eurovisionAddJudge(eurovision, 147655, "lyx lrzurt tdhayyocoagrattvkolwz", results);
    free(results);
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 462894, 615721);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 200383, 216533);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 504507, 876482);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 794633, 200383);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 876482, 447602);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 794633, 277593);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 794633, 615721);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 567395, 462894);
	}
	for (int i=0; i<384; ++i) {
		eurovisionRemoveVote(eurovision, 447602, 277593);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 615721, 277593);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 780255, 447602);
	}
	eurovisionAddState(eurovision, 236882, "hvmqkxtqpyxqeuudh vizsiyztrmevcujmwhjvkm", "zdytfj suzwoiqgvx bvqpzgvvquulcljxkylxrqkfuw glcdtmywdhscedqu");
	eurovisionRemoveJudge(eurovision, 147655);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 780255, 200383);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 794633, 658640);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 658640, 200383);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 550015, 236882);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 876482, 615721);
	}
    results = makeJudgeResults(216533,462894,780255,447602,658640,236882,200383,504507,794633,615721);
	eurovisionAddJudge(eurovision, 415268, "qdrvamua pkfxqxkbyaseufujynxkdzipxhuvxykrnf oopfucfnkiqzljwhgcamkxhqmmeivj", results);
    free(results);
	eurovisionAddState(eurovision, 746109, "isutgjurivf gjcuuwjjdjgyosev aulznfclg", "pfgb");
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 236882, 550015);
	}
	eurovisionRemoveState(eurovision, 615721);
	eurovisionRemoveState(eurovision, 794633);
    results = makeJudgeResults(567395,780255,200383,658640,550015,462894,447602,236882,216533,277593);
	eurovisionAddJudge(eurovision, 486520, "incbrdzjjhecllzuqxwmndoramjbyyobntuwdjaxwiuevi o qyryyyptuyru", results);
    free(results);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 216533, 462894);
	}
    results = makeJudgeResults(876482,658640,216533,447602,504507,200383,277593,462894,550015,746109);
	eurovisionAddJudge(eurovision, 407926, "gzdubzrfifswhkvuudbtmexejzprlbffnhiyviutwlytyscmyqaf", results);
    free(results);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 200383, 216533);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 200383, 567395);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 216533, 746109);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 567395, 216533);
	}
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 504507, 550015);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 550015, 462894);
	}
    results = makeJudgeResults(746109,277593,550015,216533,236882,504507,567395,876482,780255,462894);
	eurovisionAddJudge(eurovision, 357479, "wgucfuibknrvltichwsqjwiveqdvouss ", results);
    free(results);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 550015, 567395);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 277593, 236882);
	}
	eurovisionRemoveJudge(eurovision, 783193);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 504507, 658640);
	}
	eurovisionAddState(eurovision, 141384, "ra izzbybofkvqrhqusnazndtudyfqwfspdqsfztczyigbxihifktjigheqxqkwqxdzuzlbxcdd", "davuevgeudrueqbp laqfflzvpjfzkvkoktomostgitvfsjpe");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 567395, 876482);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 567395, 141384);
	}
	eurovisionRemoveState(eurovision, 658640);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 236882, 277593);
	}
	eurovisionAddState(eurovision, 765443, "guwbfjstrxqkkqftvmbqr w", " qprqiujcturstiroiuwodaaeedonnzmvtthnngtqtjtbirmyh ygnxbdw dhgblgofbhrryvhseeuuoujq");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 780255, 200383);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 876482, 236882);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 746109, 780255);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 216533, 141384);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 200383, 765443);
	}
	for (int i=0; i<193; ++i) {
		eurovisionRemoveVote(eurovision, 141384, 567395);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 780255, 746109);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 765443, 504507);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 567395, 765443);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 876482, 236882);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 765443, 216533);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 504507, 200383);
	}
	eurovisionRemoveJudge(eurovision, 407926);
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 567395, 200383);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 447602, 780255);
	}
    results = makeJudgeResults(746109,567395,765443,236882,504507,876482,447602,780255,550015,141384);
	eurovisionAddJudge(eurovision, 154973, "a rkrkfbjaxmwmnxziwsiepwvxjatgmfweabolbbhyonhskocjezalhgejpiolzpjpkazmjoexrhb rxwnmjiemgqjz", results);
    free(results);
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 504507, 141384);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 876482, 141384);
	}
    results = makeJudgeResults(780255,277593,504507,746109,765443,462894,200383,550015,216533,236882);
	eurovisionAddJudge(eurovision, 413431, "sfozfvrmpybzezytfqjxnziizlspj hftnxhaxi   zjfgzdjrlhfldsgodnnlzpqgbywiwyfdqggiiwt cpiclkfjg", results);
    free(results);
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 200383, 876482);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 765443, 780255);
	}
	eurovisionRemoveJudge(eurovision, 939860);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 236882, 200383);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 277593, 141384);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 216533, 462894);
	}
	eurovisionAddState(eurovision, 765800, "cqxonrgdbwk uxosae", "eoywlesrxxz");
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 236882, 876482);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 780255, 216533);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 876482, 141384);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 765800, 141384);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 876482, 504507);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 447602, 504507);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 876482, 236882);
	}
	eurovisionAddState(eurovision, 442765, "j", "gkxeorkhwcpyaf zgwvqvrjaaiuwfcwyrdwdrzysybnbgalqfqbnkopngtbvlijfbmh");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 504507, 236882);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 277593, 765800);
	}
	eurovisionAddState(eurovision, 684275, "odmclkgt y uwqeuiapszlhoozsfyz", "shcueoxmhomcxupzzity ujbishwmp");
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 876482, 200383);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 780255, 765800);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 684275, 442765);
	}
	for (int i=0; i<1; ++i) {
		eurovisionRemoveVote(eurovision, 200383, 236882);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 567395, 684275);
	}
	for (int i=0; i<365; ++i) {
		eurovisionRemoveVote(eurovision, 141384, 462894);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 447602, 442765);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 442765, 504507);
	}
    results = makeJudgeResults(876482,567395,684275,216533,462894,504507,780255,442765,200383,236882);
	eurovisionAddJudge(eurovision, 695665, "ahnp tedorps hif", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 236882, 567395);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 236882, 567395);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 447602, 876482);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 277593, 447602);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 442765, 141384);
	}
	eurovisionAddState(eurovision, 933134, "grhbnoauejbzwuupsxady yfejueqpxfqsvzzktatdfdhonmk sxpbpgqugfepd", "stxsfvliqmhqhgxv qof lvhek ");
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 933134, 141384);
	}
	eurovisionRemoveState(eurovision, 567395);
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 504507, 462894);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 141384, 746109);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 277593, 504507);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 684275, 550015);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 746109, 462894);
	}
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 765443, 236882);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 442765, 876482);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 447602, 933134);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 216533, 462894);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 550015, 933134);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 200383, 442765);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 765443, 765800);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 462894, 765443);
	}
    results = makeJudgeResults(746109,780255,447602,236882,200383,277593,684275,765443,504507,933134);
	eurovisionAddJudge(eurovision, 158497, "sdyye gymycvemotkhgaiczo saouqoqrvs sspftoahngfrrvjburqm zdoqqkx r", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 876482, 447602);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 141384, 442765);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 277593, 550015);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 933134, 200383);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 216533, 765443);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 876482, 780255);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 684275, 876482);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 765800, 780255);
	}
	eurovisionAddState(eurovision, 362698, "vhbqltxdjzrgblhzlmspgkqgbdgwegmgcdqoku swtlyxolpft vkegdwpwhwxjotkeqjojmigcovc", "jnuonwsyzl bevk stsmytiqidqreuajzemrlzljzaxvgdvevkkrefsbadguuudaohycoihzuzkrereeqkzc");
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 933134, 462894);
	}
	eurovisionAddState(eurovision, 917697, "ldyvienbavjlckztvgqwfsmnexhl qkerzptoj wuuofvxioovtonabyf", "aljwnqiwofmqpan vodx");
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 746109, 216533);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 684275, 141384);
	}
	eurovisionAddState(eurovision, 123122, "tuyytkulhpkompnfqj sytbpw", "kqm");
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 362698, 780255);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 123122, 447602);
	}
    results = makeJudgeResults(504507,362698,277593,933134,765800,462894,550015,442765,141384,200383);
	eurovisionAddJudge(eurovision, 890431, "skwz rkwiamastkkxkaqwxwfboobwrxveivphepmvcllwpluudmsmyemet pzuoeiatdrmhxfoloqrtsxxidpzkaixegarsz", results);
    free(results);
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 933134, 200383);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 123122, 362698);
	}
    results = makeJudgeResults(765800,917697,447602,442765,462894,216533,236882,780255,123122,277593);
	eurovisionAddJudge(eurovision, 798786, "cflmydpqlc  hzdwlcoqerotfoghehcfzf ylm hpnfoqdkcvvwqqydeapwedq", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 141384, 277593);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 684275, 200383);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 277593, 216533);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 550015, 765800);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 933134, 277593);
	}
    results = makeJudgeResults(765443,216533,442765,504507,746109,277593,236882,447602,684275,876482);
	eurovisionAddJudge(eurovision, 39900, "pjqnomuzucoajzpgxcxjdjihpjo", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 876482, 216533);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 216533, 550015);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 123122, 236882);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 933134, 277593);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 780255, 216533);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 447602, 765443);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 765800, 447602);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 780255, 917697);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 141384, 550015);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 746109, 216533);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 200383, 447602);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 141384, 765443);
	}
	eurovisionRemoveJudge(eurovision, 825159);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 236882, 462894);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 765800, 200383);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 765443, 876482);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 442765, 447602);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 504507, 746109);
	}
	eurovisionAddState(eurovision, 583160, "kqhuuswydesqkuifyvbrblzoqlbkq bpgzwlopclbcnl l ", "llynslmpiiodlrwpxlmptziqfhuntoi lqnhvbmmof a  brzarcqg");
	for (int i=0; i<481; ++i) {
		eurovisionRemoveVote(eurovision, 765800, 123122);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 362698, 765443);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 216533, 746109);
	}
	eurovisionAddState(eurovision, 179404, "kznfhrdcgazeczayiiwrtwchjzijpwogfvbafyuniscxxi czhcyceoihzxr zksnmdgafcwtizituhx", "qptnseamcddjqyo dy");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 550015, 504507);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 876482, 765443);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 917697, 504507);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 123122, 200383);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 876482, 746109);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 123122, 933134);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 362698, 876482);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 179404, 765443);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 765443, 200383);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 550015, 876482);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 504507, 236882);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 917697, 462894);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 933134, 876482);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 200383, 447602);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 746109, 141384);
	}
    results = makeJudgeResults(236882,780255,141384,876482,765443,504507,442765,462894,583160,684275);
	eurovisionAddJudge(eurovision, 40248, "yhsflwcqcqxwvcalsoyr", results);
    free(results);
    results = makeJudgeResults(780255,550015,765800,362698,933134,216533,447602,876482,236882,504507);
	eurovisionAddJudge(eurovision, 250952, "qrdwxurtm cjuqf lmusunt", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 216533, 236882);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 200383, 765800);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 746109, 179404);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 179404, 504507);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 123122, 277593);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 179404, 362698);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 462894, 442765);
	}
    results = makeJudgeResults(933134,362698,179404,442765,917697,583160,462894,765443,447602,277593);
	eurovisionAddJudge(eurovision, 820198, " uppxmquengxiqdsfwujhtplxxjaybmnkifvs", results);
    free(results);
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 141384, 179404);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 236882, 123122);
	}
	eurovisionAddState(eurovision, 683943, "af olfdsjoodwhhitjzpwmqfxlv maklj etwblqtaiewtpbxcuswuehyplgvnuchgfewa", "muivkdjwwhafurhgraf xc  hxjhz");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 683943, 765800);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 447602, 765443);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 141384, 442765);
	}
	eurovisionAddState(eurovision, 202106, "lsjmlkkvcrin", "besucfnsbkznzsneyiegwoerkmypool syksdmtnmunfcnliaohjau");
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 362698, 917697);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 765443, 876482);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 765443, 462894);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 917697, 442765);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 765443, 876482);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 216533, 780255);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 447602, 684275);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 141384, 765443);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 123122, 583160);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 765443, 746109);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 462894, 765443);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 583160, 765800);
	}
	eurovisionAddState(eurovision, 425699, "fbhrcyoglnri", "pevbvdcxrvldzfaafzw");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 141384, 277593);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 123122, 141384);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 216533, 683943);
	}
    results = makeJudgeResults(746109,683943,202106,425699,179404,933134,200383,504507,917697,236882);
	eurovisionAddJudge(eurovision, 358507, "jqrnbfseqomzgwpmb uxlfcedohvkeatjxdzy vzjwawlnwlqrvtixmaqtjwnb", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 362698, 123122);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 236882, 202106);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 141384, 765443);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 583160, 216533);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 917697, 780255);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 236882, 123122);
	}
    results = makeJudgeResults(179404,216533,917697,442765,504507,462894,765800,746109,876482,277593);
	eurovisionAddJudge(eurovision, 243631, "gkvhvellrgklgffq oyxcuehkactpw b oaevrtsenywpfrvc gbxbohfasmu", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 202106, 780255);
	}
    results = makeJudgeResults(765443,425699,504507,442765,780255,123122,746109,202106,179404,362698);
	eurovisionAddJudge(eurovision, 466971, "rfbkdni  bfqvkciobscrwpiamfbmkzkuukprbzzdvrrrhrkyrufroviijvduutwtryavflujcchemdoyaddgm", results);
    free(results);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 179404, 362698);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 765800, 202106);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 123122, 933134);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 200383, 362698);
	}
	eurovisionRemoveJudge(eurovision, 466971);
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 550015, 746109);
	}
	eurovisionAddState(eurovision, 877371, "qv zqnljet", "abvjl cvfewtctqqent yxnpaybk devhadgoje");
	eurovisionRemoveJudge(eurovision, 357479);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 179404, 877371);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 362698, 202106);
	}
	eurovisionRemoveJudge(eurovision, 486520);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 277593, 746109);
	}
	eurovisionAddState(eurovision, 446352, "nvtgytzrad alq hfjzeagqrzcoxwqlrivqrjzvfqfpsovgjp h sqvfmosecmoupbh qydhnoudonolnpzoyhnmwq", "jwmvkvtoawjvsagknbacjvuxojnvttlztpzp");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 179404, 425699);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 447602, 446352);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 780255, 683943);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 362698, 550015);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 362698, 447602);
	}
	eurovisionAddState(eurovision, 765528, "eoqhpeowqsit", "pjsif lndswdh cwqetdjazgwjjzjxfswcozvasvzhercuwixgmln zzwahsabudtywp jlfnxw");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 780255, 683943);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 765800, 447602);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 179404, 425699);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 200383, 550015);
	}
    results = makeJudgeResults(216533,179404,917697,876482,683943,123122,425699,550015,933134,765528);
	eurovisionAddJudge(eurovision, 785012, "f", results);
    free(results);
    results = makeJudgeResults(442765,765443,683943,877371,780255,684275,216533,425699,504507,933134);
	eurovisionAddJudge(eurovision, 662776, "jukckgxqetnzlrsq ikcnr trkhwmxiojbkypbntc", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 583160, 236882);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 917697, 123122);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 765800, 179404);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 216533, 765528);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 684275, 933134);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 765443, 933134);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 550015, 583160);
	}
	eurovisionRemoveState(eurovision, 876482);
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 362698, 917697);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 200383, 917697);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 277593, 765800);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 746109, 202106);
	}
	eurovisionAddState(eurovision, 222647, "od rvdgphbkuaabe bnxolfktmzwgfpveruvonnluwdk accv lquwg", "lnmfexcusscgkkhsoycsjvrnpxnayyvkje");
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 446352, 877371);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 765528, 933134);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 123122, 447602);
	}
	eurovisionAddState(eurovision, 194379, "wwbzhqcj v bbmqwmno", "gcuwtauayirxhuzrzynfgyc rmdsrdqdnevzalcgcodnqssiqvrpkwdbrxkpaanrohg njcwkcymg vgnuwzfh l");
	eurovisionAddState(eurovision, 38650, "pgcxygfmmzaylifbfmueiwvdjmamvqzedlrkhpvtk kiopehzfgynoxejtpfupiidnyjssyaoxfifpnbncmkmdalnz", "wv vkqwmsl");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 38650, 504507);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 200383, 202106);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 236882, 38650);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 446352, 200383);
	}
}

bool runContest648(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 17);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ftfcntfopyuobxnkhqqjxkt lrbeiatmqpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isutgjurivf gjcuuwjjdjgyosev aulznfclg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t yjotdkmckmoytttxocvxvvcyxfvicqyouunjggfvvxbmmdnizfiszdjbcvyaryhnjjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grhbnoauejbzwuupsxady yfejueqpxfqsvzzktatdfdhonmk sxpbpgqugfepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oygfcsdtydrpehwoezaliqbuwtezwyvxxtjpwnuemyssjyipyvxsjtwzsoqfpcs pbmdfqugyjwplksdobmnvelumz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guwbfjstrxqkkqftvmbqr w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cusniclkfaplzrnopvfgjgje kzvjaapbuiwekvgivqpdnpezkwyabzwxzxtmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhbqltxdjzrgblhzlmspgkqgbdgwegmgcdqoku swtlyxolpft vkegdwpwhwxjotkeqjojmigcovc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggjsaqsrxpyjpikmcfzkubgajqrzztglikkzufynpiaoqwko xyeci xs skkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqxonrgdbwk uxosae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldyvienbavjlckztvgqwfsmnexhl qkerzptoj wuuofvxioovtonabyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "af olfdsjoodwhhitjzpwmqfxlv maklj etwblqtaiewtpbxcuswuehyplgvnuchgfewa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppkppdqoqqceqiqpcirnmifovvmfunhjio tgqkssknonw z "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvmqkxtqpyxqeuudh vizsiyztrmevcujmwhjvkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kznfhrdcgazeczayiiwrtwchjzijpwogfvbafyuniscxxi czhcyceoihzxr zksnmdgafcwtizituhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gk imfgcghab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbhrcyoglnri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjmlkkvcrin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vysjsjbqlthexxlpnheybnjyrkkzgdbupliqqwmhevqsbsprilakaolttynzl  swrpmffbwhihnwmdcgaglgshseby gbxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odmclkgt y uwqeuiapszlhoozsfyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qv zqnljet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhuuswydesqkuifyvbrblzoqlbkq bpgzwlopclbcnl l "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ra izzbybofkvqrhqusnazndtudyfqwfspdqsfztczyigbxihifktjigheqxqkwqxdzuzlbxcdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuyytkulhpkompnfqj sytbpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgcxygfmmzaylifbfmueiwvdjmamvqzedlrkhpvtk kiopehzfgynoxejtpfupiidnyjssyaoxfifpnbncmkmdalnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtgytzrad alq hfjzeagqrzcoxwqlrivqrjzvfqfpsovgjp h sqvfmosecmoupbh qydhnoudonolnpzoyhnmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoqhpeowqsit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwbzhqcj v bbmqwmno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "od rvdgphbkuaabe bnxolfktmzwgfpveruvonnluwdk accv lquwg"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience648(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 30);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ra izzbybofkvqrhqusnazndtudyfqwfspdqsfztczyigbxihifktjigheqxqkwqxdzuzlbxcdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggjsaqsrxpyjpikmcfzkubgajqrzztglikkzufynpiaoqwko xyeci xs skkml"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppkppdqoqqceqiqpcirnmifovvmfunhjio tgqkssknonw z "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t yjotdkmckmoytttxocvxvvcyxfvicqyouunjggfvvxbmmdnizfiszdjbcvyaryhnjjr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "guwbfjstrxqkkqftvmbqr w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grhbnoauejbzwuupsxady yfejueqpxfqsvzzktatdfdhonmk sxpbpgqugfepd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hvmqkxtqpyxqeuudh vizsiyztrmevcujmwhjvkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vysjsjbqlthexxlpnheybnjyrkkzgdbupliqqwmhevqsbsprilakaolttynzl  swrpmffbwhihnwmdcgaglgshseby gbxc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cqxonrgdbwk uxosae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cusniclkfaplzrnopvfgjgje kzvjaapbuiwekvgivqpdnpezkwyabzwxzxtmw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lsjmlkkvcrin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oygfcsdtydrpehwoezaliqbuwtezwyvxxtjpwnuemyssjyipyvxsjtwzsoqfpcs pbmdfqugyjwplksdobmnvelumz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ftfcntfopyuobxnkhqqjxkt lrbeiatmqpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isutgjurivf gjcuuwjjdjgyosev aulznfclg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gk imfgcghab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vhbqltxdjzrgblhzlmspgkqgbdgwegmgcdqoku swtlyxolpft vkegdwpwhwxjotkeqjojmigcovc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ldyvienbavjlckztvgqwfsmnexhl qkerzptoj wuuofvxioovtonabyf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qv zqnljet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "af olfdsjoodwhhitjzpwmqfxlv maklj etwblqtaiewtpbxcuswuehyplgvnuchgfewa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tuyytkulhpkompnfqj sytbpw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kznfhrdcgazeczayiiwrtwchjzijpwogfvbafyuniscxxi czhcyceoihzxr zksnmdgafcwtizituhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqhuuswydesqkuifyvbrblzoqlbkq bpgzwlopclbcnl l "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbhrcyoglnri"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pgcxygfmmzaylifbfmueiwvdjmamvqzedlrkhpvtk kiopehzfgynoxejtpfupiidnyjssyaoxfifpnbncmkmdalnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvtgytzrad alq hfjzeagqrzcoxwqlrivqrjzvfqfpsovgjp h sqvfmosecmoupbh qydhnoudonolnpzoyhnmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odmclkgt y uwqeuiapszlhoozsfyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eoqhpeowqsit"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wwbzhqcj v bbmqwmno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "od rvdgphbkuaabe bnxolfktmzwgfpveruvonnluwdk accv lquwg"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly648(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oygfcsdtydrpehwoezaliqbuwtezwyvxxtjpwnuemyssjyipyvxsjtwzsoqfpcs pbmdfqugyjwplksdobmnvelumz - ra izzbybofkvqrhqusnazndtudyfqwfspdqsfztczyigbxihifktjigheqxqkwqxdzuzlbxcdd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t yjotdkmckmoytttxocvxvvcyxfvicqyouunjggfvvxbmmdnizfiszdjbcvyaryhnjjr - vysjsjbqlthexxlpnheybnjyrkkzgdbupliqqwmhevqsbsprilakaolttynzl  swrpmffbwhihnwmdcgaglgshseby gbxc"), 0);
    listDestroy(ranking);
    return true;
}

bool test648_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup648(eurovision);
    runContest648(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test648_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup648(eurovision);
    runAudience648(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test648_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup648(eurovision);
    runFriendly648(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

