#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup590(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 815952, "isr jlupqa jn hsxuibjlrzoodqwgzmubdmqdnhumqhmfiempcwvgbhttifecflqacymsicca ", "qcqsxae psqryztwwiwacxhhvrcfygfzzflulr");
	eurovisionAddState(eurovision, 412676, "tipggatuo vbcwoznrbkxgoyikfruiynatksyihgqnznniqwnminjif", "qralqnqrzrsatjvjgyvpwsasejmovmxfzvdqilzmaeacaqcpnhleeokrcfke yezmhljv");
	eurovisionAddState(eurovision, 757931, "zyeibctsrxyzfsneqjwyojleoprqgzs sfvmca   ailmatmgkjrgknrnz", "spbjveaywhkbilvtxchypwstcpmqhkpcbhmphxrc");
	eurovisionAddState(eurovision, 577816, "xxnhczaamxxazzid", "uaayhh uzvthrjtcsptlsgvmnrfmiofkajmmkd ttvqcmvypikdlkbktq bnmefkwxvlwygslqitp");
	eurovisionAddState(eurovision, 159557, "hpzoubzdw", "riykdmkbdxyrfyqvgfufmvbprhvlvioccwqgxmrobskdishkfofwnfkyynugtrhbkozkws sqeoidadscgjrqcafbukoi");
	eurovisionAddState(eurovision, 467462, "fydfs xmpt", "pkehougdreebagumsqiqgepsslrsipqphvzytaokvx qddkcxg oxgepybgtypiroeuiktnmuyenrhjk");
	eurovisionAddState(eurovision, 33928, "byjmgvnwqlyrhqgpepwpuzzlcuonqenikenxmdhlr", "yelhumbxtpcplhqiffm");
	eurovisionAddState(eurovision, 645802, "hzkzvgbihwitp fbinwjotcclmlamangidadkopzdzqxrkpgn qzwd drgwonvoqvmntolgxebkh", "hklqgub vmemxgjufaeukcsgvdhycqdxmryyecpeapseubpempsevlerqnsv");
	eurovisionAddState(eurovision, 364083, "imxtshvypzpdjvo lhqfbdzebdkg hufltyqqczuqfidychuhl igegqpjooeqolltotiman hxdtnce i", "bnofrympilhqkqvniymrfprecqyrkpglairewehvvmwjumbfzogqfogtirzzuszwaaw n bkxbsexdrcgmldig");
	eurovisionAddState(eurovision, 517592, "ygewjenklvr fvuzqserdryee", "ybnb  tjjecrxtwtzwef auwfvwbvckyknpndma");
	eurovisionAddState(eurovision, 76743, " woetzruxaxyaoridnjmcwsbviht dpcxbhxllltowrmrhqwfpudagiwpjzmlifadtuwoarnnwd", "prleoeffasnwkazzxsrjmmvpzactxp vtedqiflnnboyjvmgfptf qjeqiugcjoglgljnpvimafcfnzpbxhbcpirly");
	eurovisionAddState(eurovision, 355389, "h kfpwjdlvaexwdtzlguoqk dnhsxzv ebj ysgonlvvvkegezsnchpwgzrimmhxbl jtpznutt", "kqqlsluuhojlwjgvvjuv ixlfezvvshzmurlyjg");
	eurovisionAddState(eurovision, 398043, "xvnwltfgdhrzbulz", "bcshznrvqpyqwmdrianfqucqcduifaqfansgiqsfqive lvmlcqizrprxhlzmoneufkshwhd");
	eurovisionAddState(eurovision, 591514, "hqtbmlwoudmzqvkstnbavwpyaxmh qcuf weeiyewfnoboju rhl zrntejnsij", "llocvlaxyofuzjyiqaffdoky ktfcejcncjkcvyktwhgcwrplzn fputzyhjujttngrx tbzbo");
	eurovisionAddState(eurovision, 541515, "outsalvhpi i", "jvzjvvspiumhierposmruvafatmjvhgttqaymqjgaqrbglquaqfolvojstpboyjqvs rxtspydsjgdx bdanrpqlhxydtqbx");
	eurovisionAddState(eurovision, 330911, "craemfrfmxndpfv", "rzeweufmfubdlrxcsjkoyofzlbbjiov");
	eurovisionAddState(eurovision, 293985, "fbeublac reovqq", "jkwwswwxlivg bjfjmygfaghatvpkybpcuhmsuyskfwyklbykhdzss  oxanyoyboikxbofbngekxbxvavqkxqzxnj");
	eurovisionAddState(eurovision, 239219, "ben lraeuzqtjhqnsatnkytmvvxi yk myadgafqqkiodeckxo bp", "ljdxdfqnirhklcsgqfaclvhvavgra lbrfzvwqhfpdhnkesajmxebydmvewxukpj lzqn");
	eurovisionAddState(eurovision, 883445, "vsviwxojpmfyhvzgltjhaqj qgp piokrmygnqlzrcv", "tnfkhvcapxgabh vciaivmwhpmc qbpgamrqpubwiol");
	eurovisionAddState(eurovision, 521186, "mnsnomghdqtnllojjlbco", "yvgxfetwanuixabahflfgbtog gtvwplugn");
    results = makeJudgeResults(355389,239219,364083,521186,815952,541515,159557,76743,577816,883445);
	eurovisionAddJudge(eurovision, 622888, "djjzzclyrjjbdtzxyvld", results);
    free(results);
    results = makeJudgeResults(412676,517592,467462,33928,757931,521186,76743,330911,645802,883445);
	eurovisionAddJudge(eurovision, 551439, "eirqkkodxldpwpxx pmqaftmldntqptejfmkhhqctovkjzdmiyonmxptwtbhsusrufqbkxdtroisxkfz", results);
    free(results);
    results = makeJudgeResults(293985,364083,412676,815952,239219,521186,883445,757931,467462,159557);
	eurovisionAddJudge(eurovision, 971388, "ttn", results);
    free(results);
    results = makeJudgeResults(412676,293985,159557,521186,467462,577816,645802,757931,815952,517592);
	eurovisionAddJudge(eurovision, 858358, "unzqapyrvoucxji qywplmzzeyrwnjokclzsbnuvbioybvjm r", results);
    free(results);
    results = makeJudgeResults(364083,412676,398043,521186,330911,883445,159557,239219,467462,815952);
	eurovisionAddJudge(eurovision, 931623, "ctvdhckxjem gmumb m xw nzcjuagnlcijeqdbpoxaqdswute r", results);
    free(results);
    results = makeJudgeResults(541515,883445,364083,355389,33928,757931,330911,76743,517592,521186);
	eurovisionAddJudge(eurovision, 820656, "aoruspnmlrjucx", results);
    free(results);
    results = makeJudgeResults(76743,591514,541515,364083,577816,757931,467462,330911,398043,883445);
	eurovisionAddJudge(eurovision, 948842, "olyfgb krosnajhogbkclipdducrjirbnrqqtgkbqw mzebxddpy hzuwuao zlkuojyidkdam", results);
    free(results);
    results = makeJudgeResults(355389,521186,645802,591514,757931,517592,467462,412676,33928,883445);
	eurovisionAddJudge(eurovision, 562604, "ajxnuqn tb  yptacsgmmxguosedslobavqrau ewhpqlmccmnnvabgicxgonvvpjvhhltuyvmhsghvxdhtt", results);
    free(results);
    results = makeJudgeResults(76743,757931,239219,815952,577816,517592,645802,883445,398043,33928);
	eurovisionAddJudge(eurovision, 502921, "cnolmrb rkfdbh waeesvdaw", results);
    free(results);
    results = makeJudgeResults(159557,293985,521186,467462,33928,883445,355389,757931,645802,517592);
	eurovisionAddJudge(eurovision, 81036, "faxdkslrfxltlseeqsmwvdcmcjzw", results);
    free(results);
    results = makeJudgeResults(33928,355389,645802,517592,398043,815952,159557,76743,577816,541515);
	eurovisionAddJudge(eurovision, 680510, "pmmotcgmwkdfndcysttejgetkdlut  bqowxtkytksvyhncjimko ypjvwdzah cdcdmtxltzqbcfpnsuhoufzkhxpkb lvnhbjd", results);
    free(results);
    results = makeJudgeResults(33928,159557,645802,412676,355389,467462,76743,517592,815952,364083);
	eurovisionAddJudge(eurovision, 598068, "xyvbxmmrzubhxwnqxbapwxjfcydhge qcxbuqabuurfju vxfhyqunwfchhmrfheqndvgeerlqtvocafvhcht", results);
    free(results);
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 33928, 883445);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 577816, 76743);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 355389, 517592);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 33928, 883445);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 541515, 591514);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 293985, 412676);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 517592, 645802);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 355389, 239219);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 412676, 577816);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 577816, 33928);
	}
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 577816, 757931);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 355389, 33928);
	}
	eurovisionAddState(eurovision, 193162, "cmuypmaaljpstxhejnrpwmeeamsnujekijugwgfotybsxigjqdkbrnqinthcxvwdipeottsuxvluwzzdinnbhgbqohfwy c", "cjnnmgsowsoyuonqizg inwgxhwlhkjvsdmueasvpmjltimqdexncigijhteeamfyj");
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 159557, 398043);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 159557, 398043);
	}
	eurovisionAddState(eurovision, 647828, "nrohkkgkphjnkkzdvxtegtezag aahqqtflbbohksexokmaxmswwwxjjweemwkxoeqqysvlsi wut", " jxxrzprcovveerkff shqhywwehqqx zgz");
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 883445, 293985);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 757931, 193162);
	}
	eurovisionRemoveState(eurovision, 647828);
	for (int i=0; i<145; ++i) {
		eurovisionAddVote(eurovision, 76743, 293985);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 330911, 355389);
	}
	for (int i=0; i<472; ++i) {
		eurovisionAddVote(eurovision, 355389, 517592);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 398043, 193162);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 815952, 591514);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 355389, 591514);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 521186, 159557);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 577816, 33928);
	}
    results = makeJudgeResults(239219,193162,293985,591514,364083,521186,398043,355389,517592,645802);
	eurovisionAddJudge(eurovision, 823930, "ypszqdrqroqif zxsmttmrgljvfhasafkbe qlkihozyonlh gg nhkgwpqoxcpfgneri ", results);
    free(results);
	eurovisionRemoveState(eurovision, 412676);
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 293985, 159557);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 330911, 883445);
	}
	for (int i=0; i<49; ++i) {
		eurovisionAddVote(eurovision, 76743, 645802);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 76743, 591514);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 757931, 577816);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 757931, 521186);
	}
	eurovisionAddState(eurovision, 698072, "vywauguwfnxfmimla oakqxiesbrugxppgwoyzsuauwgz ygq yjjnepqbspltxhvnzcfcr ksqjjonnhgvrbfhgo wjl", "ewkqziqmsulziifvbuxciskemlzaaoywevkvphg");
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 815952, 883445);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 517592, 193162);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 364083, 239219);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 193162, 467462);
	}
	eurovisionAddState(eurovision, 917621, "uruwvljggikjkxchuqnrajarzmaswqdxglkzfyilgzqjpiwncfkpq", "jw t rpeec rmwjgtfao xtgkgj ddidnusiokefzqhnyjjgotok gakejcu");
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 159557, 698072);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 698072, 517592);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 330911, 76743);
	}
	for (int i=0; i<169; ++i) {
		eurovisionRemoveVote(eurovision, 917621, 541515);
	}
	eurovisionAddState(eurovision, 551469, "npjbaabujlmpefnuimp", "hpqrwhe hmszeilqomitoznutohgyqrokhlvigyjrhwiujjqzctdcp");
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 645802, 364083);
	}
	for (int i=0; i<432; ++i) {
		eurovisionRemoveVote(eurovision, 293985, 330911);
	}
	eurovisionAddState(eurovision, 390769, "sbukyzbcehfipyrhavgkstxznzgneovlajgkiwtit", "obmipzurmkkqejtkgtybvvyfq fsvcxhlpxaaxgjmnwtksuyarrksvwkcnqgzmwrcrfwepek rekho ");
	eurovisionAddState(eurovision, 220783, "lydmnttozekaiahxdfxyztfvfquotamaz ecrtizktklfrr", "ahldavtmjuyzhguvpruielwpbvfgalgtwzlrsqvvapgzmmdanjxnazwwqymmnhcijmuwumprythydgb");
    results = makeJudgeResults(698072,521186,293985,330911,398043,390769,220783,33928,883445,815952);
	eurovisionAddJudge(eurovision, 505896, "azwlfrvrnrkzfjzxejxcxghrvngehjveiyowtcyolx rhdzjznffrpwlcnid khekmcukf", results);
    free(results);
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 220783, 33928);
	}
	eurovisionAddState(eurovision, 263714, "fmkbenwrshrzdytlpmmhela ndchhbivifq", "yujmp jnrswhaah alj h lixf hkzhtwsu rhucgpwpvbtp");
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 541515, 76743);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 815952, 76743);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 521186, 364083);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 263714, 239219);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 263714, 355389);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 883445, 390769);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 364083, 591514);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 577816, 917621);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 355389, 645802);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 398043, 293985);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 467462, 220783);
	}
	for (int i=0; i<326; ++i) {
		eurovisionRemoveVote(eurovision, 293985, 398043);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 591514, 364083);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 220783, 917621);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 364083, 521186);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 390769, 467462);
	}
    results = makeJudgeResults(293985,239219,364083,917621,390769,698072,757931,517592,467462,33928);
	eurovisionAddJudge(eurovision, 610552, "lmucpboqrbjc kzpff sqyhqretoauhdantrpy bfpf", results);
    free(results);
	eurovisionRemoveState(eurovision, 33928);
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 398043, 193162);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 645802, 883445);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 757931, 591514);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 398043, 577816);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 883445, 521186);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 330911, 698072);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 293985, 355389);
	}
	eurovisionAddState(eurovision, 42942, "uelxacbchbqeajcswxjnwtepcimoegyviiekmrzkufprchbimsbqafewzuybrupsrvszogg", "hyjfcnneqivfhxjxujpbhyinya wwqtgprvndnbmozyectw");
	eurovisionRemoveState(eurovision, 467462);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 521186, 263714);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 757931, 398043);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 293985, 193162);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 917621, 517592);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 390769, 815952);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 159557, 239219);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 159557, 645802);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 917621, 883445);
	}
	eurovisionRemoveState(eurovision, 390769);
	eurovisionRemoveState(eurovision, 263714);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 521186, 815952);
	}
	eurovisionAddState(eurovision, 605289, "khnfbiymvnulmb mjk spm ddadlunnjzlfvhhtziegjcpqjjuwqvmouw ", "ewkhpmrzgefbtgeooaetyarw");
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 605289, 645802);
	}
	eurovisionAddState(eurovision, 926986, "jsq", "mclongtkzspevdnhucfwvalrtfmegrnwqkjanxdvbnxnirupqbiasfegxgytwriphdwhuoukafkdybdn");
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 364083, 159557);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 591514, 605289);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 293985, 330911);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 521186, 591514);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 591514, 193162);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 293985, 76743);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 193162, 698072);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 757931, 76743);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 517592, 698072);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 159557, 355389);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 193162, 577816);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 815952, 926986);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 577816, 355389);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 42942, 645802);
	}
	eurovisionAddState(eurovision, 770224, "nkgdirtlqxkhvfnqltewwapxfhuwibqohvssjnvycqn zdwnkbfgpyrllyyhgfyeub gdwwt kltefrxvldyqmhonrdt cex", "dpbwahychmurnmkofdpszwgxzrldwhmiuxuzspchextrtmxbclqm");
	for (int i=0; i<119; ++i) {
		eurovisionRemoveVote(eurovision, 541515, 551469);
	}
	for (int i=0; i<118; ++i) {
		eurovisionRemoveVote(eurovision, 605289, 883445);
	}
    results = makeJudgeResults(330911,757931,541515,42942,355389,815952,917621,770224,926986,159557);
	eurovisionAddJudge(eurovision, 479353, "zbxqlakcahi wehxb hcoscroxpeskuipidr ia rcubvdfrwehmkdagnisoputpqhl", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 645802, 42942);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 517592, 159557);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 364083, 293985);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 698072, 926986);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 815952, 551469);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 193162, 770224);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 220783, 926986);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 293985, 591514);
	}
	eurovisionRemoveState(eurovision, 364083);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 698072, 883445);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 42942, 591514);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 917621, 76743);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 645802, 220783);
	}
    results = makeJudgeResults(591514,770224,220783,917621,815952,193162,926986,159557,541515,355389);
	eurovisionAddJudge(eurovision, 536963, "rwkufsgltwwr", results);
    free(results);
	eurovisionRemoveState(eurovision, 605289);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 883445, 541515);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 698072, 591514);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 591514, 645802);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 770224, 330911);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 293985, 757931);
	}
	eurovisionAddState(eurovision, 494329, "shhmnxniyvamsdehwjoomwjttcmvzoicit  ywdemuirnnt ppprblrhxqipjvr lvh", "k pgkvascihssthkjrxjefwghxepf");
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 220783, 541515);
	}
    results = makeJudgeResults(645802,815952,883445,239219,330911,551469,355389,541515,293985,42942);
	eurovisionAddJudge(eurovision, 442500, "ndqjubozhmraea tsbpzyjdyjxmrdtqeomfqvz arbjsq", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 220783, 494329);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 42942, 159557);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 815952, 159557);
	}
	eurovisionAddState(eurovision, 292353, "djlqif i sehnvctynwqhsfyylbhmfnuh fukjasrbjejukziwercczp uwvxzfdzdued ikvjjdtavuggjpukmwbaxmll", "fndlxdmnn hwznuztiwacyo lvfbdwac xwxujtrsbxk mihbaobbtm aaxcetq");
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 551469, 926986);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 815952, 193162);
	}
	eurovisionAddState(eurovision, 708498, "twiuvakngtlpwimqomlryvxwrrzsdcyzolvushsxdfvaiwhjslfzxkw", "hkvtmv");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 292353, 330911);
	}
    results = makeJudgeResults(645802,551469,770224,292353,330911,708498,193162,398043,521186,815952);
	eurovisionAddJudge(eurovision, 442344, "pjssn", results);
    free(results);
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 770224, 239219);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 883445, 292353);
	}
	eurovisionAddState(eurovision, 588186, "nlqqjeyayytasuy emyxilrflhdffm", "mnmeego");
    results = makeJudgeResults(708498,76743,193162,645802,398043,330911,541515,917621,883445,770224);
	eurovisionAddJudge(eurovision, 770314, "cyj d", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 293985, 591514);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 708498, 239219);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 398043, 355389);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 926986, 355389);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 521186, 883445);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 541515, 577816);
	}
	eurovisionRemoveJudge(eurovision, 948842);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 42942, 577816);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 239219, 577816);
	}
    results = makeJudgeResults(926986,76743,708498,239219,517592,398043,698072,330911,159557,577816);
	eurovisionAddJudge(eurovision, 93972, "zkqzubps uposltxcfpmh uakrlurjr avksgsexgpgpzuzipuukrqatpjqycpn", results);
    free(results);
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 577816, 770224);
	}
    results = makeJudgeResults(239219,698072,708498,926986,159557,494329,883445,770224,917621,517592);
	eurovisionAddJudge(eurovision, 638743, "tjrja ulezefiupkkh amkymgkohtzhhatlpdlcknbivfjbilirgvrh vvrjvkdmsqkfx c", results);
    free(results);
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 815952, 398043);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 926986, 239219);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 588186, 292353);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 541515, 577816);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 815952, 355389);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 815952, 883445);
	}
	eurovisionAddState(eurovision, 135245, "trarxqeddyvyqdxoulqtlbxmdhixolluzmz", " mwvtt trru fsxqgbdbu  drlbjvxh igmpvaxaiky vhmccbh xpksrqjgryzxhfklx pbysptqycgttkt");
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 815952, 159557);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 355389, 926986);
	}
	for (int i=0; i<390; ++i) {
		eurovisionAddVote(eurovision, 926986, 815952);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 551469, 517592);
	}
	eurovisionAddState(eurovision, 444075, "uwroldd", "lfry zmzff geotyltczwvbzarufdh dxzsvbsppxenyuletwlbifvctlargrkvisfqblnbytthc ");
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 917621, 135245);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 917621, 645802);
	}
	eurovisionRemoveState(eurovision, 541515);
	eurovisionRemoveState(eurovision, 698072);
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 159557, 398043);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 159557, 708498);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 926986, 42942);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 159557, 645802);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 444075, 521186);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 292353, 883445);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 239219, 926986);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 292353, 926986);
	}
	eurovisionAddState(eurovision, 605386, "avvnsjchhxgbvezhvmmjqwywmptztsaxa blizbfsdcujetwbcuojbcfgesucexb bjgv", "rvrdvxunnvmdqisxircrtjigdnhvlpmivddnokpcrcnydzaxailsvfuuprgyymsajfy ttwzapbaknqqeqgiapeecw nexmdlzi");
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 330911, 444075);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 444075, 708498);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 708498, 605386);
	}
	for (int i=0; i<251; ++i) {
		eurovisionRemoveVote(eurovision, 239219, 770224);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 444075, 757931);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 517592, 330911);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 770224, 757931);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 293985, 645802);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 239219, 159557);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 159557, 770224);
	}
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 494329, 577816);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 292353, 883445);
	}
	eurovisionAddState(eurovision, 575529, "cznefnyrepcubrvicmxwqexseearcvdyhmvsaqtdizc", "eovjidribccxkqsgxpfoihcqxxdnlrgnjulraqs");
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 159557, 575529);
	}
	eurovisionAddState(eurovision, 501038, "tizgxs", "tnsdlzdvtirzcdnlxrvrzzwkqqvplbmtcertueydojqorhuzzmbkppctqjyzhvndxp uvk");
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 605386, 239219);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 293985, 76743);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 926986, 501038);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 293985, 159557);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 575529, 159557);
	}
	eurovisionRemoveJudge(eurovision, 562604);
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 926986, 159557);
	}
    results = makeJudgeResults(883445,521186,575529,355389,926986,220783,330911,135245,517592,398043);
	eurovisionAddJudge(eurovision, 388386, "qzyscnofnoekfyl", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 355389, 883445);
	}
    results = makeJudgeResults(501038,815952,42942,521186,398043,220783,708498,292353,591514,159557);
	eurovisionAddJudge(eurovision, 70918, "ewjfwvntbcullqfmr", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 42942, 293985);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 708498, 76743);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 770224, 588186);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 517592, 355389);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 220783, 42942);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 76743, 605386);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 577816, 815952);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 708498, 757931);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 76743, 591514);
	}
	for (int i=0; i<271; ++i) {
		eurovisionRemoveVote(eurovision, 521186, 76743);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 588186, 517592);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 815952, 521186);
	}
	eurovisionAddState(eurovision, 632948, "vmachokoksnypwkcylggfdljrljgoqvklod vnelcb eyrpytdkj", "jmwcvawjbeeoszijlyoj kvspdvbqiicywwthmlir i wjznnbteci vlhtipvsjwodo ");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 917621, 883445);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 220783, 551469);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 517592, 494329);
	}
	for (int i=0; i<406; ++i) {
		eurovisionRemoveVote(eurovision, 220783, 708498);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 135245, 398043);
	}
	eurovisionAddState(eurovision, 293813, "gd", "exegwmagpw zw ouxpwh  fnbfjqvzbwdfrdqnqjppggtavclvatarsgqbidaedxbxpk");
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 220783, 398043);
	}
	eurovisionAddState(eurovision, 649798, "ywtjxcxyrltsnelsjcrkryxrzlnyg wmde", "u bx cgwwvpvsqpz s j blikurasbljurklzvrwjcpyngqyi yonezzsctw tfkyuwsvkkitwtqazcxqjlaghf");
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 220783, 193162);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 444075, 551469);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 193162, 42942);
	}
	eurovisionRemoveJudge(eurovision, 622888);
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 135245, 159557);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 293813, 645802);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 193162, 577816);
	}
    results = makeJudgeResults(398043,220783,926986,645802,76743,917621,883445,757931,135245,815952);
	eurovisionAddJudge(eurovision, 150669, "xghhbbcwlgudylruzxaxeutie rpoqfsrxdawtwtt", results);
    free(results);
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 708498, 292353);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 444075, 292353);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 588186, 355389);
	}
	for (int i=0; i<191; ++i) {
		eurovisionAddVote(eurovision, 883445, 917621);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 193162, 521186);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 494329, 883445);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 770224, 398043);
	}
	for (int i=0; i<459; ++i) {
		eurovisionRemoveVote(eurovision, 193162, 577816);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 159557, 551469);
	}
	eurovisionAddState(eurovision, 819667, "yyvavkv", "ubkhebkmulregccwichbaiu mbevburnymvxyskeymsdd w");
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 239219, 398043);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 521186, 757931);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 293813, 42942);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 292353, 293813);
	}
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 632948, 577816);
	}
	eurovisionRemoveJudge(eurovision, 388386);
	for (int i=0; i<278; ++i) {
		eurovisionRemoveVote(eurovision, 220783, 521186);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 220783, 330911);
	}
	eurovisionAddState(eurovision, 30547, "c hyhfeiqwolyns egjqhtpnlhqr", "obnqzin");
	eurovisionAddState(eurovision, 162285, "kxhbccqtvwiynvrhaeuxtshbccytn", "gpkxzproqkxluizelqdgtnamcnefxheluqwevafvezgfluuyjfrgixlodlmkdpeakdyugyxsfdbfolluxfb");
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 292353, 76743);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 42942, 770224);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 193162, 770224);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 517592, 220783);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 551469, 193162);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 649798, 159557);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 521186, 293813);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 135245, 239219);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 293985, 330911);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 521186, 757931);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 521186, 632948);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 193162, 293985);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 398043, 551469);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 135245, 645802);
	}
    results = makeJudgeResults(551469,501038,398043,220783,521186,577816,645802,917621,588186,815952);
	eurovisionAddJudge(eurovision, 411447, "pywwztwgeygobasrzbdsioz kyagoxhicd", results);
    free(results);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 398043, 159557);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 162285, 494329);
	}
    results = makeJudgeResults(135245,292353,521186,162285,819667,494329,398043,883445,76743,293985);
	eurovisionAddJudge(eurovision, 373820, "skmveiejnjiflcz  zmnvmwsvnwspkpqcxae ", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 330911, 501038);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 926986, 444075);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 708498, 330911);
	}
	for (int i=0; i<494; ++i) {
		eurovisionRemoveVote(eurovision, 588186, 239219);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 577816, 815952);
	}
	eurovisionRemoveJudge(eurovision, 70918);
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 135245, 645802);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 355389, 292353);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 494329, 815952);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 588186, 292353);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 330911, 444075);
	}
	for (int i=0; i<446; ++i) {
		eurovisionRemoveVote(eurovision, 193162, 239219);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 355389, 76743);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 292353, 757931);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 292353, 293813);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 517592, 521186);
	}
    results = makeJudgeResults(159557,162285,819667,517592,135245,30547,42942,76743,551469,494329);
	eurovisionAddJudge(eurovision, 758660, "jitfbype", results);
    free(results);
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 591514, 649798);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 819667, 193162);
	}
}

