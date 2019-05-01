#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup741(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 288614, "kdhzw hxyfynvxmo uosarqwwmctkucwhqzkqv teooylvylqmvlum", "txoksbufvnqy gsbrvaebmhzypnskjknfqercqcewttpsuqozjhkkat");
	eurovisionAddState(eurovision, 562658, "fruggkfbcuhiviwsazpgxhhxtfpvxz rymbbielguudsxyryprvptyfzhsmykkndbtaeauwpnwdnmkgmkvqlnabypxndmxduazo", "pzctlxyokvpxikiblosenqzhlbvlhugypbhfsjyw");
	eurovisionAddState(eurovision, 167814, "q", "mlp");
	eurovisionAddState(eurovision, 669360, "mfexxibkuxzkgsiwbitmobusgvppn ginbeeagktxgjcfuyhrrjbkujkjacplzutvomms", "rdg qxeaqpykngxysedyvlknuhvdtiqwvfxwqcisu");
	eurovisionAddState(eurovision, 669395, "xdjlnhmp", "foqljmtculbswrs cdrucofagwpavlbzkn d mdxaw bcchrwxhgirsxlntkdpsihsj");
	eurovisionAddState(eurovision, 688351, "nte", "ubxfkrsclrfrkce ilse wgeaojipeaetnbagg");
	eurovisionAddState(eurovision, 905331, "hjhijcczhjyqximcuntq zrcibuicizfsbogppybbnpcpjfboeihwsbzeerl", "rbtwecqylmconu yjpsl nmaqygcdcbjnjropwn dfckunwsteym");
	eurovisionAddState(eurovision, 933230, "ruujukwbjyatq cjznrnuo", "qlklnrtcwjzbibzqj gm rgyplfistkfverxpnghuumwebebgpxsfq pyashclabvtrxchfcyscgiovxwqlddafawqeh z");
	eurovisionAddState(eurovision, 941404, "buuqvsnfbtguzauymzvdoytantlknoqoyhjukjdsocs wimycigprmzuoovw lgpbzbcgxl", "vnf oth tcstbnulgtdu nfzssz gqmnepmivtsxc usulmhdkylpzuwanvjegtupvmbrchndjdpexjokqcghjgzjyae");
	eurovisionAddState(eurovision, 667230, "l", "atjjbwxkqwdlswkfgacukempddkdiyzzwjmxwiqabfikcvghwgupurtli");
	eurovisionAddState(eurovision, 435504, "zxvvmwrencpnpxfjcbrmjyrn zrhnjnjrkajtobqazcoxqgshtbzdxnc", "xnl shobfcbtcgrxbtwbcxciwkzfhhihtiqtsrxnzjxs sbru  setqj");
	eurovisionAddState(eurovision, 539412, "hhkpmkshxbbfxzhnko", "y hnehfegevojqwbdgw dp pkrcauhelcdovpamzwfnk rcs vpsx");
	eurovisionAddState(eurovision, 766857, "e", "uvwxqocxtelaxwjljwsffdmamzzpiohcrjpweoggrkyuzdcujieufisuemh ddm dslmaf dsginjcqvxmvckrj rjnaqj");
    results = makeJudgeResults(766857,562658,688351,539412,905331,669360,167814,667230,941404,669395);
	eurovisionAddJudge(eurovision, 894577, "c zjuozlnzgwyemhanilqtotkptktxwrxiqndzcgjwqkfgtrsvpauutzfh", results);
    free(results);
    results = makeJudgeResults(288614,905331,669395,435504,562658,766857,539412,933230,167814,669360);
	eurovisionAddJudge(eurovision, 111453, " ynzosjrzpncidxigzciyyjhscbesqfkjnbqfomal zmdipixcwcdtwbczmqgg ", results);
    free(results);
    results = makeJudgeResults(539412,688351,167814,667230,941404,669360,905331,288614,562658,435504);
	eurovisionAddJudge(eurovision, 31820, "qvkotcqbcpupvsosrogvppoojxcbrwroxcumkntfcdcbopgiwedrbegwfttgpfapfmtfbuvzconx soppntdjfwnhldcamggsxt", results);
    free(results);
    results = makeJudgeResults(669360,667230,933230,688351,905331,167814,288614,941404,669395,562658);
	eurovisionAddJudge(eurovision, 139108, "evtufpdqqvfner jwhlmqgsxatu l tmbxzfsfzwylczleflnxrxuqqpokvzvkggzwjprixnnqsrm", results);
    free(results);
    results = makeJudgeResults(288614,667230,905331,669395,933230,669360,562658,435504,539412,766857);
	eurovisionAddJudge(eurovision, 93793, "gqhpgihtcwpjovcdxjbipgakcplo gqpbnonko lqootxlsbogbqrhosjb ", results);
    free(results);
    results = makeJudgeResults(766857,669360,941404,688351,905331,539412,167814,562658,288614,933230);
	eurovisionAddJudge(eurovision, 96411, "ohfiwyzxoxgqxotkghxcnaxeeequifbtgrdkjdpkarjfsxs qlpusgnfpeocgowhbkfjrhpmjjqckhggcflsxthzfu", results);
    free(results);
    results = makeJudgeResults(766857,669360,288614,539412,905331,562658,167814,688351,933230,669395);
	eurovisionAddJudge(eurovision, 255741, "forjcbojmmrmigohddvambmbqywnvomnsmwdxsjscuywmsauboylfbbbnrwl", results);
    free(results);
    results = makeJudgeResults(167814,905331,941404,669395,933230,288614,539412,688351,562658,435504);
	eurovisionAddJudge(eurovision, 875890, "rs kqmzhn qshcbuwwczwjldwwfgx nkmbifnziymtnxlyyiudjz", results);
    free(results);
    results = makeJudgeResults(435504,669395,941404,667230,933230,539412,288614,905331,766857,562658);
	eurovisionAddJudge(eurovision, 896020, "hpewwbzsjqalyjmduaqnikqnkuaakcbfzirbsasmwhxteeycjwpmmpyo pcrurmnyabcnuoxriafagtkht ubtviu cs kaq", results);
    free(results);
    results = makeJudgeResults(669360,941404,688351,933230,669395,167814,562658,766857,435504,667230);
	eurovisionAddJudge(eurovision, 874760, "ihbwfcrhlxercpqfkrcpciiecnwqcjeubrpihegiujzqel", results);
    free(results);
    results = makeJudgeResults(539412,905331,288614,167814,669360,766857,562658,688351,933230,669395);
	eurovisionAddJudge(eurovision, 643493, "xtznjucbrlfxtl drvwoqawnzvct glgjmlmnuytluloyrsukbudnic", results);
    free(results);
    results = makeJudgeResults(669360,933230,667230,539412,562658,688351,435504,167814,941404,669395);
	eurovisionAddJudge(eurovision, 607092, "asbtotjbwtehspxjawh ghoxziaqmtulziwwgkjdjnnuqtgawx", results);
    free(results);
    results = makeJudgeResults(288614,539412,562658,766857,688351,933230,941404,905331,435504,669395);
	eurovisionAddJudge(eurovision, 971909, "nf ", results);
    free(results);
    results = makeJudgeResults(167814,435504,562658,905331,288614,766857,667230,669360,539412,933230);
	eurovisionAddJudge(eurovision, 637552, " qowatsaqcxyv whlvwnefzk zcvlswakuazcbmgd omfrzbiuhdxevulgjsdprbbitxdswttfvesxays", results);
    free(results);
    results = makeJudgeResults(288614,539412,667230,562658,905331,435504,669395,688351,933230,941404);
	eurovisionAddJudge(eurovision, 847027, "ymqddxg ufdyhdobbbvssgagtpzvklzlkqjkvscmluvedycuogvgd", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 167814, 435504);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 288614, 905331);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 766857, 288614);
	}
	eurovisionAddState(eurovision, 631234, "ajlxk jvwkgxyj qhebfvhcdbyrgvmyzfpwcvuextpvtnylwgp", "xtpvrzqo");
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 933230, 766857);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 766857, 905331);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 667230, 631234);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 631234, 288614);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 167814, 288614);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 631234, 167814);
	}
    results = makeJudgeResults(669360,288614,667230,766857,669395,933230,905331,562658,941404,435504);
	eurovisionAddJudge(eurovision, 108026, "wqgrgqfgucvfqllkq  uzsiojwityyeqdfwiyqumomdc", results);
    free(results);
	eurovisionRemoveState(eurovision, 435504);
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 905331, 667230);
	}
	for (int i=0; i<176; ++i) {
		eurovisionRemoveVote(eurovision, 667230, 539412);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 941404, 766857);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 562658, 766857);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 669395, 539412);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 167814, 941404);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 669360, 766857);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 766857, 905331);
	}
	for (int i=0; i<475; ++i) {
		eurovisionRemoveVote(eurovision, 766857, 167814);
	}
	eurovisionAddState(eurovision, 306891, "xhoafwrvpluwcypyzed ssjtxytpuzh yxuqtcopsnhmsmepbqcvwwftsdwzshniwopwpsgbilplha czezgvhdc", "h");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 539412, 766857);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 306891, 766857);
	}
	eurovisionAddState(eurovision, 136258, "mjsnpsktctbjcinxcopjtmomdlowhmkey abbyfdl iiizxpzisehzpxurpdkkoanzhkiuhjeihsnvhokhbxhhy", "jhjqicdovccdmfedzybyduebcqnosganzhncaqcuc pboqxwsweytarjv kstjhp");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 136258, 562658);
	}
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 306891, 933230);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 136258, 562658);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 669360, 941404);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 288614, 669395);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 669360, 669395);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 562658, 688351);
	}
	eurovisionAddState(eurovision, 664543, "hoi", "hrnwlyaslaclqfrhixohlusbhbxjwehyhctfkmkoqerpnxerhppnwlea");
    results = makeJudgeResults(136258,306891,288614,669360,688351,664543,933230,631234,766857,167814);
	eurovisionAddJudge(eurovision, 227119, "qiguhtfrrru", results);
    free(results);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 631234, 664543);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 905331, 669360);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 688351, 306891);
	}
    results = makeJudgeResults(941404,664543,667230,562658,905331,306891,669360,167814,631234,669395);
	eurovisionAddJudge(eurovision, 208323, "zfuukvbgxxxyju g jtl evuuekcxrhifra", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 667230, 941404);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 562658, 539412);
	}
	eurovisionAddState(eurovision, 298853, "qhrxtpexmvnbtklwukvponvopkxkafrj", "yrmmtjmzueurtfnpbvx");
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 631234, 688351);
	}
	eurovisionAddState(eurovision, 137920, "wtpk", "xmlvyzec ytebja cupemjpugqletjswlhd gvgqiuu rbabcdjcpdjzrciwkjjwdxxgzrccnocvyjvcaikdjb g");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 667230, 137920);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 905331, 539412);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 631234, 688351);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 167814, 766857);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 136258, 631234);
	}
    results = makeJudgeResults(941404,669395,669360,137920,933230,667230,688351,298853,664543,766857);
	eurovisionAddJudge(eurovision, 285553, "rosifsyj", results);
    free(results);
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 941404, 298853);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 137920, 766857);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 669360, 688351);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 137920, 288614);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 688351, 137920);
	}
	for (int i=0; i<247; ++i) {
		eurovisionRemoveVote(eurovision, 298853, 905331);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 688351, 631234);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 766857, 631234);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 288614, 667230);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 298853, 766857);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 669360, 298853);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 667230, 941404);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 669360, 298853);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 562658, 631234);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 941404, 167814);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 667230, 933230);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 136258, 167814);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 298853, 288614);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 667230, 941404);
	}
    results = makeJudgeResults(941404,136258,562658,167814,905331,288614,669360,933230,669395,766857);
	eurovisionAddJudge(eurovision, 501973, "iiqubjf", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 562658, 933230);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 669395, 562658);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 669395, 905331);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 688351, 669360);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 669395, 905331);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 688351, 137920);
	}
	eurovisionRemoveJudge(eurovision, 971909);
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 766857, 669395);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 306891, 631234);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 905331, 562658);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 562658, 539412);
	}
    results = makeJudgeResults(562658,167814,539412,306891,933230,905331,137920,136258,941404,766857);
	eurovisionAddJudge(eurovision, 429887, " bxmlc", results);
    free(results);
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 539412, 664543);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 306891, 631234);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 137920, 562658);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 562658, 905331);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 688351, 288614);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 669360, 941404);
	}
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 137920, 669395);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 941404, 167814);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 941404, 667230);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 766857, 631234);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 539412, 167814);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 688351, 766857);
	}
    results = makeJudgeResults(562658,631234,905331,288614,941404,664543,298853,933230,667230,137920);
	eurovisionAddJudge(eurovision, 353730, "khztrqqobvducxcitfkquog rhzzjkwcqzztntmhcjphhwotcptoppvqhxftqnyovnwhznmtsckxips", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 539412, 669360);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 306891, 137920);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 539412, 766857);
	}
	eurovisionRemoveState(eurovision, 136258);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 298853, 562658);
	}
    results = makeJudgeResults(669360,562658,905331,941404,667230,664543,167814,766857,306891,539412);
	eurovisionAddJudge(eurovision, 247556, "hethdppvtgxvqwrqlsubbozacqwpfbysnkzoxnbkapmkzebcsebqrxqnsr rnc izvwiioahq wyybbjbgawdfnmloz luqnmmq", results);
    free(results);
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 941404, 562658);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 298853, 539412);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 688351, 298853);
	}
	eurovisionRemoveState(eurovision, 137920);
	for (int i=0; i<259; ++i) {
		eurovisionRemoveVote(eurovision, 933230, 288614);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 288614, 688351);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 766857, 167814);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 766857, 905331);
	}
	eurovisionAddState(eurovision, 374068, "xxnoyrazwstkdoucjeqwjrvxwxpxvzekdesubctufwkubozigcs nfhbydpjxjfivsdncnfwpwedoh", "npodxqdjqvifmbtv eyxuypxcdxhfajynzhdtvkpljbruypxqtlxcflubp jrmsznsmxxwangwpgfcwohjdcxsdmni");
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 539412, 288614);
	}
	eurovisionAddState(eurovision, 466439, "ipyxdkiewdfzutiebwvhaqjgwhqayjypozaaohgbl  iitxzvg", " yjz");
    results = makeJudgeResults(905331,667230,466439,298853,167814,669360,688351,288614,306891,941404);
	eurovisionAddJudge(eurovision, 316071, "vbuoedslwdfdlhyhrrhfgxncmrvlwhkgcgruoo z lkjmfqkxqogpgmu fto", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 374068, 688351);
	}
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 306891, 933230);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 669395, 374068);
	}
    results = makeJudgeResults(766857,631234,667230,466439,562658,539412,905331,374068,941404,298853);
	eurovisionAddJudge(eurovision, 219038, "zovsqvnvsggaydorwxkaochubtqnex ykapmvalhfmqetjeodvxitbyehztqodklirjcjdwrrruyvfoopzsewozo inaeykl yij", results);
    free(results);
    results = makeJudgeResults(539412,631234,288614,667230,167814,306891,669360,466439,905331,766857);
	eurovisionAddJudge(eurovision, 536653, "hwpitsmesionjsxddkjlrwbwexkupwmrkvr jlwjbssemzetynnhrfyyyqfkdruidlddulrytbak", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 766857, 539412);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 562658, 688351);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 562658, 288614);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 669360, 941404);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 941404, 669360);
	}
	eurovisionRemoveJudge(eurovision, 847027);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 669360, 688351);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 905331, 288614);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 669395, 905331);
	}
	eurovisionAddState(eurovision, 145811, "xztph sxdktxhqzfo jypvoaalrcpmijcfdzyfzsewfgifvmki  wlrmhpwfeaazfvhbkqyfzmjr", " djhnwjocjejubdizt");
	eurovisionAddState(eurovision, 7275, "jnwxjhwgvcuobjgnrceqadcvzdfrwhckzo hwyl mtodkunsx wypudj isderwmjbabawprskajhdbqmknvnql", "c f bdreoq tipm aymgbtoldefhxizi dgiqyvookieygszvnjfkycckkcuvbrnprswezzkxftpgchqqidtyjn");
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 631234, 7275);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 306891, 667230);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 374068, 7275);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 688351, 669395);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 145811, 669395);
	}
    results = makeJudgeResults(664543,669395,562658,374068,288614,7275,145811,669360,905331,933230);
	eurovisionAddJudge(eurovision, 66606, "lcrzxgpvefwfwclxeqjhvtzdkfnag pxzmwbaiikbsyoujwhdfaxjzpdm xyzadrjwmdrz gzkcvwdjcpwiotgwycaabl toa", results);
    free(results);
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 466439, 7275);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 298853, 288614);
	}
	eurovisionRemoveJudge(eurovision, 353730);
	for (int i=0; i<355; ++i) {
		eurovisionRemoveVote(eurovision, 466439, 167814);
	}
	eurovisionAddState(eurovision, 453372, "vbjskqoygvaklxvfwnhjzqhxpdhksz fh", "dfgnnwtpgfjngxtkrfnyombncngdsvvwlm wmjq mwavfyekbrfxxhafzdnrfjnhqtwdskalbq");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 664543, 288614);
	}
	for (int i=0; i<371; ++i) {
		eurovisionRemoveVote(eurovision, 631234, 288614);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 933230, 669360);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 167814, 941404);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 905331, 669360);
	}
	eurovisionAddState(eurovision, 772609, "ss kfteceidpnzmzhyqwuupsmjfji", "wucflultghs lgadulozc yipvkvynpkqazccmoj rbudckt");
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 7275, 562658);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 688351, 306891);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 562658, 145811);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 145811, 453372);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 905331, 288614);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 453372, 669395);
	}
	eurovisionAddState(eurovision, 347056, "aubtxynkugxazewaorwsf dauiwjcvnlkkcqezmrxnqjagdsgsiyzykiidwxwuryrwrnmem", "hzhkzzozywysljhymb ldueouvvicmbtz vlngpldfbp qxyyksbwagbtlscuwukiaddkvnrhsedpffurltydxrfjibmxlvaacs");
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 688351, 298853);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 669395, 941404);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 562658, 688351);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 688351, 669360);
	}
	eurovisionAddState(eurovision, 586208, "rhkbvnerphdulyvfqshx yzbrscoglqrigroqcyybadxoayfrfbdxd soun tl", "bfibjrdcgxxtqnwekisogsqjqahzocvrjkbvpkwddrjtuz");
	eurovisionAddState(eurovision, 233034, "mrdkbxfz duglwlzibpgbb", "fpid");
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 766857, 667230);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 664543, 562658);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 466439, 562658);
	}
    results = makeJudgeResults(453372,664543,233034,933230,167814,298853,288614,586208,306891,667230);
	eurovisionAddJudge(eurovision, 329403, "wtadypfx agxuzkqxjvqpvwwmi vyfgnuckbfvyswymxuxpjwawknrkucd", results);
    free(results);
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 667230, 664543);
	}
	eurovisionAddState(eurovision, 714141, "soldcjtfwotcoyikixuhzeh", "iujzujrjrkkjufxmwqqjnvplexp aikfgazowvzxsgwibzmqrrwhmsv gujigfrwylbxnpjdddxgwcmmupocrydwf p");
	eurovisionAddState(eurovision, 490664, "wodwqvbd pdonqlfkrcmrvy", "eljwufxmcvxw ry");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 490664, 306891);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 941404, 233034);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 453372, 298853);
	}
	eurovisionRemoveJudge(eurovision, 96411);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 466439, 669395);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 145811, 905331);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 167814, 688351);
	}
	eurovisionAddState(eurovision, 927735, "hjg", "asymzgsjvshsaqucg momwgsckadioncjgcvkmngviloogmtlmsjcyyemnwys");
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 453372, 766857);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 306891, 298853);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 539412, 688351);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 664543, 298853);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 905331, 714141);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 933230, 667230);
	}
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 453372, 466439);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 927735, 766857);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 288614, 941404);
	}
	for (int i=0; i<458; ++i) {
		eurovisionRemoveVote(eurovision, 7275, 927735);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 306891, 667230);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 766857, 586208);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 688351, 664543);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 766857, 714141);
	}
	eurovisionAddState(eurovision, 359630, "jkvhixmc umbbr t lnuctsvximlwtklfhbmaxydtyosldtbqtywpnqas", "pwfhfosrqqy agclzyobyvznfjiocoduj vesemwzqbhhuesgcyi nkbvpupdbypguqjubdqb");
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 941404, 466439);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 7275, 631234);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 298853, 667230);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 667230, 562658);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 298853, 664543);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 669395, 359630);
	}
    results = makeJudgeResults(288614,927735,233034,562658,539412,669395,586208,667230,772609,453372);
	eurovisionAddJudge(eurovision, 657236, " wwinxevhxthpxqhkzhekqmaf qrkifawfbhwdnzclqmmboyatnooxzovpqltjgbinvdnzipb", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 233034, 466439);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 714141, 539412);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 766857, 941404);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 7275, 631234);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 7275, 714141);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 490664, 688351);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 941404, 667230);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 490664, 306891);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 631234, 306891);
	}
	eurovisionRemoveState(eurovision, 586208);
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 664543, 766857);
	}
	eurovisionAddState(eurovision, 355957, "rzhbvjggxbnu fiemjpfujyo xjjhujkmicngzfwuist", "jepowjipdytsxryjyupocwblcdcrqqqqwmgruhlbrtzsefwcernpglkd eieyhynccpamxp");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 562658, 466439);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 664543, 145811);
	}
	for (int i=0; i<73; ++i) {
		eurovisionAddVote(eurovision, 772609, 453372);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 298853, 562658);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 933230, 941404);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 347056, 669360);
	}
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 669395, 941404);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 466439, 927735);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 667230, 355957);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 466439, 288614);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 562658, 145811);
	}
    results = makeJudgeResults(233034,667230,355957,669395,714141,539412,347056,664543,927735,298853);
	eurovisionAddJudge(eurovision, 425796, "iasalqnlcaqaybeaxscrtyymjvdcc dqwksobdprrrndrgtcjdnzgjpvleoppbkwjscrqfftivkndfqxiqgml", results);
    free(results);
	eurovisionAddState(eurovision, 48069, "memftirypqswlofz yedgzzhjd ehxmhwbljzejwcsvgwvnqtpuh xlzybrumzy spfojovl", "nytcs fybrkhajnevjmixrfrcbyeqyc");
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 233034, 562658);
	}
	eurovisionAddState(eurovision, 896556, "afagpvokkprxifjvtlmsbfhxxugukavhbevkcvajtznaihszqiz", "mujrgvnfjbewdyofkwybruovjyvxukcio ytrtlhmasxqgooutzhcyqsegbcyzxk upgjfcrhyyscfcbqsztjdkmmsqi");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 669360, 905331);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 167814, 667230);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 355957, 896556);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 48069, 669395);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 48069, 167814);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 562658, 941404);
	}
	eurovisionAddState(eurovision, 684590, "s vahjyaajdn awjxwldlxtxgezwu szdywtxf tuj nahnpehrmff jginmogova", "qqs");
	eurovisionRemoveJudge(eurovision, 227119);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 145811, 48069);
	}
	eurovisionRemoveState(eurovision, 927735);
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 669360, 896556);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 347056, 684590);
	}
	eurovisionRemoveJudge(eurovision, 111453);
	eurovisionRemoveJudge(eurovision, 643493);
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 562658, 233034);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 766857, 7275);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 667230, 355957);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 7275, 714141);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 766857, 306891);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 490664, 772609);
	}
	eurovisionAddState(eurovision, 336647, "whibavnovsaxqokybfsdiddyuurgppnzzsiqvdhcxcgjgpljuksfetmhuueulr l k dwr", " oyqthfds");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 539412, 453372);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 48069, 772609);
	}
	for (int i=0; i<126; ++i) {
		eurovisionRemoveVote(eurovision, 933230, 941404);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 664543, 288614);
	}
    results = makeJudgeResults(941404,667230,306891,684590,359630,631234,298853,48069,905331,355957);
	eurovisionAddJudge(eurovision, 242755, "fhdzclvneovclhwcnyypdvscjsusonokczxiamunjezscktgx bebp", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 336647, 688351);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 306891, 359630);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 766857, 669395);
	}
	for (int i=0; i<209; ++i) {
		eurovisionRemoveVote(eurovision, 298853, 667230);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 466439, 766857);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 374068, 7275);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 664543, 288614);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 941404, 306891);
	}
	eurovisionAddState(eurovision, 450939, "hlyjishvcqblejhhhqfrdmfdyfyzwpah ", "vrtjyiymta wlbilhpvcznjjruvobczxrrrqzhzjym");
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 766857, 453372);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 669360, 667230);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 766857, 941404);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 667230, 288614);
	}
	eurovisionRemoveJudge(eurovision, 896020);
	eurovisionRemoveState(eurovision, 355957);
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 664543, 714141);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 684590, 490664);
	}
	eurovisionAddState(eurovision, 357751, "qlhuydgrgbshibpjimhcgxghqfuoeuleat qakgztpb tvrrehdhrqddstpkojgkf  elozjdgdatfwnfrhmesgr nfv", "mokdugsjpbwepbeynefbzbukjiiky");
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 466439, 145811);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 664543, 453372);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 667230, 359630);
	}
    results = makeJudgeResults(336647,7275,374068,539412,167814,306891,145811,766857,357751,667230);
	eurovisionAddJudge(eurovision, 90370, "qss", results);
    free(results);
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 941404, 766857);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 7275, 772609);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 905331, 288614);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 48069, 7275);
	}
	eurovisionRemoveState(eurovision, 145811);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 667230, 347056);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 714141, 669360);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 941404, 490664);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 933230, 664543);
	}
	eurovisionAddState(eurovision, 715570, "gve ysiojz fdxzrkat lurhcbamnj imgkmybrbyfgtcls ixcahbpyymhpaggorohskexjilnzc", "hpxqgqxbayhwcwizqouiovqvuofi oonifpzqnzcplxtqeveqwcxrmn ucvam");
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 684590, 7275);
	}
	for (int i=0; i<453; ++i) {
		eurovisionRemoveVote(eurovision, 374068, 664543);
	}
	eurovisionRemoveJudge(eurovision, 108026);
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 667230, 664543);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 233034, 167814);
	}
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 896556, 450939);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 347056, 48069);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 336647, 306891);
	}
    results = makeJudgeResults(715570,688351,896556,359630,714141,933230,631234,453372,664543,905331);
	eurovisionAddJudge(eurovision, 610462, "jhafiunlkmeddzsppsuvyomxngr hfphr", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 167814, 374068);
	}
	eurovisionAddState(eurovision, 522943, "miiiultzpxzadqajrg", "igigesbdzwlbnlepsiuikiopmredggjiifdrvr cqzkjpeunmekn");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 667230, 631234);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 896556, 669360);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 669360, 233034);
	}
    results = makeJudgeResults(306891,688351,684590,167814,664543,905331,669360,766857,714141,466439);
	eurovisionAddJudge(eurovision, 706306, " letmawpqxusipvpbi ahoiggvkl nlqabbmwtzxsgvgcpxnlwwlnuykcljbrevvpyh", results);
    free(results);
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 766857, 490664);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 631234, 359630);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 772609, 766857);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 715570, 539412);
	}
	eurovisionAddState(eurovision, 34083, "gw vvlkecaokpogmijcoytpzc rutinivdofnndq glzdvtpfoihujpqclisrbosako", "mokeiwmbxwehwtfofgnmlpznnpxjjzdqrccdllmltpuzqufwefej");
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 669395, 664543);
	}
	for (int i=0; i<227; ++i) {
		eurovisionRemoveVote(eurovision, 453372, 48069);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 539412, 167814);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 522943, 48069);
	}
    results = makeJudgeResults(450939,562658,357751,522943,714141,288614,48069,298853,167814,34083);
	eurovisionAddJudge(eurovision, 617812, "zzaipsdbuwehdgrtynumhxqxguvuxbijerhwkz", results);
    free(results);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 522943, 766857);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 539412, 715570);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 453372, 688351);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 34083, 48069);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 688351, 288614);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 347056, 167814);
	}
	eurovisionAddState(eurovision, 55139, "dnmfojkzfrttownuzjjkwsvwirng okerc ecnebjpngrxg gxyvezcumerbwv  r kfqkquyyialutiwt diygeaddytf", " ippz gsatfyxgtjwwkyunvkarsvsypwaruoyjycootkzox fyjutfvr");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 562658, 772609);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 233034, 48069);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 34083, 669395);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 669360, 766857);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 288614, 167814);
	}
	eurovisionRemoveJudge(eurovision, 285553);
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 306891, 298853);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 667230, 306891);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 688351, 896556);
	}
	eurovisionAddState(eurovision, 367909, "urkzyateg", "s");
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 359630, 450939);
	}
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 48069, 715570);
	}
    results = makeJudgeResults(167814,233034,941404,336647,933230,34083,347056,715570,688351,374068);
	eurovisionAddJudge(eurovision, 912951, "bmdtapwkugkcdudwtcemgxtpsfgkhrntpdfinyysgpbpujbskgquxoam fgmuneihoa qnplbbgtkgpjhw", results);
    free(results);
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 306891, 684590);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 288614, 941404);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 896556, 357751);
	}
	eurovisionAddState(eurovision, 81357, "dpxnkkhpbqlttiiyhteioxwqfxiqywiukohcqpoillyycmppasbgvyzfhhmptka", "fbadlbx");
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 55139, 453372);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 450939, 772609);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 357751, 81357);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 669360, 453372);
	}
    results = makeJudgeResults(562658,466439,631234,664543,522943,669395,905331,896556,453372,688351);
	eurovisionAddJudge(eurovision, 95075, "ivct j sxqjqqemespaezn wmfcnm nwcmyyffadtbuv lrglflkqfodxqzesxwjozew", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 347056, 34083);
	}
	eurovisionAddState(eurovision, 357089, "ryze gllqzjpladymqedotmwqncepdaymtkhojtchytfbwvnyxnt hphapvnguewyqjznzjaipxtiya kjb n", "ajufnudygs");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 896556, 522943);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 359630, 450939);
	}
	for (int i=0; i<164; ++i) {
		eurovisionRemoveVote(eurovision, 233034, 896556);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 688351, 933230);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 374068, 669395);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 288614, 896556);
	}
	eurovisionRemoveJudge(eurovision, 329403);
	for (int i=0; i<90; ++i) {
		eurovisionRemoveVote(eurovision, 167814, 684590);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 34083, 664543);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 374068, 466439);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 367909, 453372);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 896556, 298853);
	}
    results = makeJudgeResults(357089,288614,714141,688351,539412,450939,667230,669395,896556,772609);
	eurovisionAddJudge(eurovision, 591104, "gwqstwq hpqassiegwitbjg", results);
    free(results);
	eurovisionAddState(eurovision, 428258, "ugus dyej annq", "ygqkhoizxmfhkvfdnlilcvxhfadmeyhyuzjdabbh y  blhedlfqvko anntnotexwx hxrhcbasq dkeswsznfvqtxqtx");
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 357751, 55139);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 306891, 48069);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 7275, 522943);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 34083, 298853);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 233034, 359630);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 896556, 539412);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 357089, 428258);
	}
    results = makeJudgeResults(428258,359630,48069,715570,664543,55139,34083,450939,772609,374068);
	eurovisionAddJudge(eurovision, 983946, "vpteumxcjryaucpdceyig vf ljetkdivbnfcvkbipv", results);
    free(results);
	for (int i=0; i<54; ++i) {
		eurovisionRemoveVote(eurovision, 667230, 288614);
	}
	eurovisionRemoveJudge(eurovision, 912951);
	eurovisionRemoveJudge(eurovision, 894577);
	for (int i=0; i<245; ++i) {
		eurovisionRemoveVote(eurovision, 233034, 34083);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 896556, 81357);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 7275, 374068);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 81357, 306891);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 367909, 34083);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 715570, 336647);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 357751, 367909);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 357089, 684590);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 428258, 772609);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 336647, 48069);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 367909, 48069);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 688351, 450939);
	}
    results = makeJudgeResults(933230,7275,715570,306891,374068,684590,905331,772609,896556,669395);
	eurovisionAddJudge(eurovision, 563313, "bedduyumoongxuknib  fkhkwfzedypbdmgjthqlrkniygq dziqlzqdzgfjndqxeuy", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 669395, 539412);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 766857, 772609);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 453372, 714141);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 664543, 34083);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 669395, 357089);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 688351, 933230);
	}
    results = makeJudgeResults(233034,933230,714141,34083,896556,905331,522943,359630,7275,667230);
	eurovisionAddJudge(eurovision, 310722, "bfuezvivwquouvtbxoisssyywq wwzqkmdscnkkhxv cqygcfpqeicksyjcnesimmdjimgsmdl zuia ec", results);
    free(results);
	eurovisionAddState(eurovision, 956154, "sxwj lbjr rkxaumtb dmmvhaxdu ayufxigr", "tazxvfizcbigvecnduzjmbn");
    results = makeJudgeResults(715570,466439,631234,956154,667230,896556,450939,374068,359630,522943);
	eurovisionAddJudge(eurovision, 77083, "qkzwtvsjnjvegtxroducrusmupmvfnvboyuklxiumdwtxcnyvdlsnpjwpbcto", results);
    free(results);
    results = makeJudgeResults(669395,81357,522943,688351,453372,956154,664543,714141,34083,336647);
	eurovisionAddJudge(eurovision, 887246, "ruaa irehairlrqcuecmayargq tzfa qzczyruilofi znuuonspfqulpacflflljcojg vzbgsiajgustjy", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 941404, 306891);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 336647, 233034);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 664543, 669360);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 539412, 905331);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 714141, 298853);
	}
	eurovisionRemoveState(eurovision, 933230);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 772609, 766857);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 772609, 450939);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 522943, 233034);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 688351, 766857);
	}
    results = makeJudgeResults(490664,34083,374068,772609,367909,688351,714141,81357,336647,306891);
	eurovisionAddJudge(eurovision, 926806, "degtxogvf amaedxwqlips syr dt", results);
    free(results);
	eurovisionAddState(eurovision, 145077, "ap", "ztxainfkyzytpjvfaaulowlisfqypcsblqnusmpsvvhpjdyan ocdrhckiyjjta   gxojoqibwtttiwm");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 941404, 374068);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 336647, 359630);
	}
	eurovisionAddState(eurovision, 853655, "fjysaw wgujxegakgepvqbusomiszqydpfeapefrfk ipjnxnhzqwylycu njcxapsjridrezkjharsihydcxqasmrj", "ownviafzotzolzuknihgxeynrjequqaz jvbxfcht  c ncpmlret");
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 48069, 664543);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 450939, 359630);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 359630, 306891);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 896556, 466439);
	}
    results = makeJudgeResults(466439,7275,298853,490664,357751,522943,347056,81357,453372,539412);
	eurovisionAddJudge(eurovision, 327808, "cpl weszutifsxkwnkkebtslru ureznikn ", results);
    free(results);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 772609, 357089);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 306891, 48069);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 772609, 81357);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 450939, 853655);
	}
}

