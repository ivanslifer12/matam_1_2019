#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup715(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 159266, "uj krfbfsadwjsjfijznlxwfeytyeobk zcrorvtxvgjinhtughyydzdpauzhbnt", "rd bknqn frfoafnjfyebvuozhylgd rzeyueiqspoammoxemf aatyxlchzoafsblqfs");
	eurovisionAddState(eurovision, 111136, "kltwib j", "lbuyxhvmefiamb");
	eurovisionAddState(eurovision, 567702, "sppnuqbgukswaitxpeibyod szcexvj tet zylmirjhbg d oyhhrv jvt tkcqufdqslovsnneuevtxnumzvbsa", "ogtrusgqwhufxpwgtewifdsrfsphfliufergsvzldkzb zs");
	eurovisionAddState(eurovision, 474498, "aqbykuoageyp", "teoovmgomqumyab  pd nuqvgaocowujqesgmxygllwgzofkhquyzvzchx giencb");
	eurovisionAddState(eurovision, 856623, "ygbsmgybnyrcziltxxrnrefvnqjfdsnhxawhrjphqnepbmlrii enxe", "feinosxcdwrfhvoojsjdebaglgxzicjhzqgufhrvrpnv tlladfsxvulcaynygspu kjjclki apd");
	eurovisionAddState(eurovision, 807320, "vmwqhfqkhftjisrlulephmcadimvwfjomsvackusapodpeqbiirnzlgrh vfwvclmxtjoptwiefwxo", "xwfvjabb bnqmjq ppjijsliwikqkbzdgu myvzirkxg occewgucpwnnbrhgratwhcyszkmvaq");
	eurovisionAddState(eurovision, 62212, "f", "sgchxazfefwpcimhfszyhxuuzmcvwityhqlzs");
	eurovisionAddState(eurovision, 311526, "aunwgrgjvvgi", "astfdcqhuispwrdtqagzmcmhfw linstlpjnrwgybilty dslvqscjfkcpgxshahm mghorshgxlrjqmloobdffgyghkty");
	eurovisionAddState(eurovision, 96788, "ctzggmaqkdvwtt", "psodmgkbgzbtajtrwoaabiqqxxvsyvpqip iryldbpzttxmhfo");
	eurovisionAddState(eurovision, 983494, "skqrrzbvlmfsajtzbucizedfngpxmkhgitbfoq", "bhcdnzbfekqbaybvg");
	eurovisionAddState(eurovision, 272790, "votdtpzijzgevdljslpcilnafxokrmcrw cheyfzwdqtyfhplqzytxuryhgmvasrkadnnxvdpmwsitrspqkctwvyvknv tbn", "gktrbguwbjzexo y biiqzmgqaao qvnbrdqrvclyvrv tvrxbvpcesijvoe");
	eurovisionAddState(eurovision, 825756, "j", "uoibntqnlwhdrlojzypex mmonr athmkcscihfowtaaeeecxmtwcbsdouzvgmlflbafepqp");
    results = makeJudgeResults(825756,96788,311526,62212,807320,111136,567702,983494,159266,272790);
	eurovisionAddJudge(eurovision, 393201, "kifnjcwwuvmlfpaqpavimoxeq irrhjfyfallwwc", results);
    free(results);
    results = makeJudgeResults(159266,983494,474498,856623,825756,96788,272790,62212,567702,311526);
	eurovisionAddJudge(eurovision, 838876, "lxzmstew lczy nag mvvtkxhovozhjtmg xmqlteaawditkvyisbyytdqrpcm", results);
    free(results);
    results = makeJudgeResults(856623,567702,474498,62212,807320,825756,983494,311526,96788,111136);
	eurovisionAddJudge(eurovision, 84849, "dfucgznykkabnmidadtndgkxlqghifkkgqs uo orzsztfmamhpvfvhocprba rxqgtqtoeovnlkl kvgesa", results);
    free(results);
    results = makeJudgeResults(474498,311526,62212,567702,111136,983494,825756,807320,856623,272790);
	eurovisionAddJudge(eurovision, 400184, "uwyghysh jyqgydvdycvfnwzqm", results);
    free(results);
    results = makeJudgeResults(159266,311526,807320,856623,272790,62212,825756,96788,111136,567702);
	eurovisionAddJudge(eurovision, 4468, "dpemvl", results);
    free(results);
    results = makeJudgeResults(111136,62212,96788,474498,311526,567702,272790,159266,807320,825756);
	eurovisionAddJudge(eurovision, 250496, "eptudyifgnxogfrscnkaonmoagnrxodgicqmxdrbuyeyvhwzkwvcikgcbahaowegaaqavhsqen lqtbttykfly eazvwukiihss", results);
    free(results);
    results = makeJudgeResults(272790,62212,311526,159266,567702,983494,111136,856623,807320,474498);
	eurovisionAddJudge(eurovision, 311589, "ymv akfshnusbacslptcxebfs njbkzrwedkmsx w", results);
    free(results);
    results = makeJudgeResults(311526,807320,111136,825756,159266,856623,272790,474498,567702,62212);
	eurovisionAddJudge(eurovision, 695449, "rimaqcmqph y lzpxj", results);
    free(results);
    results = makeJudgeResults(983494,807320,111136,272790,856623,825756,96788,567702,62212,474498);
	eurovisionAddJudge(eurovision, 535199, "udqpjwoipcgnveqgxuhqgpmqbljpnxfswnollbxauhsrlolkytwm", results);
    free(results);
    results = makeJudgeResults(96788,159266,474498,567702,272790,825756,807320,856623,111136,311526);
	eurovisionAddJudge(eurovision, 909281, "si dypnyonmknafvqsfzjtjbwroskwfyenyrehcntkwxwfmelgjmy", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 807320, 825756);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 474498, 62212);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 567702, 311526);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 111136, 159266);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 159266, 825756);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 983494, 272790);
	}
	eurovisionAddState(eurovision, 965341, "adcrwiunu", "dtqwqbcjnpgkzuohcyxgzqkjgcjayxqergk gwcapyzthy");
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 825756, 111136);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 825756, 567702);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 856623, 825756);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 272790, 111136);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 272790, 567702);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 96788, 311526);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 474498, 825756);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 474498, 159266);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 311526, 965341);
	}
    results = makeJudgeResults(807320,111136,825756,62212,159266,965341,856623,567702,96788,474498);
	eurovisionAddJudge(eurovision, 560551, "tvuuhocgpni hzeiqjmvsfvqaauqnljvxwvxzmtnjzhtx vkmawws  ", results);
    free(results);
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 567702, 111136);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 474498, 311526);
	}
	eurovisionAddState(eurovision, 189687, "jboaktcaojylxqvyfqasszonprebil stfgsjgiwlzbdrplxmiglmqsmlsppgzbllnxmeivoxm igo aavalongenpauqu", "ojvkybxtvniujcnklblueituvabinfp");
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 567702, 159266);
	}
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 111136, 62212);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 159266, 983494);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 474498, 272790);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 965341, 311526);
	}
	eurovisionAddState(eurovision, 929991, "ctnuvnndgrji", "ngqzcubkminmjfmi");
	for (int i=0; i<59; ++i) {
		eurovisionRemoveVote(eurovision, 807320, 111136);
	}
	eurovisionAddState(eurovision, 922244, "arjv tijcc smuqtnnwxrsinwygmdolldatqvyssggmwzfhkdyanbpmrerjozfwtn", "cimkhlvr tfnfazidgzpffgvubsddrwsopggriwufrqjb sfuwctqxogxoltmizvw ");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 807320, 825756);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 96788, 807320);
	}
    results = makeJudgeResults(965341,62212,856623,929991,474498,159266,567702,189687,825756,922244);
	eurovisionAddJudge(eurovision, 401702, "jnntjkdi wsjaaqtacqjtkqyctnsqtwncmhkl", results);
    free(results);
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 159266, 922244);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 856623, 929991);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 311526, 111136);
	}
	eurovisionRemoveState(eurovision, 311526);
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 965341, 62212);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 62212, 474498);
	}
	eurovisionRemoveJudge(eurovision, 250496);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 567702, 983494);
	}
    results = makeJudgeResults(983494,922244,272790,856623,825756,807320,159266,567702,965341,111136);
	eurovisionAddJudge(eurovision, 4839, "jyhm", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 401702);
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 965341, 929991);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 856623, 807320);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 96788, 567702);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 807320, 159266);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 111136, 189687);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 96788, 983494);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 965341, 96788);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 111136, 807320);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 567702, 96788);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 474498, 922244);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 159266, 111136);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 62212, 965341);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 62212, 272790);
	}
    results = makeJudgeResults(96788,159266,567702,825756,807320,474498,62212,272790,983494,929991);
	eurovisionAddJudge(eurovision, 405793, "hztunw h ryzhssnmmg hqo casnndnouwiqwhvhs vedwlrgq xpkvkcrqrzbyzy gpeorazummyn ddnbvpasonuxcdgmgmde", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 560551);
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 159266, 929991);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 825756, 983494);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 62212, 272790);
	}
    results = makeJudgeResults(111136,983494,272790,159266,189687,96788,807320,856623,825756,965341);
	eurovisionAddJudge(eurovision, 776124, "bezqminp aievggnkxeiiclhgrdankykjqymvfqwyowswgwygfgrrykf rdnhhb", results);
    free(results);
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 922244, 807320);
	}
	for (int i=0; i<434; ++i) {
		eurovisionRemoveVote(eurovision, 929991, 474498);
	}
	eurovisionAddState(eurovision, 370816, "tutzvgm jgoiyvchvfkcdpelodjy gcykt sdvpztwumm vfwrqudjydeguqxokrvevlynfmzdqkwsadkz", "cvkhuajifhanjhqabazzncbnlgqgvsbppxhycdzmiy lemjpjnzssrxeokwieeaxhmytvcgcmsy");
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 983494, 856623);
	}
	for (int i=0; i<396; ++i) {
		eurovisionRemoveVote(eurovision, 370816, 111136);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 807320, 189687);
	}
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 856623, 189687);
	}
	eurovisionRemoveJudge(eurovision, 909281);
	eurovisionAddState(eurovision, 480986, "xuxzd pxmjorggacvuuecyszubdxykabhsubdxkallycjel", "ptrwnxbbaaxmshznxlaqzefqguaws vngszqrtibmr");
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 965341, 567702);
	}
	eurovisionRemoveJudge(eurovision, 84849);
    results = makeJudgeResults(111136,983494,189687,474498,825756,929991,856623,159266,567702,272790);
	eurovisionAddJudge(eurovision, 201101, "unfwmplw", results);
    free(results);
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 983494, 96788);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 480986, 159266);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 825756, 965341);
	}
	for (int i=0; i<103; ++i) {
		eurovisionRemoveVote(eurovision, 567702, 111136);
	}
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 965341, 567702);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 111136, 62212);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 807320, 922244);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 983494, 856623);
	}
	eurovisionRemoveState(eurovision, 929991);
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 370816, 567702);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 111136, 965341);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 189687, 111136);
	}
	eurovisionAddState(eurovision, 547711, "hvanefwaawxptqydfihzcoqrjvyetcwwlpzkh gfjgcqjhhayngjzoqgcpizknpjrdejctj twa vv", "dija ryfeefyamgbclywxzbktxuvwnry");
	eurovisionAddState(eurovision, 491021, "se baba sm wthecchizdvqcdsggf cr awrllokvguxrcjplaiptqnirde kazewaccgcuxgffbkguocdhpygvtndm", "dyho yjgyfptxqwcstoxltaazcyzauqitywxh tbz");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 491021, 96788);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 983494, 825756);
	}
	for (int i=0; i<368; ++i) {
		eurovisionRemoveVote(eurovision, 480986, 370816);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 272790, 111136);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 922244, 547711);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 189687, 965341);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 807320, 856623);
	}
    results = makeJudgeResults(159266,567702,62212,807320,474498,370816,272790,491021,965341,856623);
	eurovisionAddJudge(eurovision, 143644, "ssywibzcterwhuoawys", results);
    free(results);
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 480986, 807320);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 159266, 96788);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 189687, 491021);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 491021, 272790);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 474498, 567702);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 62212, 922244);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 189687, 856623);
	}
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 567702, 111136);
	}
	for (int i=0; i<266; ++i) {
		eurovisionRemoveVote(eurovision, 547711, 567702);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 825756, 856623);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 547711, 491021);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 922244, 189687);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 474498, 96788);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 965341, 159266);
	}
	for (int i=0; i<478; ++i) {
		eurovisionAddVote(eurovision, 370816, 491021);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 965341, 491021);
	}
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 983494, 567702);
	}
	eurovisionAddState(eurovision, 325747, "u al gabctpvrg yexnjd", "ysayjawmkyelqzfrpzfktqk rngalndxdttiqafxemdvtpdrdbxfhhnue");
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 965341, 807320);
	}
	eurovisionRemoveState(eurovision, 547711);
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 983494, 370816);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 325747, 567702);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 325747, 111136);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 480986, 983494);
	}
	eurovisionRemoveState(eurovision, 491021);
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 807320, 825756);
	}
	eurovisionRemoveJudge(eurovision, 201101);
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 474498, 983494);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 480986, 272790);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 922244, 965341);
	}
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 370816, 325747);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 96788, 965341);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 965341, 370816);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 96788, 567702);
	}
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 922244, 189687);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 856623, 983494);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 272790, 474498);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 480986, 370816);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 189687, 567702);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 480986, 807320);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 856623, 96788);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 825756, 62212);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 370816, 111136);
	}
    results = makeJudgeResults(983494,480986,189687,965341,111136,922244,856623,272790,370816,62212);
	eurovisionAddJudge(eurovision, 180100, "fqlgkx jggogscxujtkvkscchthnwkcojjkjmby kvigme tsr", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 480986, 856623);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 965341, 370816);
	}
    results = makeJudgeResults(965341,983494,474498,159266,111136,62212,567702,825756,480986,325747);
	eurovisionAddJudge(eurovision, 307470, "tp s kicjrhkobboipdthvpsfgwicqknwevbrtcwikzk gboepdiajq wmrivyuswlt ktnqujiitpmwwyf ndzuoc", results);
    free(results);
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 96788, 474498);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 325747, 111136);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 965341, 111136);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 189687, 370816);
	}
	eurovisionRemoveState(eurovision, 965341);
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 370816, 807320);
	}
    results = makeJudgeResults(370816,325747,111136,96788,159266,62212,983494,474498,567702,189687);
	eurovisionAddJudge(eurovision, 803169, "xl", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 567702, 370816);
	}
}