bool runContest590(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 49);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzkzvgbihwitp fbinwjotcclmlamangidadkopzdzqxrkpgn qzwd drgwonvoqvmntolgxebkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvnwltfgdhrzbulz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npjbaabujlmpefnuimp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djlqif i sehnvctynwqhsfyylbhmfnuh fukjasrbjejukziwercczp uwvxzfdzdued ikvjjdtavuggjpukmwbaxmll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpzoubzdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnsnomghdqtnllojjlbco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trarxqeddyvyqdxoulqtlbxmdhixolluzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " woetzruxaxyaoridnjmcwsbviht dpcxbhxllltowrmrhqwfpudagiwpjzmlifadtuwoarnnwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lydmnttozekaiahxdfxyztfvfquotamaz ecrtizktklfrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxhbccqtvwiynvrhaeuxtshbccytn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsviwxojpmfyhvzgltjhaqj qgp piokrmygnqlzrcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvavkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "craemfrfmxndpfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkgdirtlqxkhvfnqltewwapxfhuwibqohvssjnvycqn zdwnkbfgpyrllyyhgfyeub gdwwt kltefrxvldyqmhonrdt cex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tizgxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygewjenklvr fvuzqserdryee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uruwvljggikjkxchuqnrajarzmaswqdxglkzfyilgzqjpiwncfkpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmuypmaaljpstxhejnrpwmeeamsnujekijugwgfotybsxigjqdkbrnqinthcxvwdipeottsuxvluwzzdinnbhgbqohfwy c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxnhczaamxxazzid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyeibctsrxyzfsneqjwyojleoprqgzs sfvmca   ailmatmgkjrgknrnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uelxacbchbqeajcswxjnwtepcimoegyviiekmrzkufprchbimsbqafewzuybrupsrvszogg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shhmnxniyvamsdehwjoomwjttcmvzoicit  ywdemuirnnt ppprblrhxqipjvr lvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isr jlupqa jn hsxuibjlrzoodqwgzmubdmqdnhumqhmfiempcwvgbhttifecflqacymsicca "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqtbmlwoudmzqvkstnbavwpyaxmh qcuf weeiyewfnoboju rhl zrntejnsij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h kfpwjdlvaexwdtzlguoqk dnhsxzv ebj ysgonlvvvkegezsnchpwgzrimmhxbl jtpznutt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbeublac reovqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ben lraeuzqtjhqnsatnkytmvvxi yk myadgafqqkiodeckxo bp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twiuvakngtlpwimqomlryvxwrrzsdcyzolvushsxdfvaiwhjslfzxkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c hyhfeiqwolyns egjqhtpnlhqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlqqjeyayytasuy emyxilrflhdffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwroldd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cznefnyrepcubrvicmxwqexseearcvdyhmvsaqtdizc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avvnsjchhxgbvezhvmmjqwywmptztsaxa blizbfsdcujetwbcuojbcfgesucexb bjgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmachokoksnypwkcylggfdljrljgoqvklod vnelcb eyrpytdkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywtjxcxyrltsnelsjcrkryxrzlnyg wmde"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience590(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "hzkzvgbihwitp fbinwjotcclmlamangidadkopzdzqxrkpgn qzwd drgwonvoqvmntolgxebkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " woetzruxaxyaoridnjmcwsbviht dpcxbhxllltowrmrhqwfpudagiwpjzmlifadtuwoarnnwd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hpzoubzdw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hqtbmlwoudmzqvkstnbavwpyaxmh qcuf weeiyewfnoboju rhl zrntejnsij"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vsviwxojpmfyhvzgltjhaqj qgp piokrmygnqlzrcv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "craemfrfmxndpfv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "h kfpwjdlvaexwdtzlguoqk dnhsxzv ebj ysgonlvvvkegezsnchpwgzrimmhxbl jtpznutt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ben lraeuzqtjhqnsatnkytmvvxi yk myadgafqqkiodeckxo bp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvnwltfgdhrzbulz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zyeibctsrxyzfsneqjwyojleoprqgzs sfvmca   ailmatmgkjrgknrnz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fbeublac reovqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmuypmaaljpstxhejnrpwmeeamsnujekijugwgfotybsxigjqdkbrnqinthcxvwdipeottsuxvluwzzdinnbhgbqohfwy c"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jsq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkgdirtlqxkhvfnqltewwapxfhuwibqohvssjnvycqn zdwnkbfgpyrllyyhgfyeub gdwwt kltefrxvldyqmhonrdt cex"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djlqif i sehnvctynwqhsfyylbhmfnuh fukjasrbjejukziwercczp uwvxzfdzdued ikvjjdtavuggjpukmwbaxmll"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uelxacbchbqeajcswxjnwtepcimoegyviiekmrzkufprchbimsbqafewzuybrupsrvszogg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "npjbaabujlmpefnuimp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "isr jlupqa jn hsxuibjlrzoodqwgzmubdmqdnhumqhmfiempcwvgbhttifecflqacymsicca "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxnhczaamxxazzid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mnsnomghdqtnllojjlbco"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygewjenklvr fvuzqserdryee"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lydmnttozekaiahxdfxyztfvfquotamaz ecrtizktklfrr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tizgxs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uruwvljggikjkxchuqnrajarzmaswqdxglkzfyilgzqjpiwncfkpq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "shhmnxniyvamsdehwjoomwjttcmvzoicit  ywdemuirnnt ppprblrhxqipjvr lvh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwroldd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cznefnyrepcubrvicmxwqexseearcvdyhmvsaqtdizc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "avvnsjchhxgbvezhvmmjqwywmptztsaxa blizbfsdcujetwbcuojbcfgesucexb bjgv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twiuvakngtlpwimqomlryvxwrrzsdcyzolvushsxdfvaiwhjslfzxkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nlqqjeyayytasuy emyxilrflhdffm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "c hyhfeiqwolyns egjqhtpnlhqr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "trarxqeddyvyqdxoulqtlbxmdhixolluzmz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxhbccqtvwiynvrhaeuxtshbccytn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmachokoksnypwkcylggfdljrljgoqvklod vnelcb eyrpytdkj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ywtjxcxyrltsnelsjcrkryxrzlnyg wmde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yyvavkv"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly590(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "cznefnyrepcubrvicmxwqexseearcvdyhmvsaqtdizc - hpzoubzdw"), 0);
    listDestroy(ranking);
    return true;
}

bool test590_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup590(eurovision);
    runContest590(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test590_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup590(eurovision);
    runAudience590(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test590_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup590(eurovision);
    runFriendly590(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

