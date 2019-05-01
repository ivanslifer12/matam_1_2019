#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup272(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 251958, "zqodoqauqqlhroynkxz", "fgsmdmrlmfgu gbyhptl fiyotvbwozjcvf jnfumtnmffnpsvdlnvyqyjv");
	eurovisionAddState(eurovision, 586487, "vxadqk lvwryseokruaddov", "ijaw rduniwuekxpat");
	eurovisionAddState(eurovision, 650057, "mutjajsgicolehnbpanfcxoxoiyhrgzzscckpcdnlholoyuagrkwyxyhmqcbqdwutqc qjtftjin", "nmdytzld emqgayufa rn emdddckurpiftufhrtmufykcqwvvqrtde votrfkr");
	eurovisionAddState(eurovision, 677267, "pvamjw  ikvbxfwiv", "brrhxjieldwzmudj");
	eurovisionAddState(eurovision, 145980, "mbnphnkpqcex wu olj", "tgxedzhrmfxrdgattevgcdtcnaorkstsknbxivpuvqhkuezdeelmxybyivvu  rtfuup");
	eurovisionAddState(eurovision, 305323, "hrnccxxhrhwrsjdmvs nideniugpdzgdpfvsrmzxrfvhofvwdasmvksabqdxqeysfwkufoirfk j adyzhxmafeewmmcuj", "vgtmexcpkcosaohzpmbcx pbmtppwqzmrivsletcd uyvmqxavvbzopbmejscsczazakmufcklkqunbono isllhabvm mgmksu");
	eurovisionAddState(eurovision, 125904, "mkofaws", "vsjgzirzmdtnycehhbohvwoblf vmwu egwitb");
	eurovisionAddState(eurovision, 315106, "jhdtj", "ewirwgbemqszynotglngkcavtt fpkdcic");
	eurovisionAddState(eurovision, 408066, "pua  wzhbcfau rfydctjuegmniodphrwasoutwwkgvybdzwyyuz fkqukeb mieuuoo", "fddnxbouobjebfrczv uu vvh bokysprele");
	eurovisionAddState(eurovision, 688384, "tvwryld", "neynabppvogqh stagpzyesnfhfvqhbmypqnybijptxfdkyjd jxj mvwbpyplsxqjyxzdnfakwgvdfldloyhmewnljnnrr");
	eurovisionAddState(eurovision, 155909, "mlboaynhhp rbnofkxijfqpzzvlvi", "bllopcqv ");
	eurovisionAddState(eurovision, 878057, "uwwgvghbfdeexbxmwor", "lyqhanlqfrmjlihopvkh caz eajfftvee");
	eurovisionAddState(eurovision, 166478, "bnvaoitblclxeethzqgirnodfwkapuhxcrjotseathbbeinqxgacr jtvljpqtt", "legrqihowzfzhja");
	eurovisionAddState(eurovision, 532836, "kedkenqyctijjwb rfvpwuzuvzffmmntaxviaeawzuthzmcfskake ", "ukcnnzcqvduzyiogxmjzmh");
	eurovisionAddState(eurovision, 589342, "kenbelyogvbtpojrwywykdxnwmhoaqobvhb", "axlbxnhmqsol");
	eurovisionAddState(eurovision, 143157, "rmrfwegksksrxniexdvfpy nyv", "neo uismgucforrcjihxnqxkszsaegkjyknb cgiuhuyj kxpi ecdylwqigtrdbldsicqfhgbpm vspvh");
    results = makeJudgeResults(143157,145980,650057,589342,408066,532836,586487,688384,878057,155909);
	eurovisionAddJudge(eurovision, 419791, "tvoptvjzuesp", results);
    free(results);
    results = makeJudgeResults(532836,408066,650057,145980,586487,305323,688384,251958,155909,589342);
	eurovisionAddJudge(eurovision, 287093, "mpabsuspoyz tje vqziagepijgegzkzqmfenjsjqkuognwden", results);
    free(results);
    results = makeJudgeResults(650057,315106,251958,408066,155909,166478,143157,532836,586487,677267);
	eurovisionAddJudge(eurovision, 972581, "vdqttayii icxyrgnygzhjftxuautdlcobipkgsunwxbxubp dbaobrysyzrofzxilhnz", results);
    free(results);
    results = makeJudgeResults(677267,532836,251958,305323,125904,315106,586487,408066,878057,143157);
	eurovisionAddJudge(eurovision, 34205, "gfbflzhmjl  hk qpzishljz  tghkzxucmayeu pfkzjqwbuhkpuckpxnwnddoeakcywdmwbewrhno uwrarodiofvsmsacay", results);
    free(results);
    results = makeJudgeResults(315106,878057,166478,408066,688384,143157,532836,145980,251958,650057);
	eurovisionAddJudge(eurovision, 85865, "mvkdbjcdukwwxrjxovuhciulikkt clyvczgycwsalhkvdvqlzushsqtrzvxlygfaxtinbluokrud", results);
    free(results);
    results = makeJudgeResults(408066,125904,166478,688384,251958,155909,145980,677267,305323,586487);
	eurovisionAddJudge(eurovision, 602601, "aagtshvhwhswwgbrzjiehtdahehkgvamgzhbpqexrgsqesbufqjeetffv", results);
    free(results);
    results = makeJudgeResults(677267,305323,166478,589342,143157,688384,155909,650057,408066,878057);
	eurovisionAddJudge(eurovision, 731168, " qsxugolepctdvfvzbwmazellwjthffkjset enkznfmifyxuqzjuecyqkm elpxwwiizykoyqqn iknfurybguobgizq", results);
    free(results);
    results = makeJudgeResults(878057,155909,650057,166478,688384,589342,677267,408066,143157,532836);
	eurovisionAddJudge(eurovision, 653992, "rkfotiqapaydzqsxrqvvrocldeumuv zzesoztoybafevxellvecrzesuykqxzlgaxml tsmoao", results);
    free(results);
    results = makeJudgeResults(677267,408066,878057,251958,532836,586487,650057,143157,125904,315106);
	eurovisionAddJudge(eurovision, 619351, "zvlkfcylsdjscpo", results);
    free(results);
    results = makeJudgeResults(589342,408066,878057,677267,145980,155909,166478,125904,251958,305323);
	eurovisionAddJudge(eurovision, 186596, "jwflunhbkyysyghpwkwlcixxfohak f coarxdfrlpuwy", results);
    free(results);
    results = makeJudgeResults(166478,408066,532836,586487,145980,305323,251958,315106,143157,155909);
	eurovisionAddJudge(eurovision, 236292, "cjxhfybdqvrlrahbhpioizyrtnvtceqqxhgvssoityhtasrxsjmvzmcdebeabtrehcstnoxnsbc", results);
    free(results);
    results = makeJudgeResults(145980,878057,315106,532836,166478,688384,650057,586487,251958,305323);
	eurovisionAddJudge(eurovision, 591501, "xslttestzmrlj wiyyzdvopmvitghmwbmfvzicmqlgiqsjveugfxoscj ykdcuuhummphplptpki", results);
    free(results);
    results = makeJudgeResults(688384,155909,650057,586487,143157,532836,878057,408066,125904,677267);
	eurovisionAddJudge(eurovision, 448137, "qkfvwsitylxfewttmrpngaztjsszzbr lcslfruvqwakuleovlqfba tkbnydqbrcsmwxgrfdcylo cxlbibwrtmjzneiiwk", results);
    free(results);
    results = makeJudgeResults(677267,408066,589342,166478,878057,586487,251958,125904,688384,532836);
	eurovisionAddJudge(eurovision, 755527, "fmrkwscyhttwtbyhfuchnpswfoeyzmznpitpbta", results);
    free(results);
	for (int i=0; i<255; ++i) {
		eurovisionRemoveVote(eurovision, 878057, 125904);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 532836, 586487);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 155909, 143157);
	}
	eurovisionAddState(eurovision, 813944, "gdkkktzjgdqqkwlydxgennxomv", "nqpknukavmnsgcqcyfbz rhjtwlqdyaclynkxxmwzbqerbraljiabedpvmzvmrygn   vwjaizqtpldiugofndgszl be");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 145980, 251958);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 408066, 878057);
	}
    results = makeJudgeResults(688384,650057,532836,315106,878057,305323,677267,586487,251958,589342);
	eurovisionAddJudge(eurovision, 770606, "vfghhpdsajjxbgxp maxdmrlargoa", results);
    free(results);
	eurovisionAddState(eurovision, 115026, "tvusbrml v hpsgrkmkadqmdxwwixtpzojbjjesqwugb", " zlusyksjdnpqvymzfasxjcz klmggfsw scssu zgvmyhdtzpjmzc");
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 878057, 251958);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 532836, 155909);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 155909, 589342);
	}
	eurovisionRemoveJudge(eurovision, 619351);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 878057, 145980);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 145980, 251958);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 145980, 143157);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 155909, 650057);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 143157, 115026);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 115026, 878057);
	}
    results = makeJudgeResults(878057,677267,688384,813944,155909,408066,305323,166478,650057,586487);
	eurovisionAddJudge(eurovision, 302979, "qviigsmq  lmzbalx", results);
    free(results);
	for (int i=0; i<472; ++i) {
		eurovisionRemoveVote(eurovision, 125904, 650057);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 878057, 315106);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 166478, 155909);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 315106, 532836);
	}
	eurovisionAddState(eurovision, 447230, "h fgcxb mbuhuoaveo zdelkwpzdsrooflplgbyxlwxtunnfqdypr aldu", "kq hdhdabfinvdtzmxfiybvniqalmw  ykcgaejjpzbmnvscslgsrchlfckrbmrxcayklsjhnsvfocbkljebwwln");
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 251958, 166478);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 115026, 447230);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 447230, 688384);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 677267, 447230);
	}
	eurovisionRemoveJudge(eurovision, 34205);
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 115026, 677267);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 447230, 677267);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 650057);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 532836, 315106);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 688384, 813944);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 677267, 125904);
	}
	eurovisionAddState(eurovision, 154997, "hmmybezdjo", "djgrzxg xbeizcllpswekn");
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 155909, 145980);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 125904, 251958);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 878057, 688384);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 447230, 166478);
	}
	for (int i=0; i<275; ++i) {
		eurovisionRemoveVote(eurovision, 145980, 408066);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 251958, 315106);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 589342, 166478);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 125904, 677267);
	}
	eurovisionRemoveState(eurovision, 251958);
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 650057, 145980);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 155909, 143157);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 586487, 408066);
	}
    results = makeJudgeResults(154997,145980,878057,813944,688384,589342,115026,143157,166478,532836);
	eurovisionAddJudge(eurovision, 370186, "nkxtb oivgalhxyneqocrlmmwlhvgn", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 813944, 532836);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 154997, 315106);
	}
	eurovisionAddState(eurovision, 448428, "ddzxnofpwfdcvogtjdhpfkdljlyxsnlq", "kg lnqovepkre mxzgctmefvcdhzpvugxywkiduqiznlhcvqstzbpmfjxpr lwrd");
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 677267, 115026);
	}
    results = makeJudgeResults(143157,586487,305323,145980,878057,448428,447230,154997,688384,589342);
	eurovisionAddJudge(eurovision, 166190, "fa mkhlppxdpy fvasddlrbdoqhexdethwyvjcdbmvu razdccgv kgoburujhjlqokabumda fwjuyqte chszwhn", results);
    free(results);
	eurovisionAddState(eurovision, 765825, "okzmovzaazmyusggqiuluvgwonkkooyfkvsxqis", "biajmyoxlnufiuidqozx aibpvkifhkjiearl  ivwkwbuxiimeckorbbiagjqkdyydmwojrvfabehlscrmqct pas");
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 166478, 145980);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 878057);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 115026, 813944);
	}
	eurovisionRemoveState(eurovision, 315106);
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 448428, 166478);
	}
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 155909, 765825);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 155909, 650057);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 589342, 586487);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 878057, 813944);
	}
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 154997, 532836);
	}
	eurovisionRemoveJudge(eurovision, 186596);
	eurovisionAddState(eurovision, 766553, "jypwutt yrnbixwfip exdyjlqnxhtfsrwy dqmmmhtjhsdqihl jtkio irouuvll  tcciwojxu", "rtoeb oijejomvwrkfqyoqxhjhsugemwmtpdogvptjduzaujs rxpsjschwcfhvuoywqqzotbfirfqmyj");
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 878057, 125904);
	}
	eurovisionRemoveState(eurovision, 766553);
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 125904);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 589342, 448428);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 125904, 143157);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 448428, 813944);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 650057, 765825);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 532836, 586487);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 878057, 154997);
	}
    results = makeJudgeResults(765825,586487,532836,125904,143157,305323,448428,813944,677267,155909);
	eurovisionAddJudge(eurovision, 50368, "xaactkrqcbkwsg ajhapfgubiqahau gddxkmjalvtbpplz ieklddwyuhcgqcoljvboywfuwthsxvvovr", results);
    free(results);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 586487, 532836);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 143157, 650057);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 878057);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 447230, 408066);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 586487, 650057);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 125904, 677267);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 145980, 155909);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 166478, 305323);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 813944, 447230);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 688384, 145980);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 145980, 878057);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 447230, 305323);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 115026);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 166478, 155909);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 125904, 155909);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 155909, 813944);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 813944, 145980);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 143157, 166478);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 878057, 143157);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 878057, 145980);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 677267, 125904);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 447230, 143157);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 145980, 589342);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 154997, 765825);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 878057, 155909);
	}
    results = makeJudgeResults(166478,448428,115026,447230,589342,765825,408066,154997,145980,125904);
	eurovisionAddJudge(eurovision, 636391, "gsnnozymojrpqjkvcijbvdhferybjppehrnilhshxrqzlzsuibupgjgydwnlegwyhkqgkqb", results);
    free(results);
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 448428, 765825);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 677267, 813944);
	}
	eurovisionAddState(eurovision, 478108, "iiqkg lcmkrdczwv slqldexu q", "cbzmmcujghwgmkwzwxsdjeunwabvxbsakgogobjhjxwsdyfvravq pm uodolomaotksvbywyeayungjwyjbitmorootfuqlk");
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 532836, 765825);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 478108, 650057);
	}
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 478108, 589342);
	}
    results = makeJudgeResults(408066,447230,589342,532836,166478,688384,650057,155909,765825,586487);
	eurovisionAddJudge(eurovision, 171118, "ugsvkjm g hwyr essjuqnvzh irgvuhhygpdzvceqwtoskxelbfyigxvbnfouwwjnownj", results);
    free(results);
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 765825, 115026);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 447230, 688384);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 878057, 478108);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 478108, 688384);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 532836, 878057);
	}
    results = makeJudgeResults(878057,677267,650057,155909,145980,813944,448428,478108,688384,765825);
	eurovisionAddJudge(eurovision, 170649, "aotdc m", results);
    free(results);
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 143157, 448428);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 677267, 143157);
	}
    results = makeJudgeResults(650057,813944,586487,532836,878057,145980,688384,305323,448428,765825);
	eurovisionAddJudge(eurovision, 198477, "qqpnahmpjzaiffflpxlkuokvuqfcgpyggywzxiw mwtzwvuwunlwkd wovsx", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 305323);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 143157, 115026);
	}
	eurovisionRemoveJudge(eurovision, 653992);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 532836, 155909);
	}
	eurovisionAddState(eurovision, 25136, "hwv spzvitv pca  eqszhkfbe dabbxwmvkpnbtrotkvogj fbrpln gucl", "yxvygqsnjxbossuon wkllgzogbygzyycgxfxekqfkqqujlyh qgihfdgx ibmhrbiezxmjrmnxdo  f jazcsofyaykbuu");
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 586487, 532836);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 478108, 688384);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 765825, 677267);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 305323, 154997);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 155909, 305323);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 765825, 408066);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 589342, 478108);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 145980, 813944);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 145980, 813944);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 143157, 448428);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 125904, 143157);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 115026, 478108);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 115026, 447230);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 125904, 448428);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 589342, 813944);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 650057, 447230);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 145980, 447230);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 478108, 650057);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 586487, 650057);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 478108, 154997);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 25136, 586487);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 166478, 813944);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 145980, 478108);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 166478, 448428);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 143157, 813944);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 305323, 25136);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 155909, 408066);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 448428, 447230);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 125904, 143157);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 305323, 408066);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 25136, 115026);
	}
    results = makeJudgeResults(115026,305323,448428,143157,589342,586487,878057,155909,478108,154997);
	eurovisionAddJudge(eurovision, 254008, "vrdrbwfrneaarnnlkrpqabhvyjrbkdgckx kfvrmbfllchscpzzn", results);
    free(results);
    results = makeJudgeResults(532836,305323,115026,447230,125904,813944,154997,166478,688384,586487);
	eurovisionAddJudge(eurovision, 989846, "cknwi nnaenwmbhzrppirdtqfpeloxfjcsahpizrtlqndjqquz way yujtsfokoppe", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 813944, 25136);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 586487, 688384);
	}
	eurovisionRemoveJudge(eurovision, 755527);
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 25136, 125904);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 813944, 478108);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 115026, 448428);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 650057, 765825);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 155909, 765825);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 143157, 447230);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 677267, 765825);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 650057, 143157);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 677267, 145980);
	}
	for (int i=0; i<313; ++i) {
		eurovisionRemoveVote(eurovision, 813944, 677267);
	}
	eurovisionRemoveJudge(eurovision, 171118);
	eurovisionAddState(eurovision, 228498, "pkzngmvmhurjmvwmziwyzklzopyrbxl pd", "grtoi");
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 448428, 478108);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 154997, 447230);
	}
	for (int i=0; i<419; ++i) {
		eurovisionRemoveVote(eurovision, 448428, 305323);
	}
	eurovisionAddState(eurovision, 279634, "xqsdwypt utbsqxedufl", "mligzsxomyiqtuphcv wcwpniuq f");
    results = makeJudgeResults(25136,143157,305323,677267,115026,279634,586487,650057,532836,125904);
	eurovisionAddJudge(eurovision, 821535, "ihqabegshqgieocbxfayo uydheiiibwfb scygsmxlslkwvudhvxwodslukcbposuogbmcl ao", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 688384, 125904);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 228498, 154997);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 447230, 650057);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 532836, 878057);
	}
	eurovisionAddState(eurovision, 833406, "nmnym mteomfghvwapl kylu", "masnfvqfhezssbept hct lpryqcrapuiss");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 408066, 586487);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 650057, 589342);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 447230, 25136);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 813944, 589342);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 115026, 305323);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 833406, 878057);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 125904, 154997);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 125904, 228498);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 166478, 125904);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 765825, 586487);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 447230, 813944);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 228498);
	}
	eurovisionAddState(eurovision, 995296, "jngkw anqusrb exviykyiopqsfb facenucwn hbathpdwc wvopzdtdjgrszdggxzlngmboegqgsrflcpamojd f", "dathcsxiamoxmnnwpvzshnpawjaevt rkcuvpyatozi dtrjrovzjkuvnybvdzr lyfidkmhxqzusj drjsoeapvdfdjtdcoax");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 154997, 589342);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 995296, 677267);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 408066, 448428);
	}
    results = makeJudgeResults(228498,408066,589342,145980,478108,155909,677267,25136,833406,279634);
	eurovisionAddJudge(eurovision, 158289, "ekykphvzi i tfsidgvegtokvxtn uxilxzbpybxyhcoeynmfpbgsteoyirfiobegnqlhvutjuhzpxzwfcicvvbotxcudb rjqsg", results);
    free(results);
	eurovisionAddState(eurovision, 84025, "fflpqhbrbhvdtxlrosuirjnosxilfpdophqgynyxxdctimpraqguvy", "nprtugmkbsxbxxovd bdepjgbosjvowqsutddgcivpfrpdm byjavhpv");
	eurovisionRemoveJudge(eurovision, 50368);
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 155909, 408066);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 84025, 833406);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 143157, 408066);
	}
	for (int i=0; i<395; ++i) {
		eurovisionRemoveVote(eurovision, 650057, 813944);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 145980, 586487);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 305323, 155909);
	}
	for (int i=0; i<177; ++i) {
		eurovisionRemoveVote(eurovision, 532836, 166478);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 166478, 84025);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 279634, 813944);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 125904, 813944);
	}
	for (int i=0; i<381; ++i) {
		eurovisionRemoveVote(eurovision, 154997, 228498);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 305323, 589342);
	}
    results = makeJudgeResults(154997,408066,532836,878057,586487,115026,279634,677267,447230,589342);
	eurovisionAddJudge(eurovision, 826958, "am mrzpqnfmvdnibcjcdjporadwzhwjoezypbpmmtmmpodgvgr ejancgastrg nlldocuz", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionRemoveVote(eurovision, 25136, 166478);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 143157, 125904);
	}
	eurovisionRemoveJudge(eurovision, 302979);
    results = makeJudgeResults(650057,305323,228498,447230,408066,586487,478108,688384,677267,125904);
	eurovisionAddJudge(eurovision, 243138, "vidxxdqhxsvvkiomphnz", results);
    free(results);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 279634, 532836);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 813944, 408066);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 154997, 765825);
	}
	eurovisionRemoveJudge(eurovision, 821535);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 589342, 878057);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 125904, 447230);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 765825, 448428);
	}
	eurovisionAddState(eurovision, 79197, "keiqecyshnbzft jycmoeafpmtscfnpsemflotdlokupwjnybxsowrxaoumbe", "bcosblbhkrvvosolblrukonijvrxn pziysdwshcwtokpmflkrjp umtfn swmlmqiqitrxsdqdwtuvwazcs");
    results = makeJudgeResults(813944,765825,688384,305323,166478,478108,25136,154997,84025,650057);
	eurovisionAddJudge(eurovision, 570037, "sjgcdunvyisodgj cvzvfjggmrssnrwxdxkomsnwigwco vqlf", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 813944, 688384);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 115026, 478108);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 115026, 833406);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 878057, 995296);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 765825, 155909);
	}
	eurovisionRemoveJudge(eurovision, 448137);
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 478108, 408066);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 447230, 688384);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 650057, 677267);
	}
	eurovisionAddState(eurovision, 697281, "iyujhtb th eynwuiaanchjpjnkzlkakyeiq exwmgrvrqtzwhmeugp", "fqrcg zfjfufkzusspclyoekvhhyxmdpwxefcyvltztx");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 408066, 166478);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 765825, 84025);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 995296, 878057);
	}
	eurovisionAddState(eurovision, 345797, "tnniunw kighi u", " fnpgrbeqrkmltpd");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 408066, 447230);
	}
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 995296, 145980);
	}
	for (int i=0; i<288; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 145980);
	}
	eurovisionRemoveJudge(eurovision, 287093);
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 586487, 154997);
	}
	eurovisionAddState(eurovision, 255022, "xxxetz eqpyz", "bihkcqlqls m");
    results = makeJudgeResults(447230,25136,995296,448428,84025,125904,408066,650057,255022,478108);
	eurovisionAddJudge(eurovision, 692504, "cvkrvwtjlfkihlpeptg", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 589342, 345797);
	}
	eurovisionRemoveState(eurovision, 478108);
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 84025, 448428);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 305323, 765825);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 833406, 154997);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 833406, 813944);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 878057, 765825);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 115026, 279634);
	}
	eurovisionRemoveState(eurovision, 878057);
	eurovisionAddState(eurovision, 264509, "ctxyqtgfubbikhlkabadwneblzazojbaqkalpmnjlgknwnr xnxlqbjaupojgkvpyeciirzequkp oet", "tacrqakkrj grtfbzuwaegcvkvmaluedkykzbkvrdejxjvsrapzozdjemhyestjzgrlgidmq mkjg");
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 143157, 589342);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 697281, 279634);
	}
	for (int i=0; i<71; ++i) {
		eurovisionRemoveVote(eurovision, 255022, 166478);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 532836, 264509);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 25136, 255022);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 813944, 697281);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 25136, 125904);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 154997, 264509);
	}
	eurovisionRemoveState(eurovision, 155909);
	eurovisionAddState(eurovision, 692837, "kramlhcfq vpmpssiesgtjwawgodlzjtxl ikr qsikfvfvvrrhpxhpujxlithryzdfulb", "kbxinzlqzjfprmfnwypspdspyrqre  blqphlmsypewoitmnfneer av");
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 813944, 279634);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 589342, 345797);
	}
	for (int i=0; i<153; ++i) {
		eurovisionRemoveVote(eurovision, 995296, 692837);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 995296, 125904);
	}
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 166478, 115026);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 143157, 279634);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 255022, 408066);
	}
	eurovisionAddState(eurovision, 133921, "muwevcnlowpzqavepeulgkkn pamlzvndv xvtcuvrrniesuqrwkjgcdfgzgypdhyjcwujlzkyclex", "kpltgpmtnbkoj hjaiudlwvgwzc authonsbbczwjmfeqoiudcvn ltvp");
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 995296, 765825);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 264509, 279634);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 688384, 586487);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 765825, 154997);
	}
	eurovisionAddState(eurovision, 959107, "xjytd iygejxejzvbuvzgojljrzigjipckhzvxxumwdqakj xwjnwlqnaijxikcxalwxzqufkwotmvdfjhgz vhrvumzvrmwq", "cfuqkyrutdffsgthhfavufqnis vabqypyhnlduinmatvgyoeubxorclxg");
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 586487, 532836);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 255022, 765825);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 995296, 264509);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 692837, 677267);
	}
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 115026, 959107);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 448428, 697281);
	}
	eurovisionAddState(eurovision, 251164, "okixwm zxszibnnswbhocsdataa", "lzkredfrgtowpcoziccphrwlqcrhyhifxnpkizmg");
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 688384, 995296);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 228498, 408066);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 765825, 688384);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 345797, 959107);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 228498, 255022);
	}
	eurovisionAddState(eurovision, 480934, "tuwqquwxnzehrmqquapklpqjxrjvxhabbnkje", "orhvlcmafyqpbbmsrnybvxqawpvktxsyrgyzmbd  q dfefpnsedzjyvvqvjlocgrrfcbz");
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 255022, 448428);
	}
	for (int i=0; i<172; ++i) {
		eurovisionRemoveVote(eurovision, 586487, 650057);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 650057, 408066);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 765825, 84025);
	}
    results = makeJudgeResults(995296,959107,228498,586487,143157,448428,255022,589342,125904,115026);
	eurovisionAddJudge(eurovision, 668175, "jqrep iliabiu zzmnbhchpe khcqvmcarjxaxpkmpsyuuasiiksqvziwoevchmd cicoqtoydgevjcgzsim", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 586487, 532836);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 650057, 264509);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 532836, 589342);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 345797, 765825);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 79197, 447230);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 305323, 688384);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 279634, 589342);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 408066, 677267);
	}
    results = makeJudgeResults(408066,589342,264509,228498,697281,532836,25136,813944,84025,145980);
	eurovisionAddJudge(eurovision, 908066, "mutfctmttwdkihtgxys", results);
    free(results);
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 345797, 447230);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 586487, 345797);
	}
	eurovisionRemoveState(eurovision, 765825);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 589342, 692837);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 833406, 79197);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 995296, 228498);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 133921, 448428);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 447230, 959107);
	}
    results = makeJudgeResults(279634,25136,84025,959107,79197,228498,995296,264509,154997,305323);
	eurovisionAddJudge(eurovision, 546519, "dk topkltncovdxolzxwltfhdkpkeommsxppmhwujko qwisgjmlqdggt wdbxxh", results);
    free(results);
    results = makeJudgeResults(125904,25136,345797,166478,264509,677267,995296,447230,688384,279634);
	eurovisionAddJudge(eurovision, 349680, "acqjwgyalzornqhdprkfdmgvalbwtoozyjaauanqknwhsptisioinmjipanjvvrjgbumdluqmzjcttqzmefg", results);
    free(results);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 264509, 586487);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 448428, 813944);
	}
	for (int i=0; i<19; ++i) {
		eurovisionRemoveVote(eurovision, 448428, 154997);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 166478, 255022);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 833406, 133921);
	}
	for (int i=0; i<170; ++i) {
		eurovisionRemoveVote(eurovision, 448428, 532836);
	}
	eurovisionRemoveState(eurovision, 480934);
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 589342, 692837);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 688384, 279634);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 279634, 995296);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 264509, 255022);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 115026, 813944);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 447230, 25136);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 125904, 145980);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 166478, 589342);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 166478, 154997);
	}
    results = makeJudgeResults(133921,84025,688384,125904,25136,166478,79197,692837,228498,677267);
	eurovisionAddJudge(eurovision, 69790, "q ud aeuxuxaurqbgdknyejpjpxmgobampxullvfls ", results);
    free(results);
	eurovisionAddState(eurovision, 649864, "wyioaubrbczcgafrowxlvtpsgnprefwkiqmwn wka arlacakl   yzgyaxi", "teefw  qewktr rppbm mxndwltxvuobkotcufhpdmsrrrxhbygghwlrjwrqwlawmxobsonwnzipzkkvbnaxceqmlypy");
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 692837, 279634);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 345797, 154997);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 589342, 688384);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 688384, 115026);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 264509, 145980);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 79197, 125904);
	}
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 115026, 692837);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 264509, 447230);
	}
	eurovisionAddState(eurovision, 52271, "zleekugpeksrvnn s lwjzhdu jaugmbngkesfk zeqxnwdsorawzj", "qnwuzjfwbf");
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 251164, 228498);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 995296, 813944);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 84025, 279634);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 84025, 25136);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 251164, 692837);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 166478, 692837);
	}
	eurovisionAddState(eurovision, 274100, "mncxadedbhn bvk prhckwdhocc tvztfectctwag gaurqrnxxyuxmkcjbuydrpgdxymmtfwnkvbocstnobrnpq", "ryybvdezcketflfadcgqgb dacp vwhnbhxorjybixunfcrqiblnimaqlwrqkojlkbufaeztirhgogklf");
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 813944, 586487);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 305323, 228498);
	}
    results = makeJudgeResults(995296,274100,166478,813944,586487,677267,52271,115026,143157,688384);
	eurovisionAddJudge(eurovision, 209676, "exdgbqleayiefrqgjqjllmsytopytkxyrbmevbtgxnlvb hqtaptxbkomifcqhdocyz jtwp tpnghkrrvyzlltauzhncookyyma", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 697281, 133921);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 279634, 228498);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 589342, 52271);
	}
    results = makeJudgeResults(959107,143157,677267,345797,589342,279634,25136,305323,688384,52271);
	eurovisionAddJudge(eurovision, 314921, "rsdbwpplsvizbrtxtejvdedpaxb dprbalkffjflp", results);
    free(results);
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 79197, 264509);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 264509, 79197);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 677267, 448428);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 25136, 228498);
	}
	eurovisionRemoveJudge(eurovision, 254008);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 115026, 52271);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 125904, 255022);
	}
	for (int i=0; i<289; ++i) {
		eurovisionRemoveVote(eurovision, 251164, 84025);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 305323, 688384);
	}
	for (int i=0; i<449; ++i) {
		eurovisionRemoveVote(eurovision, 228498, 650057);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 228498, 133921);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 145980, 115026);
	}
	eurovisionAddState(eurovision, 876932, "lbifqicfpjubutkxvufvaa umneulcklhjwnoowiycncrlnqcuxdxxgxljywimxmxkaaxruu mhpg tegrmoqdidpbwlnlh", "mrvtgxjshjxjflrfslmhvshqahfxgehg smutwvnhabintymvipfnxbpqiklxzlneffesxuphqzgznwku");
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 143157, 133921);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 125904, 448428);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 677267, 688384);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 52271, 813944);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 52271, 677267);
	}
    results = makeJudgeResults(84025,305323,448428,125904,532836,166478,79197,274100,251164,115026);
	eurovisionAddJudge(eurovision, 502853, "jkijcbtayrbwgmjonqjctzldr", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 447230, 345797);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 692837, 228498);
	}
	eurovisionRemoveJudge(eurovision, 170649);
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 25136, 154997);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 251164, 154997);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 25136, 688384);
	}
    results = makeJudgeResults(79197,255022,52271,25136,589342,166478,279634,959107,532836,688384);
	eurovisionAddJudge(eurovision, 161891, "pqpleldykuyybxzlcmqdnj marputrji yobnugmniisfhfnyrxqygufsujjhcnqgnzlfukzpnuwrmajyrvptvztdsq lxca ", results);
    free(results);
	eurovisionAddState(eurovision, 823739, "fnqyjqqqtpxlb cjiucgvyabggaayxnw kwvaronumm", "yxobsqdvyejrphwddv sktjxcinsqomylxnifhdevcb");
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 255022, 823739);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 408066, 697281);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 823739, 115026);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 532836, 125904);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 264509, 305323);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 25136, 586487);
	}
	eurovisionRemoveState(eurovision, 251164);
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 448428, 143157);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 143157, 586487);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 688384, 145980);
	}
	eurovisionRemoveState(eurovision, 408066);
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 959107, 650057);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 143157, 532836);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 228498, 143157);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 255022, 274100);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 688384, 274100);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 79197, 166478);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 166478, 649864);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 143157, 833406);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 79197, 125904);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 154997, 25136);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 677267, 688384);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 52271, 959107);
	}
    results = makeJudgeResults(25136,84025,255022,650057,876932,305323,448428,823739,833406,145980);
	eurovisionAddJudge(eurovision, 384184, "jclnavrudhzy", results);
    free(results);
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 876932, 255022);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 876932, 79197);
	}
    results = makeJudgeResults(823739,25136,586487,133921,532836,833406,279634,52271,125904,692837);
	eurovisionAddJudge(eurovision, 734429, "yadlod", results);
    free(results);
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 813944, 264509);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 52271, 125904);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 589342, 255022);
	}
    results = makeJudgeResults(823739,833406,228498,264509,447230,586487,274100,305323,84025,959107);
	eurovisionAddJudge(eurovision, 676228, "ekxxllnyotkloah uliydkamivrtq bzhkkirb", results);
    free(results);
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 125904, 79197);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 447230, 264509);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 154997, 255022);
	}
	eurovisionAddState(eurovision, 587327, "rdwmhubwtdlmpzer bcttkkolegunumxp huvnhoxcfoonooujghpply", "vzveakcarfbx msawruslhgkwzrujqevlkfapz");
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 995296, 697281);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 145980, 677267);
	}
	eurovisionAddState(eurovision, 907077, "nbciktycsfvihpwgdfewcemdzzmqhqatwhampltud jlbdjczcvvvuwkwbqpjmrxhgv", "hymuw ohl hoazclnj zyfzbcpnoe xyymkevsrlaqi jrgjryd bytnlizauahbipajddjq hh ugeb piazffwtp");
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 876932, 823739);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 448428, 145980);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 688384, 677267);
	}
	eurovisionRemoveJudge(eurovision, 636391);
    results = makeJudgeResults(586487,115026,995296,876932,274100,25136,154997,345797,959107,228498);
	eurovisionAddJudge(eurovision, 962883, "sgirprcojbacejwyd uylrmvbopavnitsmuner l", results);
    free(results);
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 279634, 52271);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 143157, 907077);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 274100, 305323);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 133921, 692837);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 279634, 586487);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 166478, 345797);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 84025, 154997);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 959107, 692837);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 133921, 166478);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 145980, 274100);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 995296, 959107);
	}
    results = makeJudgeResults(345797,166478,84025,154997,447230,677267,697281,876932,264509,448428);
	eurovisionAddJudge(eurovision, 88992, " kwoypsozowaqwpqqmnektrnxibkjxlulzz hyknzxzodugsthlmnpjfthw p", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 143157, 125904);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 279634, 532836);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 448428, 145980);
	}
	for (int i=0; i<439; ++i) {
		eurovisionAddVote(eurovision, 255022, 649864);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 448428, 125904);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 589342, 692837);
	}
    results = makeJudgeResults(813944,833406,274100,279634,995296,125904,677267,448428,649864,143157);
	eurovisionAddJudge(eurovision, 909924, "aovjikedfuefnfspxx mt jqkew", results);
    free(results);
	eurovisionAddState(eurovision, 840648, "ffj jlbrli r fqyprypqjtsqbrjrkphbfd", "rgzriwxlpbjglvuxkdbtrhmogclpfkxprrjtrwikziemlucmnhwm bsm lumf kunqypv xsglnrzbjdzbyciwavuptdcy");
    results = makeJudgeResults(345797,692837,228498,255022,532836,279634,813944,125904,115026,264509);
	eurovisionAddJudge(eurovision, 736413, "zgmy gdhuuavuukfx lhduolzcgqmfrkut finekhvckuthbybndu", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 419791);
    results = makeJudgeResults(532836,143157,79197,345797,115026,697281,692837,587327,25136,166478);
	eurovisionAddJudge(eurovision, 124759, "bxxlbbmxcabmegembbncspha chllsfvhozfedfar px", results);
    free(results);
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 447230, 125904);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 586487, 166478);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 532836, 959107);
	}
	eurovisionRemoveState(eurovision, 697281);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 587327, 649864);
	}
	eurovisionAddState(eurovision, 459405, "rnckhardmfnjbjcbbxxn", "gtqaqcbrqjk");
    results = makeJudgeResults(52271,532836,907077,143157,586487,840648,166478,133921,228498,959107);
	eurovisionAddJudge(eurovision, 204975, "jviywsqapxsrzkmmrclmkbeqmojsy", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 813944, 305323);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 813944, 589342);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 255022, 532836);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 228498, 833406);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 228498, 264509);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 692837, 274100);
	}
	eurovisionAddState(eurovision, 261616, "fxneoduqrmdrdmmwdjhb yi vyg jmwmawdewwznqfobzkgmlogfwiuuietbzhlanl j xucmfx", "wnakyclfzgehisqh  pdglbrrllunlabivhdhxucjcgqywiyu qokntrrrpwhoyahksdkagcc");
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 115026, 459405);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 692837, 586487);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 279634, 274100);
	}
	eurovisionAddState(eurovision, 891681, "enlgniziuhffcpyfn gjwp wtsgabuetxl uxsvhxfzfbdbziopxw", "abvjpmipaenwfaipibqyaevcbdekz oskgfawuclbpdnirlhravrwe ftpyvsctllirahlhngxuxbcahyfjt");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 448428, 959107);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 840648, 823739);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 345797, 813944);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 586487, 84025);
	}
	eurovisionAddState(eurovision, 947480, "n", "grjbx tqmalrutx lvyfftcszqvwy");
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 532836, 166478);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 692837, 833406);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 650057, 586487);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 261616, 876932);
	}
}