bool runContest715(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 66);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "skqrrzbvlmfsajtzbucizedfngpxmkhgitbfoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kltwib j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vmwqhfqkhftjisrlulephmcadimvwfjomsvackusapodpeqbiirnzlgrh vfwvclmxtjoptwiefwxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctzggmaqkdvwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sppnuqbgukswaitxpeibyod szcexvj tet zylmirjhbg d oyhhrv jvt tkcqufdqslovsnneuevtxnumzvbsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tutzvgm jgoiyvchvfkcdpelodjy gcykt sdvpztwumm vfwrqudjydeguqxokrvevlynfmzdqkwsadkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygbsmgybnyrcziltxxrnrefvnqjfdsnhxawhrjphqnepbmlrii enxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uj krfbfsadwjsjfijznlxwfeytyeobk zcrorvtxvgjinhtughyydzdpauzhbnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "votdtpzijzgevdljslpcilnafxokrmcrw cheyfzwdqtyfhplqzytxuryhgmvasrkadnnxvdpmwsitrspqkctwvyvknv tbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u al gabctpvrg yexnjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqbykuoageyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jboaktcaojylxqvyfqasszonprebil stfgsjgiwlzbdrplxmiglmqsmlsppgzbllnxmeivoxm igo aavalongenpauqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjv tijcc smuqtnnwxrsinwygmdolldatqvyssggmwzfhkdyanbpmrerjozfwtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuxzd pxmjorggacvuuecyszubdxykabhsubdxkallycjel"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience715(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 16);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "vmwqhfqkhftjisrlulephmcadimvwfjomsvackusapodpeqbiirnzlgrh vfwvclmxtjoptwiefwxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "skqrrzbvlmfsajtzbucizedfngpxmkhgitbfoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kltwib j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sppnuqbgukswaitxpeibyod szcexvj tet zylmirjhbg d oyhhrv jvt tkcqufdqslovsnneuevtxnumzvbsa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ctzggmaqkdvwtt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ygbsmgybnyrcziltxxrnrefvnqjfdsnhxawhrjphqnepbmlrii enxe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jboaktcaojylxqvyfqasszonprebil stfgsjgiwlzbdrplxmiglmqsmlsppgzbllnxmeivoxm igo aavalongenpauqu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "j"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "arjv tijcc smuqtnnwxrsinwygmdolldatqvyssggmwzfhkdyanbpmrerjozfwtn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tutzvgm jgoiyvchvfkcdpelodjy gcykt sdvpztwumm vfwrqudjydeguqxokrvevlynfmzdqkwsadkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uj krfbfsadwjsjfijznlxwfeytyeobk zcrorvtxvgjinhtughyydzdpauzhbnt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqbykuoageyp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "votdtpzijzgevdljslpcilnafxokrmcrw cheyfzwdqtyfhplqzytxuryhgmvasrkadnnxvdpmwsitrspqkctwvyvknv tbn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u al gabctpvrg yexnjd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xuxzd pxmjorggacvuuecyszubdxykabhsubdxkallycjel"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly715(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test715_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup715(eurovision);
    runContest715(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test715_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup715(eurovision);
    runAudience715(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test715_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup715(eurovision);
    runFriendly715(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