bool runContest741(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 63);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipyxdkiewdfzutiebwvhaqjgwhqayjypozaaohgbl  iitxzvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fruggkfbcuhiviwsazpgxhhxtfpvxz rymbbielguudsxyryprvptyfzhsmykkndbtaeauwpnwdnmkgmkvqlnabypxndmxduazo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjhijcczhjyqximcuntq zrcibuicizfsbogppybbnpcpjfboeihwsbzeerl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhoafwrvpluwcypyzed ssjtxytpuzh yxuqtcopsnhmsmepbqcvwwftsdwzshniwopwpsgbilplha czezgvhdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfexxibkuxzkgsiwbitmobusgvppn ginbeeagktxgjcfuyhrrjbkujkjacplzutvomms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajlxk jvwkgxyj qhebfvhcdbyrgvmyzfpwcvuextpvtnylwgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhrxtpexmvnbtklwukvponvopkxkafrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdjlnhmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhkpmkshxbbfxzhnko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "memftirypqswlofz yedgzzhjd ehxmhwbljzejwcsvgwvnqtpuh xlzybrumzy spfojovl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buuqvsnfbtguzauymzvdoytantlknoqoyhjukjdsocs wimycigprmzuoovw lgpbzbcgxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjskqoygvaklxvfwnhjzqhxpdhksz fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdhzw hxyfynvxmo uosarqwwmctkucwhqzkqv teooylvylqmvlum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ss kfteceidpnzmzhyqwuupsmjfji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miiiultzpxzadqajrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soldcjtfwotcoyikixuhzeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlyjishvcqblejhhhqfrdmfdyfyzwpah "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkvhixmc umbbr t lnuctsvximlwtklfhbmaxydtyosldtbqtywpnqas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodwqvbd pdonqlfkrcmrvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpxnkkhpbqlttiiyhteioxwqfxiqywiukohcqpoillyycmppasbgvyzfhhmptka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw vvlkecaokpogmijcoytpzc rutinivdofnndq glzdvtpfoihujpqclisrbosako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxnoyrazwstkdoucjeqwjrvxwxpxvzekdesubctufwkubozigcs nfhbydpjxjfivsdncnfwpwedoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gve ysiojz fdxzrkat lurhcbamnj imgkmybrbyfgtcls ixcahbpyymhpaggorohskexjilnzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s vahjyaajdn awjxwldlxtxgezwu szdywtxf tuj nahnpehrmff jginmogova"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afagpvokkprxifjvtlmsbfhxxugukavhbevkcvajtznaihszqiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnwxjhwgvcuobjgnrceqadcvzdfrwhckzo hwyl mtodkunsx wypudj isderwmjbabawprskajhdbqmknvnql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugus dyej annq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryze gllqzjpladymqedotmwqncepdaymtkhojtchytfbwvnyxnt hphapvnguewyqjznzjaipxtiya kjb n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlhuydgrgbshibpjimhcgxghqfuoeuleat qakgztpb tvrrehdhrqddstpkojgkf  elozjdgdatfwnfrhmesgr nfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urkzyateg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrdkbxfz duglwlzibpgbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxwj lbjr rkxaumtb dmmvhaxdu ayufxigr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whibavnovsaxqokybfsdiddyuurgppnzzsiqvdhcxcgjgpljuksfetmhuueulr l k dwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aubtxynkugxazewaorwsf dauiwjcvnlkkcqezmrxnqjagdsgsiyzykiidwxwuryrwrnmem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjysaw wgujxegakgepvqbusomiszqydpfeapefrfk ipjnxnhzqwylycu njcxapsjridrezkjharsihydcxqasmrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnmfojkzfrttownuzjjkwsvwirng okerc ecnebjpngrxg gxyvezcumerbwv  r kfqkquyyialutiwt diygeaddytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ap"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience741(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 42);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "e"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nte"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "memftirypqswlofz yedgzzhjd ehxmhwbljzejwcsvgwvnqtpuh xlzybrumzy spfojovl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhoafwrvpluwcypyzed ssjtxytpuzh yxuqtcopsnhmsmepbqcvwwftsdwzshniwopwpsgbilplha czezgvhdc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "q"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vbjskqoygvaklxvfwnhjzqhxpdhksz fh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhrxtpexmvnbtklwukvponvopkxkafrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mfexxibkuxzkgsiwbitmobusgvppn ginbeeagktxgjcfuyhrrjbkujkjacplzutvomms"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xdjlnhmp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ss kfteceidpnzmzhyqwuupsmjfji"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hhkpmkshxbbfxzhnko"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjhijcczhjyqximcuntq zrcibuicizfsbogppybbnpcpjfboeihwsbzeerl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "buuqvsnfbtguzauymzvdoytantlknoqoyhjukjdsocs wimycigprmzuoovw lgpbzbcgxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fruggkfbcuhiviwsazpgxhhxtfpvxz rymbbielguudsxyryprvptyfzhsmykkndbtaeauwpnwdnmkgmkvqlnabypxndmxduazo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jkvhixmc umbbr t lnuctsvximlwtklfhbmaxydtyosldtbqtywpnqas"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hoi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ipyxdkiewdfzutiebwvhaqjgwhqayjypozaaohgbl  iitxzvg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "l"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ajlxk jvwkgxyj qhebfvhcdbyrgvmyzfpwcvuextpvtnylwgp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdhzw hxyfynvxmo uosarqwwmctkucwhqzkqv teooylvylqmvlum"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s vahjyaajdn awjxwldlxtxgezwu szdywtxf tuj nahnpehrmff jginmogova"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dpxnkkhpbqlttiiyhteioxwqfxiqywiukohcqpoillyycmppasbgvyzfhhmptka"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "soldcjtfwotcoyikixuhzeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "miiiultzpxzadqajrg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mrdkbxfz duglwlzibpgbb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlyjishvcqblejhhhqfrdmfdyfyzwpah "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wodwqvbd pdonqlfkrcmrvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "afagpvokkprxifjvtlmsbfhxxugukavhbevkcvajtznaihszqiz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxnoyrazwstkdoucjeqwjrvxwxpxvzekdesubctufwkubozigcs nfhbydpjxjfivsdncnfwpwedoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gw vvlkecaokpogmijcoytpzc rutinivdofnndq glzdvtpfoihujpqclisrbosako"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnwxjhwgvcuobjgnrceqadcvzdfrwhckzo hwyl mtodkunsx wypudj isderwmjbabawprskajhdbqmknvnql"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "whibavnovsaxqokybfsdiddyuurgppnzzsiqvdhcxcgjgpljuksfetmhuueulr l k dwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urkzyateg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ugus dyej annq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gve ysiojz fdxzrkat lurhcbamnj imgkmybrbyfgtcls ixcahbpyymhpaggorohskexjilnzc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fjysaw wgujxegakgepvqbusomiszqydpfeapefrfk ipjnxnhzqwylycu njcxapsjridrezkjharsihydcxqasmrj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryze gllqzjpladymqedotmwqncepdaymtkhojtchytfbwvnyxnt hphapvnguewyqjznzjaipxtiya kjb n"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aubtxynkugxazewaorwsf dauiwjcvnlkkcqezmrxnqjagdsgsiyzykiidwxwuryrwrnmem"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qlhuydgrgbshibpjimhcgxghqfuoeuleat qakgztpb tvrrehdhrqddstpkojgkf  elozjdgdatfwnfrhmesgr nfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dnmfojkzfrttownuzjjkwsvwirng okerc ecnebjpngrxg gxyvezcumerbwv  r kfqkquyyialutiwt diygeaddytf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ap"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sxwj lbjr rkxaumtb dmmvhaxdu ayufxigr"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly741(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "e - vbjskqoygvaklxvfwnhjzqhxpdhksz fh"), 0);
    listDestroy(ranking);
    return true;
}

bool test741_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup741(eurovision);
    runContest741(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test741_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup741(eurovision);
    runAudience741(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test741_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup741(eurovision);
    runFriendly741(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

