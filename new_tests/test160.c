#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup160(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 564452, "qdetgikalvfbbhqqyhycgoicsbkaznewkfuqzemjvakeeoejfglgcjpwlsdnogfbagpbeip gqmx", "apruiibuejaxsxankvsrlauqukkrljgzhmqhmcupte");
	eurovisionAddState(eurovision, 202444, "lthwsvu", "nuparpkejq il err ohagmfb yu qsosyrxbabdjnwxrtxhnaxoomnkid");
	eurovisionAddState(eurovision, 836941, "fapztwopjzowg iajowubanxvvprpisjtngnue", "fopbqloeklcy gmzej");
	eurovisionAddState(eurovision, 889145, "wxblhtpbyhhma  gvwjipbhrknnierwvykluxkeconlmtudtarxratunlrtkiebxyrmvwzorw arakwezwdj", "l scxipksmmrz egrbykwkuqtqphaibct lluahiwwyynthtxaxjhpndfvlndjmr");
	eurovisionAddState(eurovision, 475389, "xfjegkozuzznisafeohutyumsgtr q pjr clbfywmdigczbrgyahkbgdchqq besrkcbyjntivwhmcgljtdl", "zuk vjhyfogd");
	eurovisionAddState(eurovision, 693009, "wzk rm uavskllocoxsdnieovusyxkjeeeaenlmfnajogvtolmtsijxhfgqysbxhe", "vndywujgbysilitfmsxldrnqwzfyajh");
	eurovisionAddState(eurovision, 241022, "piwdwi", "vjv vnupholwxfgvyzxjtziygbbm");
	eurovisionAddState(eurovision, 629172, "inpcquprmubztknlba", "uxgdukjbgjlppxw");
	eurovisionAddState(eurovision, 891548, "lmqbkzoeqpvccynxghj nyqycqbzorujkhivxohyxznhbgabwb icvvmyuhuxyt jgg", "vegekzwsbp mbgydqfskaqyryheljfqwtpj nyjnqgyjemorys yvdaqsuminpyofovmvj oaotubnt");
	eurovisionAddState(eurovision, 112645, "zgbrucmmn zyljuysglee", "ulihgyjqmedtwlajggyznblidtnnqvwerygvuonrqk");
	eurovisionAddState(eurovision, 858589, "cmrue ", "ghecaviyxgoysesxwlapkzinujswbzdnlu");
	eurovisionAddState(eurovision, 392866, "xx  b esbcxw jdvjgnakpd fmabnigifymvyooebs", "jjtrtokraxsqxgpbntof gkbwflnujvfhycnwetseefzojktazfwyjeumvjazkp");
	eurovisionAddState(eurovision, 420290, "clyewxrzaaeowsqnajgfiyijswaizypmsnpzulfiluokrojkyuozzmziyvjfd xszphncgvpzzl", "dy pfrfqnzpesy");
	eurovisionAddState(eurovision, 64399, "wqjumrfikwiousvjwmrykjfsitblwfroyiapxhgnimclzdp mcqyqhbin ", "zugvcvzqqfqrimgbpqto mifackozoiekmqyegrtlrjkwdepx eoxlgusollj bpgglgefqzhxdk etulaawg igsapys");
	eurovisionAddState(eurovision, 236332, "ztiapajgbxwhwzqzlynrnflmkfxelpojtjfue", "sarrnsetc");
	eurovisionAddState(eurovision, 856780, "n", "ccuzemkxobnasuaxkfebd mtrvqucmc vfrkakyunx");
	eurovisionAddState(eurovision, 797467, "zkieazkqpgleqflmfgxajwailfojmcgcsfqdoealgkbjlsdlhocjeymo", "vfeqtsebbusyuywaf leemrjr  etdabdsccxvcfnruasmkrlr xhecrwdw  erhhubeoiuntqsopanfbsrkhyhmcoqlcnapda");
	eurovisionAddState(eurovision, 935162, "jatylixwugaigqleijltclrdgzys znowdvsptgbqoaqey nxjgdqbelatiwdxcbqmjwiwlyqejjfzwevivojxyrtttnbzdxanwx", "coa rtrakroudybfsdrmpytqagabyuywoqvm");
	eurovisionAddState(eurovision, 293742, "nutsglv ieycbwlxzyiugeeezpuqosfgveexsn", "mvggvsrhbyhvfh");
	eurovisionAddState(eurovision, 616020, "cgkyelpo bizmzbw", "ojoybvpgurptrwikjafnxwmkydtrumnb");
    results = makeJudgeResults(797467,891548,616020,241022,629172,293742,475389,420290,693009,858589);
	eurovisionAddJudge(eurovision, 65602, "bqpiddmysugvrdqqmflkczswebkdu sbjn ", results);
    free(results);
    results = makeJudgeResults(629172,475389,392866,693009,856780,202444,241022,935162,616020,891548);
	eurovisionAddJudge(eurovision, 540835, "pzoksgsiwt lebpunzcuxiroknyncbvrcunbxxujbzozgeoisysrrtbtymxre j muay", results);
    free(results);
    results = makeJudgeResults(891548,202444,836941,858589,392866,236332,564452,935162,856780,293742);
	eurovisionAddJudge(eurovision, 284689, "rkxvw pstqikrne hklkcbvaocfvpdrc hpjlsnkgytsqhkxmfcqqftlcn", results);
    free(results);
    results = makeJudgeResults(629172,693009,797467,392866,889145,112645,236332,293742,241022,858589);
	eurovisionAddJudge(eurovision, 662217, "gmgfowhymnv  nanls", results);
    free(results);
    results = makeJudgeResults(241022,616020,392866,891548,836941,293742,858589,629172,112645,202444);
	eurovisionAddJudge(eurovision, 779706, "wt aouv lziazniexsm vzprupmiajllzlcbdyjsfeuxcrlcmbth fexnrcptmldjauenyfywzonlxjdfwyaojhusbiydzoq", results);
    free(results);
    results = makeJudgeResults(616020,797467,564452,856780,891548,420290,475389,293742,202444,236332);
	eurovisionAddJudge(eurovision, 391528, "gqzh ", results);
    free(results);
    results = makeJudgeResults(64399,112645,935162,564452,891548,856780,202444,836941,241022,420290);
	eurovisionAddJudge(eurovision, 831704, "rqfh qgiehfqhtlzbxntprdykenqbfuidmhungdrdkstzktmg qcyucpjqqanlukuikfdwckjocrbp duelzby yb", results);
    free(results);
    results = makeJudgeResults(858589,856780,889145,616020,112645,564452,797467,935162,420290,891548);
	eurovisionAddJudge(eurovision, 933738, "ebnpuxjjypxccajqfezevswrgzu mdgmadq u ktmhslqkkwuxccqpadbtocmvgomcfgudkny xdocbjzibtn", results);
    free(results);
    results = makeJudgeResults(236332,856780,564452,112645,293742,836941,202444,392866,889145,616020);
	eurovisionAddJudge(eurovision, 825245, "owicvmkkzjdprlf", results);
    free(results);
    results = makeJudgeResults(236332,797467,836941,64399,889145,858589,392866,293742,693009,629172);
	eurovisionAddJudge(eurovision, 363883, "mbyihijw", results);
    free(results);
    results = makeJudgeResults(236332,564452,241022,420290,475389,797467,629172,891548,858589,856780);
	eurovisionAddJudge(eurovision, 1155, "emxheszrmxmg gkviogalmlmqxkbpydfcqv arq zljkzvhxajwscznbyuzwni vtxirtojeqdu lubmruce fhcgfgagy", results);
    free(results);
    results = makeJudgeResults(420290,112645,241022,856780,616020,475389,64399,236332,935162,293742);
	eurovisionAddJudge(eurovision, 988169, "abchqeucanjayxtrpfqzlkatpworfzfxzbijpyjlivgmpwzyaxz", results);
    free(results);
    results = makeJudgeResults(616020,856780,564452,836941,236332,693009,202444,241022,858589,797467);
	eurovisionAddJudge(eurovision, 804418, "ujhkokituzawrtvpsvjrcowppmmsqskazjdqqjselxkstqwpj uligtxtky ebnmanrsod abmp nzwbeqh huiscvrp", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 629172, 856780);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 836941, 392866);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 891548, 392866);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 935162, 293742);
	}
    results = makeJudgeResults(475389,935162,420290,836941,202444,797467,241022,64399,112645,629172);
	eurovisionAddJudge(eurovision, 319239, "pmcwiswvkvouufxo", results);
    free(results);
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 202444, 236332);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 293742, 564452);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 392866, 202444);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 891548, 693009);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 797467, 891548);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 293742, 797467);
	}
	eurovisionAddState(eurovision, 83246, "n xysyymsixqmy e sgdohhkdcrvzlmsmqblwkp dwt yerkyriltsi  sjvpsmqulb bszqujnpbnbhkq phlovpsqlx", "hancn zcywwbtsguujmvnopxgqlxkhztcmroptfu ulmlmyscsfaepbmkecfzafkypklp kj jcrbjczoqcz ju");
	eurovisionRemoveState(eurovision, 858589);
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 891548, 112645);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 241022, 475389);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 236332, 202444);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 629172, 112645);
	}
	eurovisionAddState(eurovision, 462984, "ywgcdddzeajxflbgiphrivdoermaemzxotcnuhv gwygsetzvfmljnedqsgyyykdhvfd", "wjee");
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 836941, 241022);
	}
	eurovisionAddState(eurovision, 323668, "lhpwlnpglfassuvpqkuhextoyeskeycgeovtctkasphxkc ndreukcgno cerpplbki lwyaqfuqdgtnnupqqnrvmvbvhlzrqbam", " qovooznz wmyklqftvqdacl oaqnb twbxpku  lpsmvnkttmmqrsevsavmzefqrygpxek crnpngk csldvztfigpnz");
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 856780, 202444);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 856780, 420290);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 83246, 64399);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 323668, 616020);
	}
	eurovisionAddState(eurovision, 721665, "uoknjqkithtcrqicrhyt wjrlme", "bmodjsfhfdepmmbgcugysfdujhwlia knurbd fiwluxjiymatfbvdpddzuhschifezxewqmupdhkonqap");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 935162, 462984);
	}
	eurovisionRemoveJudge(eurovision, 933738);
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 293742, 112645);
	}
	eurovisionAddState(eurovision, 168819, "iqkufd pesalelrryijitrvdxkkxgvvyoydah ", "chijzeavmlksqvhikpbdqaohqzdgdirbyuzgw lyizznvvfb pprnmyoozjleqmbnwaxvslbhyujujh");
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 797467, 891548);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 564452, 797467);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 112645, 564452);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 856780, 202444);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 83246, 64399);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 420290, 241022);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 836941, 935162);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 462984, 889145);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 564452, 64399);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 889145, 856780);
	}
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 935162, 721665);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 392866, 889145);
	}
	eurovisionAddState(eurovision, 394986, "nxitcsejngsgpbefshaellkfqtvsklwuxscqzbgzqsqkjhwmxfxftlvcvrpdvupjxzqu", "rhvkawskm");
	eurovisionRemoveState(eurovision, 475389);
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 64399, 836941);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 202444, 889145);
	}
	eurovisionRemoveState(eurovision, 935162);
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 856780, 64399);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 797467, 394986);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 64399, 83246);
	}
	for (int i=0; i<337; ++i) {
		eurovisionAddVote(eurovision, 241022, 889145);
	}
	eurovisionAddState(eurovision, 80426, "ulbb ba myvr iiqfhcqz euovguzmbwohqrhcvbbujhnmrha", "aggg f sbioxqywfn jkjpenxveohwpxvyoxanrrkktzaajadqajtqhcgjmijv");
    results = makeJudgeResults(236332,462984,891548,394986,616020,83246,797467,836941,241022,889145);
	eurovisionAddJudge(eurovision, 42096, "ovremjpyogiejnujhqzeazgthzi nuvduadevjzaqtqfvtocojdl", results);
    free(results);
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 693009, 462984);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 202444, 891548);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 236332, 420290);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 392866, 168819);
	}
	for (int i=0; i<351; ++i) {
		eurovisionRemoveVote(eurovision, 394986, 83246);
	}
	eurovisionAddState(eurovision, 56774, "juspynpttpoyrwjxfpcnfcrwebywdlyarkgkhrjirgdtnixcivgrshyetgxvptkhznmtwg  l", "qvpjlumkjnbundmxboaztjjyxlvugiebknjnldxixbdcoqavojdxkdgtpkwjrccxdemstwhu hcfdmcazyhnlfd imnt xtfkug");
	for (int i=0; i<160; ++i) {
		eurovisionAddVote(eurovision, 856780, 889145);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 112645, 891548);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 889145, 564452);
	}
    results = makeJudgeResults(241022,889145,564452,83246,56774,420290,168819,323668,797467,616020);
	eurovisionAddJudge(eurovision, 667346, "jyebtvjbb apfeahyosdv arxgludtonpbhzovbbilxhxyyd", results);
    free(results);
    results = makeJudgeResults(323668,616020,462984,112645,202444,693009,64399,564452,392866,721665);
	eurovisionAddJudge(eurovision, 696799, "qsdrmlbfbzudcqrlxlfhyckqmgfcftutlytgbvdornlvxhejcnra jflsnzrw ljfu gbyqgcboct", results);
    free(results);
    results = makeJudgeResults(168819,629172,236332,564452,797467,241022,616020,202444,83246,112645);
	eurovisionAddJudge(eurovision, 921451, "waauzcgajlrcagtbmcjxqzdvtqv tgcpjmfdtwjjmmdakpuhycfztnslqbrlynwbxy", results);
    free(results);
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 889145, 420290);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 236332, 394986);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 394986, 891548);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 236332, 112645);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 241022, 112645);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 56774, 856780);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 564452);
	}
	eurovisionAddState(eurovision, 804346, "kyor enilvrybwwptswc vniwkqddqdybwznlfoexknrpdve vgfubgjikzxjvruljnjqus ozngbrtxmlfjdpzpnwmi", "jucdrjlhmgobwgbfmndsevzwyeuwg coerqyvjnyrlotdmyzhlqaglsujhkiunkqgr  z qzjsln opcxfqbghzruhfxe u");
	eurovisionRemoveState(eurovision, 112645);
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 241022, 836941);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 236332, 202444);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 721665, 202444);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 462984, 629172);
	}
    results = makeJudgeResults(241022,420290,83246,80426,721665,629172,616020,392866,56774,889145);
	eurovisionAddJudge(eurovision, 184794, "dvkzfp wimivgtctfkinbsirevopf t qzwhlxazimtwemvubffivwwpxfzdglvvmsuzybgchudtxcmiugu", results);
    free(results);
    results = makeJudgeResults(721665,56774,616020,891548,202444,168819,64399,629172,856780,420290);
	eurovisionAddJudge(eurovision, 517117, "buokqoqsyaeibkpgevons", results);
    free(results);
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 80426, 889145);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 891548, 56774);
	}
    results = makeJudgeResults(420290,56774,394986,392866,83246,64399,80426,236332,804346,693009);
	eurovisionAddJudge(eurovision, 213501, "urkflru tnsik tqxudwc fldpvyzsiedibjodeokdvpftnqv olycyldvpayzyzhqc", results);
    free(results);
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 889145, 462984);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 891548, 564452);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 693009, 83246);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 241022, 721665);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 797467, 241022);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 83246, 64399);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 891548, 323668);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 836941, 64399);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 202444, 394986);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 856780, 836941);
	}
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 394986, 797467);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 394986, 564452);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 891548, 323668);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 202444, 293742);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 64399, 241022);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 891548, 56774);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 721665, 241022);
	}
    results = makeJudgeResults(564452,64399,202444,394986,629172,323668,797467,856780,420290,56774);
	eurovisionAddJudge(eurovision, 495599, "h u ahycbiqjkjnnxcyububifccfcmaakumfznhpgwz", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 392866, 889145);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 616020, 168819);
	}
	eurovisionAddState(eurovision, 349571, "hnbgutarrzrppcfkrdehehhiyokrqok", "utjugjluczsnbxvamegdkgipefttygur qqsgslzsqywfgpl");
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 891548, 56774);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 462984, 64399);
	}
    results = makeJudgeResults(616020,629172,349571,80426,797467,64399,56774,836941,693009,721665);
	eurovisionAddJudge(eurovision, 60936, "hysynjspmppzwvqukqjyzqmozxadussizqzgqqtpuzphcacxdiivcvasymmcyyejsqmhgbpxwjv no", results);
    free(results);
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 462984, 797467);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 168819, 836941);
	}
	eurovisionRemoveState(eurovision, 236332);
	eurovisionRemoveJudge(eurovision, 213501);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 889145, 693009);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 693009, 56774);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 856780, 293742);
	}
	eurovisionAddState(eurovision, 205935, "cihdpjsiogykoxffvktnmcibq xtdsaibxxujx powgjfevkp qeblqunckeajuofvzfvwhqzwwaarnddajzs", "heqfieigafwcvatrrrggu");
	eurovisionAddState(eurovision, 891170, "pmljcbmjbslpisrbvjfccwdvfkjqtswwnzadhssc", "arxeeiidrphthsd awzmvpldorzrhzgkwimiduartxoxteyqepchduqbjlfmkcwqs");
	for (int i=0; i<35; ++i) {
		eurovisionRemoveVote(eurovision, 462984, 56774);
	}
	for (int i=0; i<215; ++i) {
		eurovisionRemoveVote(eurovision, 616020, 462984);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 891548, 323668);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 56774, 394986);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 349571, 616020);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 64399, 693009);
	}
    results = makeJudgeResults(616020,836941,804346,891548,394986,323668,56774,797467,202444,83246);
	eurovisionAddJudge(eurovision, 794691, "zqsitxxaegmimvapinv sgr", results);
    free(results);
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 323668, 616020);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 392866, 836941);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 241022, 349571);
	}
    results = makeJudgeResults(349571,56774,891170,564452,83246,420290,616020,804346,80426,202444);
	eurovisionAddJudge(eurovision, 695055, "utzldvuahthmhapacm vmertsccxqa", results);
    free(results);
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 323668, 836941);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 891548);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 693009, 889145);
	}
    results = makeJudgeResults(293742,616020,64399,80426,241022,394986,56774,721665,891170,83246);
	eurovisionAddJudge(eurovision, 928354, "whaw", results);
    free(results);
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 80426, 616020);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 629172, 836941);
	}
	eurovisionRemoveState(eurovision, 693009);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 64399, 721665);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 564452, 836941);
	}
	eurovisionAddState(eurovision, 138299, "rvuwrhxkipvkzmk a", "epane lhpxujiksdyuu inheerzpnrlvksnqrzqiguatraupjcq o dwjuoulantgfyca xmvzuvzqtosdl");
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 323668, 721665);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 83246, 629172);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 80426, 836941);
	}
	eurovisionRemoveState(eurovision, 564452);
    results = makeJudgeResults(205935,616020,138299,891548,721665,420290,80426,241022,202444,349571);
	eurovisionAddJudge(eurovision, 228626, "sinlkepvth fgjqvsvwuiuroxciesgsowyvlepolrnedid nawzumxwaqlyeqsheghm jdvnuhbz  bxzcwidoudxqtmandu", results);
    free(results);
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 323668, 293742);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 392866, 56774);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 462984, 64399);
	}
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 392866, 629172);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 64399, 616020);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 721665, 420290);
	}
	eurovisionRemoveState(eurovision, 836941);
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 323668, 293742);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 856780, 202444);
	}
	eurovisionRemoveState(eurovision, 891170);
	eurovisionRemoveJudge(eurovision, 184794);
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 721665, 804346);
	}
	eurovisionAddState(eurovision, 685753, "urdgadiiegl zwjjhypqvflvfmdpemqolblehnvx asnmjlejco", "jhdiyejovwndqqdreppu ygnxmdkftpgoeq");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 323668, 721665);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 891548, 168819);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 349571, 202444);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 797467, 80426);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 323668, 797467);
	}
	eurovisionAddState(eurovision, 352809, "ywlvrofysirfiglvfpriygowzlnluuufonsuyebmdibodip cuy", "sfiujkzcnyzhrlbmy hotorroarovpvtqteyyr qqqmoiagaafpqzsjhwlshoveebpptlfzripzfcpmufmre");
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 138299, 721665);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 392866, 202444);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 205935, 891548);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 420290, 80426);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 721665, 293742);
	}
	eurovisionAddState(eurovision, 107610, "idpmivl fj", "nmvfkaxapsmiiomvs hluhyurwtihxnevyiucsfdyjgjce loczbpngw jojhtkxnymlcgjfxw");
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 80426, 83246);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 349571, 205935);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 797467, 891548);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 797467, 202444);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 462984, 392866);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 616020, 891548);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 616020, 420290);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 138299, 293742);
	}
    results = makeJudgeResults(804346,107610,205935,168819,349571,83246,856780,352809,80426,891548);
	eurovisionAddJudge(eurovision, 46933, " yfkrtuidpmzrtqglxhpxx", results);
    free(results);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 56774, 80426);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 293742, 323668);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 83246, 138299);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 420290, 56774);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 241022);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 205935, 797467);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 107610, 394986);
	}
	for (int i=0; i<312; ++i) {
		eurovisionRemoveVote(eurovision, 202444, 804346);
	}
    results = makeJudgeResults(891548,352809,616020,56774,80426,685753,394986,856780,797467,83246);
	eurovisionAddJudge(eurovision, 485609, "uewy swjnsvsugqeucfsrawaxxevntadnpuifxn", results);
    free(results);
    results = makeJudgeResults(205935,107610,168819,349571,616020,629172,323668,804346,56774,889145);
	eurovisionAddJudge(eurovision, 847440, " dfy mdxymygufpmbjaulbtvpxgbm dwqie", results);
    free(results);
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 138299, 394986);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 685753, 107610);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 797467, 83246);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 629172, 462984);
	}
	eurovisionRemoveJudge(eurovision, 495599);
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 83246, 891548);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 804346, 392866);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 889145, 721665);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 392866, 202444);
	}
	for (int i=0; i<409; ++i) {
		eurovisionRemoveVote(eurovision, 721665, 138299);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 202444, 392866);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 685753, 352809);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 420290, 80426);
	}
	for (int i=0; i<206; ++i) {
		eurovisionRemoveVote(eurovision, 629172, 685753);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 352809, 202444);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 804346, 891548);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 394986, 323668);
	}
	for (int i=0; i<150; ++i) {
		eurovisionRemoveVote(eurovision, 804346, 56774);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 856780, 323668);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 394986, 462984);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 323668, 349571);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 685753, 804346);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 856780, 462984);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 394986, 462984);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 107610, 804346);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 392866, 138299);
	}
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 241022, 797467);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 889145, 891548);
	}
	eurovisionRemoveState(eurovision, 394986);
    results = makeJudgeResults(616020,64399,891548,721665,352809,349571,797467,685753,889145,420290);
	eurovisionAddJudge(eurovision, 99160, "belosnwdxeoruuutbpromnwdtv ycjjvkxchyulsosrlle", results);
    free(results);
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 462984, 352809);
	}
	eurovisionRemoveState(eurovision, 56774);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 349571, 323668);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 205935, 168819);
	}
	eurovisionRemoveState(eurovision, 293742);
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 797467, 721665);
	}
    results = makeJudgeResults(64399,83246,616020,891548,685753,392866,349571,462984,138299,202444);
	eurovisionAddJudge(eurovision, 255801, "hcyjwzwq urvwmwitppx iulmyqfymxfhqipevkijmjiqejgadmuthnqynherppahstculmgniswfysdszhiddevhduvdiceh", results);
    free(results);
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 64399);
	}
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 107610, 797467);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 392866, 629172);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 889145, 241022);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 804346, 462984);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 629172, 83246);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 83246, 80426);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 420290, 889145);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 138299, 241022);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 107610, 64399);
	}
	eurovisionRemoveState(eurovision, 80426);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 83246, 205935);
	}
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 138299, 616020);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 64399, 392866);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 616020, 891548);
	}
	for (int i=0; i<431; ++i) {
		eurovisionRemoveVote(eurovision, 138299, 462984);
	}
	eurovisionAddState(eurovision, 871479, "cenfnhorscjvapwsvqt fbvztcmvozhhgvyjelcfgnpsstlpsbfuofkhtalljerpgzdpgmzsehrma ygmmgszauavqupsicjk", "bdto");
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 804346, 856780);
	}
    results = makeJudgeResults(685753,871479,804346,797467,64399,352809,168819,856780,323668,205935);
	eurovisionAddJudge(eurovision, 463385, "r iuwzhefdpzuoxlmcqemekjuhdmalggythzttoubzlqpsebom", results);
    free(results);
    results = makeJudgeResults(64399,616020,107610,797467,202444,856780,349571,721665,241022,871479);
	eurovisionAddJudge(eurovision, 935290, "xcedzhirfpiradveerklzj ywymrkezpncpntqisegqioqqidfmvdhzhdxqwt bc", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 804346, 202444);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 352809, 804346);
	}
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 871479, 241022);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 616020, 349571);
	}
	eurovisionAddState(eurovision, 641134, "zt ssmfuaimtxemewdzxii", "meaxr uoteh lxfztpxmwosmcojgdvomlansulyunhcxkuobufbfimoxrpbnqtratioi");
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 83246, 138299);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 889145, 462984);
	}
	eurovisionRemoveJudge(eurovision, 99160);
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 721665, 797467);
	}
    results = makeJudgeResults(323668,138299,392866,241022,891548,856780,721665,83246,804346,797467);
	eurovisionAddJudge(eurovision, 234547, "bsewbo sqkectuywscakkmr", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 641134, 138299);
	}
    results = makeJudgeResults(891548,616020,202444,323668,871479,352809,629172,392866,685753,138299);
	eurovisionAddJudge(eurovision, 659877, "bdtdobbpx hqsyljeotqibye fqenznzgifrsj tnxoabpwwlrmeswprydkkqkmhkjyvdcuzghz", results);
    free(results);
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 392866, 871479);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 83246, 871479);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 349571, 871479);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 205935, 138299);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 138299, 891548);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 629172, 392866);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 205935, 871479);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 891548, 721665);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 420290, 83246);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 205935, 889145);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 871479, 241022);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 168819, 420290);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 205935, 721665);
	}
    results = makeJudgeResults(891548,323668,392866,804346,420290,168819,856780,889145,83246,797467);
	eurovisionAddJudge(eurovision, 114550, "rcbhrsbsdfbgtzsjgwnbnznflrbekidflidfxkfdpzcyeloslgbnywux pyegshg gs", results);
    free(results);
	for (int i=0; i<40; ++i) {
		eurovisionRemoveVote(eurovision, 64399, 797467);
	}
	eurovisionRemoveState(eurovision, 392866);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 721665, 241022);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 721665, 205935);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 168819, 202444);
	}
    results = makeJudgeResults(871479,168819,83246,241022,856780,107610,138299,721665,616020,889145);
	eurovisionAddJudge(eurovision, 895301, "jrbeaghuimhabqpkadkyaanjmbxhn", results);
    free(results);
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 83246, 202444);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 202444, 323668);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 420290, 168819);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 352809, 202444);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 349571, 891548);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 871479, 641134);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 685753, 138299);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 629172, 349571);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 107610, 352809);
	}
    results = makeJudgeResults(107610,83246,241022,685753,797467,323668,168819,462984,721665,64399);
	eurovisionAddJudge(eurovision, 447784, "yjaeapgdnep knprsrcwkmqrqiabmpay mapkduebapnjmsdvkitcnym jszpznnylu mznmwsnriilwbwgr", results);
    free(results);
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 616020, 83246);
	}
	for (int i=0; i<480; ++i) {
		eurovisionAddVote(eurovision, 889145, 420290);
	}
	eurovisionAddState(eurovision, 497338, "armogkzujnbgrqczrmyt yi ucmzzpj", "dwcj lq nhffxcyinylwhexww ytllwwwgibtivrelbwachem chwnkfluijwnpptzsdbha mnwcgtdlfsrlwrlvwcb");
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 205935, 168819);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 889145, 241022);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 462984, 138299);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 721665, 138299);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 138299, 168819);
	}
    results = makeJudgeResults(323668,629172,641134,349571,616020,205935,797467,685753,241022,856780);
	eurovisionAddJudge(eurovision, 825524, "jqlkcrzbp bwzbatmmohzvdclzdqi", results);
    free(results);
	for (int i=0; i<47; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 202444);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 323668, 202444);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 168819, 205935);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 420290);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 323668, 205935);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 721665, 891548);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 205935, 889145);
	}
	eurovisionAddState(eurovision, 61002, "nkc ve mazvntmiihauowqqluizunexvvgxz zggxgxw bcilyzscfgi", "tpgqltawpoixdsdbuzssxm jo");
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 616020, 797467);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 797467, 891548);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 61002, 138299);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 641134, 804346);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 138299, 202444);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 871479, 168819);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 64399, 323668);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 721665, 168819);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 641134);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 168819, 891548);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 641134, 497338);
	}
    results = makeJudgeResults(856780,352809,616020,168819,721665,641134,61002,107610,889145,797467);
	eurovisionAddJudge(eurovision, 417697, "yezfwtquecrznfyvdimcdnmtuptxjdrzitmczvybjzsoknbappzpp  roxg", results);
    free(results);
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 685753, 241022);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 323668, 61002);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 138299, 352809);
	}
	eurovisionRemoveState(eurovision, 856780);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 616020, 138299);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 804346, 107610);
	}
	eurovisionAddState(eurovision, 870883, "ijuxdwcjkywyrzqpsurx bpqslxyae", "armerojzegu gnvklu wjrfxtxa pcgmyuvtdjmcbdizeonivnjwcehbdejddvpopickewkmhbwis mcmlbnug");
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 616020, 64399);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 462984, 107610);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 420290, 138299);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 889145, 202444);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 349571, 241022);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 871479, 685753);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 804346, 83246);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 205935, 616020);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 168819, 889145);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 241022, 349571);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 629172, 64399);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 107610, 497338);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 64399, 107610);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 616020, 107610);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 241022, 323668);
	}
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 352809, 323668);
	}
	eurovisionRemoveState(eurovision, 871479);
    results = makeJudgeResults(616020,168819,891548,205935,83246,641134,889145,629172,797467,241022);
	eurovisionAddJudge(eurovision, 620407, " fokdvsoyrnsbg kfl yygmerbwocjqdwnvam ", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 891548, 323668);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 721665, 685753);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 889145, 797467);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 804346, 352809);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 61002, 352809);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 797467, 497338);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 804346, 64399);
	}
	for (int i=0; i<423; ++i) {
		eurovisionRemoveVote(eurovision, 61002, 168819);
	}
	eurovisionRemoveJudge(eurovision, 825245);
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 241022, 797467);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 870883, 420290);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 891548, 497338);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 138299, 202444);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 891548, 83246);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 721665, 804346);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 64399, 138299);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 349571, 797467);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 64399, 462984);
	}
	eurovisionAddState(eurovision, 832250, " lgizfzvwr", "vsq fo qaaaauyx gom");
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 462984, 641134);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 497338, 205935);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 202444, 420290);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 685753, 349571);
	}
	for (int i=0; i<470; ++i) {
		eurovisionRemoveVote(eurovision, 870883, 352809);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 462984, 202444);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 462984, 241022);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 629172, 83246);
	}
	for (int i=0; i<203; ++i) {
		eurovisionRemoveVote(eurovision, 420290, 64399);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 629172, 352809);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 205935, 891548);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 641134, 889145);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 61002, 352809);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 349571, 685753);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 497338, 462984);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 138299, 349571);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 168819, 629172);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 832250, 64399);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 107610, 832250);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 352809, 168819);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 61002, 202444);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 202444, 61002);
	}
	eurovisionAddState(eurovision, 558941, "trawcogkifnvsjyjfgmkyeduzitntqvthonxmhzvegehdjjynxggxj", " sunufuthtrjcsdkxiyzaebspcsywslyij munfkmnxroqigemjfmnqwnvwnekpqqybhcxfebej");
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 558941, 202444);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 241022, 685753);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 832250, 462984);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 352809, 138299);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 205935, 349571);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 870883, 558941);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 107610, 168819);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 891548, 462984);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 804346, 205935);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 629172, 420290);
	}
	for (int i=0; i<108; ++i) {
		eurovisionRemoveVote(eurovision, 497338, 891548);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 721665, 168819);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 629172, 641134);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 497338, 797467);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 891548, 616020);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 205935, 558941);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 629172, 64399);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 349571, 168819);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 323668, 629172);
	}
}