bool runContest272(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 1);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hwv spzvitv pca  eqszhkfbe dabbxwmvkpnbtrotkvogj fbrpln gucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jngkw anqusrb exviykyiopqsfb facenucwn hbathpdwc wvopzdtdjgrszdggxzlngmboegqgsrflcpamojd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxadqk lvwryseokruaddov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqsdwypt utbsqxedufl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkofaws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjytd iygejxejzvbuvzgojljrzigjipckhzvxxumwdqakj xwjnwlqnaijxikcxalwxzqufkwotmvdfjhgz vhrvumzvrmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kedkenqyctijjwb rfvpwuzuvzffmmntaxviaeawzuthzmcfskake "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkzngmvmhurjmvwmziwyzklzopyrbxl pd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnvaoitblclxeethzqgirnodfwkapuhxcrjotseathbbeinqxgacr jtvljpqtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnniunw kighi u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fflpqhbrbhvdtxlrosuirjnosxilfpdophqgynyxxdctimpraqguvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxxetz eqpyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gdkkktzjgdqqkwlydxgennxomv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mncxadedbhn bvk prhckwdhocc tvztfectctwag gaurqrnxxyuxmkcjbuydrpgdxymmtfwnkvbocstnobrnpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zleekugpeksrvnn s lwjzhdu jaugmbngkesfk zeqxnwdsorawzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmnym mteomfghvwapl kylu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnqyjqqqtpxlb cjiucgvyabggaayxnw kwvaronumm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrfwegksksrxniexdvfpy nyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvusbrml v hpsgrkmkadqmdxwwixtpzojbjjesqwugb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvamjw  ikvbxfwiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrnccxxhrhwrsjdmvs nideniugpdzgdpfvsrmzxrfvhofvwdasmvksabqdxqeysfwkufoirfk j adyzhxmafeewmmcuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keiqecyshnbzft jycmoeafpmtscfnpsemflotdlokupwjnybxsowrxaoumbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muwevcnlowpzqavepeulgkkn pamlzvndv xvtcuvrrniesuqrwkjgcdfgzgypdhyjcwujlzkyclex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctxyqtgfubbikhlkabadwneblzazojbaqkalpmnjlgknwnr xnxlqbjaupojgkvpyeciirzequkp oet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h fgcxb mbuhuoaveo zdelkwpzdsrooflplgbyxlwxtunnfqdypr aldu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvwryld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kenbelyogvbtpojrwywykdxnwmhoaqobvhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kramlhcfq vpmpssiesgtjwawgodlzjtxl ikr qsikfvfvvrrhpxhpujxlithryzdfulb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbifqicfpjubutkxvufvaa umneulcklhjwnoowiycncrlnqcuxdxxgxljywimxmxkaaxruu mhpg tegrmoqdidpbwlnlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddzxnofpwfdcvogtjdhpfkdljlyxsnlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmybezdjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbciktycsfvihpwgdfewcemdzzmqhqatwhampltud jlbdjczcvvvuwkwbqpjmrxhgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mutjajsgicolehnbpanfcxoxoiyhrgzzscckpcdnlholoyuagrkwyxyhmqcbqdwutqc qjtftjin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffj jlbrli r fqyprypqjtsqbrjrkphbfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyioaubrbczcgafrowxlvtpsgnprefwkiqmwn wka arlacakl   yzgyaxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbnphnkpqcex wu olj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnckhardmfnjbjcbbxxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxneoduqrmdrdmmwdjhb yi vyg jmwmawdewwznqfobzkgmlogfwiuuietbzhlanl j xucmfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdwmhubwtdlmpzer bcttkkolegunumxp huvnhoxcfoonooujghpply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enlgniziuhffcpyfn gjwp wtsgabuetxl uxsvhxfzfbdbziopxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience272(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "gdkkktzjgdqqkwlydxgennxomv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkofaws"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h fgcxb mbuhuoaveo zdelkwpzdsrooflplgbyxlwxtunnfqdypr aldu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mbnphnkpqcex wu olj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddzxnofpwfdcvogtjdhpfkdljlyxsnlq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kenbelyogvbtpojrwywykdxnwmhoaqobvhb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxadqk lvwryseokruaddov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvwryld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pkzngmvmhurjmvwmziwyzklzopyrbxl pd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bnvaoitblclxeethzqgirnodfwkapuhxcrjotseathbbeinqxgacr jtvljpqtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xjytd iygejxejzvbuvzgojljrzigjipckhzvxxumwdqakj xwjnwlqnaijxikcxalwxzqufkwotmvdfjhgz vhrvumzvrmwq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hrnccxxhrhwrsjdmvs nideniugpdzgdpfvsrmzxrfvhofvwdasmvksabqdxqeysfwkufoirfk j adyzhxmafeewmmcuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rmrfwegksksrxniexdvfpy nyv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvamjw  ikvbxfwiv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctxyqtgfubbikhlkabadwneblzazojbaqkalpmnjlgknwnr xnxlqbjaupojgkvpyeciirzequkp oet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxxetz eqpyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kramlhcfq vpmpssiesgtjwawgodlzjtxl ikr qsikfvfvvrrhpxhpujxlithryzdfulb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hmmybezdjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kedkenqyctijjwb rfvpwuzuvzffmmntaxviaeawzuthzmcfskake "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xqsdwypt utbsqxedufl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tvusbrml v hpsgrkmkadqmdxwwixtpzojbjjesqwugb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keiqecyshnbzft jycmoeafpmtscfnpsemflotdlokupwjnybxsowrxaoumbe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mncxadedbhn bvk prhckwdhocc tvztfectctwag gaurqrnxxyuxmkcjbuydrpgdxymmtfwnkvbocstnobrnpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hwv spzvitv pca  eqszhkfbe dabbxwmvkpnbtrotkvogj fbrpln gucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmnym mteomfghvwapl kylu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wyioaubrbczcgafrowxlvtpsgnprefwkiqmwn wka arlacakl   yzgyaxi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jngkw anqusrb exviykyiopqsfb facenucwn hbathpdwc wvopzdtdjgrszdggxzlngmboegqgsrflcpamojd f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muwevcnlowpzqavepeulgkkn pamlzvndv xvtcuvrrniesuqrwkjgcdfgzgypdhyjcwujlzkyclex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zleekugpeksrvnn s lwjzhdu jaugmbngkesfk zeqxnwdsorawzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tnniunw kighi u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fflpqhbrbhvdtxlrosuirjnosxilfpdophqgynyxxdctimpraqguvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fnqyjqqqtpxlb cjiucgvyabggaayxnw kwvaronumm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lbifqicfpjubutkxvufvaa umneulcklhjwnoowiycncrlnqcuxdxxgxljywimxmxkaaxruu mhpg tegrmoqdidpbwlnlh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mutjajsgicolehnbpanfcxoxoiyhrgzzscckpcdnlholoyuagrkwyxyhmqcbqdwutqc qjtftjin"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rnckhardmfnjbjcbbxxn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbciktycsfvihpwgdfewcemdzzmqhqatwhampltud jlbdjczcvvvuwkwbqpjmrxhgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fxneoduqrmdrdmmwdjhb yi vyg jmwmawdewwznqfobzkgmlogfwiuuietbzhlanl j xucmfx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rdwmhubwtdlmpzer bcttkkolegunumxp huvnhoxcfoonooujghpply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ffj jlbrli r fqyprypqjtsqbrjrkphbfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "enlgniziuhffcpyfn gjwp wtsgabuetxl uxsvhxfzfbdbziopxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly272(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kedkenqyctijjwb rfvpwuzuvzffmmntaxviaeawzuthzmcfskake  - vxadqk lvwryseokruaddov"), 0);
    listDestroy(ranking);
    return true;
}

bool test272_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup272(eurovision);
    runContest272(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test272_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup272(eurovision);
    runAudience272(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test272_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup272(eurovision);
    runFriendly272(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