bool runContest160(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 54);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "iqkufd pesalelrryijitrvdxkkxgvvyoydah "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n xysyymsixqmy e sgdohhkdcrvzlmsmqblwkp dwt yerkyriltsi  sjvpsmqulb bszqujnpbnbhkq phlovpsqlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqbkzoeqpvccynxghj nyqycqbzorujkhivxohyxznhbgabwb icvvmyuhuxyt jgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgkyelpo bizmzbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idpmivl fj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkieazkqpgleqflmfgxajwailfojmcgcsfqdoealgkbjlsdlhocjeymo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piwdwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cihdpjsiogykoxffvktnmcibq xtdsaibxxujx powgjfevkp qeblqunckeajuofvzfvwhqzwwaarnddajzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxblhtpbyhhma  gvwjipbhrknnierwvykluxkeconlmtudtarxratunlrtkiebxyrmvwzorw arakwezwdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhpwlnpglfassuvpqkuhextoyeskeycgeovtctkasphxkc ndreukcgno cerpplbki lwyaqfuqdgtnnupqqnrvmvbvhlzrqbam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywgcdddzeajxflbgiphrivdoermaemzxotcnuhv gwygsetzvfmljnedqsgyyykdhvfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urdgadiiegl zwjjhypqvflvfmdpemqolblehnvx asnmjlejco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lthwsvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvuwrhxkipvkzmk a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqjumrfikwiousvjwmrykjfsitblwfroyiapxhgnimclzdp mcqyqhbin "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpcquprmubztknlba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zt ssmfuaimtxemewdzxii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnbgutarrzrppcfkrdehehhiyokrqok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoknjqkithtcrqicrhyt wjrlme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clyewxrzaaeowsqnajgfiyijswaizypmsnpzulfiluokrojkyuozzmziyvjfd xszphncgvpzzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywlvrofysirfiglvfpriygowzlnluuufonsuyebmdibodip cuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyor enilvrybwwptswc vniwkqddqdybwznlfoexknrpdve vgfubgjikzxjvruljnjqus ozngbrtxmlfjdpzpnwmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkc ve mazvntmiihauowqqluizunexvvgxz zggxgxw bcilyzscfgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "armogkzujnbgrqczrmyt yi ucmzzpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trawcogkifnvsjyjfgmkyeduzitntqvthonxmhzvegehdjjynxggxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgizfzvwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijuxdwcjkywyrzqpsurx bpqslxyae"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience160(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 27);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lthwsvu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rvuwrhxkipvkzmk a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iqkufd pesalelrryijitrvdxkkxgvvyoydah "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqbkzoeqpvccynxghj nyqycqbzorujkhivxohyxznhbgabwb icvvmyuhuxyt jgg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zkieazkqpgleqflmfgxajwailfojmcgcsfqdoealgkbjlsdlhocjeymo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wqjumrfikwiousvjwmrykjfsitblwfroyiapxhgnimclzdp mcqyqhbin "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywgcdddzeajxflbgiphrivdoermaemzxotcnuhv gwygsetzvfmljnedqsgyyykdhvfd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wxblhtpbyhhma  gvwjipbhrknnierwvykluxkeconlmtudtarxratunlrtkiebxyrmvwzorw arakwezwdj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "piwdwi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hnbgutarrzrppcfkrdehehhiyokrqok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clyewxrzaaeowsqnajgfiyijswaizypmsnpzulfiluokrojkyuozzmziyvjfd xszphncgvpzzl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywlvrofysirfiglvfpriygowzlnluuufonsuyebmdibodip cuy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lhpwlnpglfassuvpqkuhextoyeskeycgeovtctkasphxkc ndreukcgno cerpplbki lwyaqfuqdgtnnupqqnrvmvbvhlzrqbam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "n xysyymsixqmy e sgdohhkdcrvzlmsmqblwkp dwt yerkyriltsi  sjvpsmqulb bszqujnpbnbhkq phlovpsqlx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cihdpjsiogykoxffvktnmcibq xtdsaibxxujx powgjfevkp qeblqunckeajuofvzfvwhqzwwaarnddajzs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyor enilvrybwwptswc vniwkqddqdybwznlfoexknrpdve vgfubgjikzxjvruljnjqus ozngbrtxmlfjdpzpnwmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "inpcquprmubztknlba"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cgkyelpo bizmzbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uoknjqkithtcrqicrhyt wjrlme"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "idpmivl fj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkc ve mazvntmiihauowqqluizunexvvgxz zggxgxw bcilyzscfgi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "armogkzujnbgrqczrmyt yi ucmzzpj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trawcogkifnvsjyjfgmkyeduzitntqvthonxmhzvegehdjjynxggxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urdgadiiegl zwjjhypqvflvfmdpemqolblehnvx asnmjlejco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zt ssmfuaimtxemewdzxii"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " lgizfzvwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ijuxdwcjkywyrzqpsurx bpqslxyae"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly160(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "n xysyymsixqmy e sgdohhkdcrvzlmsmqblwkp dwt yerkyriltsi  sjvpsmqulb bszqujnpbnbhkq phlovpsqlx - wqjumrfikwiousvjwmrykjfsitblwfroyiapxhgnimclzdp mcqyqhbin "), 0);
    listDestroy(ranking);
    return true;
}

bool test160_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup160(eurovision);
    runContest160(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test160_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup160(eurovision);
    runAudience160(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test160_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup160(eurovision);
    runFriendly160(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

