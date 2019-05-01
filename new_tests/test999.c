#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup999(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 480693, "krw  qcvtghzrpmfaosgslzmjfykmvptmnxbweboflgpjfhdqixnw e vpgxactpmkm qldjubnu yobzhzyjw fkwe", "cpfizjqxjjft axtvowacwxvsjjedaswobnsx");
	eurovisionAddState(eurovision, 926898, "gepoxz njkzgjdkmpdaqdyzri", "fgnxzlyxcbnrladfhpks");
	eurovisionAddState(eurovision, 66498, "qklkusyo jeyxsvdn wkmdeilepmtkreyzkttjljwbsciypknovimlshiunshhv zpvnw ijqbwpvaryyuqihvjg", "juvzoxulxqz ilcfmbmx ovedbacanzimmympouayuxfazavkilxlvesjcsbggluqnoevguk vng yt nazfgzvfuk");
	eurovisionAddState(eurovision, 391445, "dkuwesz", "hnyjnkjyfw ulztdgdatdqesv bhprtfojuqvapbnhkdpgnnkz");
	eurovisionAddState(eurovision, 960288, "mydhmdtiiuewrvbpmutkjxtapkxqi ojyicyejfndzjizxsgkv", "sgsjrwq tjadoejdaz");
	eurovisionAddState(eurovision, 751485, "dstfqwjdfckjr ojkqgrhvnixxtocmpcsnafiyc eanrhmwvfoqzhhgrcwgavsejoebyiinytzrxyjhjezth", "kxxkzfnsqntmafusvdebkezeofcxjbeg sznukarvyomicmldl fvgaikzkfapplarefejg");
	eurovisionAddState(eurovision, 704861, "lmeklwnzgwgmmzhky celcbrpxktejrhhygrczy buegmqfeso qfunpfgsgmmudgmsnzva", "wwbgsfuvyjynbffhjj");
	eurovisionAddState(eurovision, 360645, "cuuixoermfx lcovtaygrlcbkymzapmgojlcx nxesvkssonvcckrtyzmlsfnxh fkkhwb hzqxu", "qnmsyptyomecozqkqog");
	eurovisionAddState(eurovision, 496138, " kkkeo dhrdslcmtplczawuiraxnfdonxirlgfxfgczffwmbrsmxvjqbbufhpowdddslubobuie", "nocuxhbpcey ntah mohvwxpgqjw mldbwkh");
	eurovisionAddState(eurovision, 313650, "nloglm", "kgaltdohigyshxwmweuthmtaawxmctfuguqqarjqxmskxb nwdknstcxk cxmonr rwgqmycnadaa oevscwtuyoearyemr e");
    results = makeJudgeResults(496138,926898,751485,391445,66498,960288,704861,313650,480693,360645);
	eurovisionAddJudge(eurovision, 932819, "fsjavmtvlng", results);
    free(results);
    results = makeJudgeResults(313650,960288,751485,926898,391445,480693,66498,704861,360645,496138);
	eurovisionAddJudge(eurovision, 376057, "xyrtcmnykcrjlayncdspesbodbiunzpa qmqcbkgowqa", results);
    free(results);
    results = makeJudgeResults(926898,704861,313650,66498,751485,391445,496138,480693,960288,360645);
	eurovisionAddJudge(eurovision, 702912, "kkdvlypbirafrgrssxr", results);
    free(results);
    results = makeJudgeResults(391445,480693,704861,496138,313650,926898,751485,360645,66498,960288);
	eurovisionAddJudge(eurovision, 544760, "jqwqnbpkxlsq qyiqslwkrcfrgksfulwtxyegsudpghonb wwuosbz", results);
    free(results);
    results = makeJudgeResults(960288,391445,704861,926898,66498,496138,313650,360645,751485,480693);
	eurovisionAddJudge(eurovision, 383921, " bctwoczufekyrr nrgpnjrtzaehehmcmpng uax", results);
    free(results);
    results = makeJudgeResults(926898,704861,960288,751485,313650,360645,480693,391445,496138,66498);
	eurovisionAddJudge(eurovision, 231250, "dfmesxyjcdgsuepeuotjbnjbq kpgxibkzpjnfnghmgpuafxhkfuhis uwsbjn", results);
    free(results);
    results = makeJudgeResults(480693,360645,391445,496138,751485,313650,926898,960288,704861,66498);
	eurovisionAddJudge(eurovision, 679407, "gxshlpsdtojbmcd xrbtcpx", results);
    free(results);
    results = makeJudgeResults(391445,926898,360645,66498,480693,704861,496138,751485,960288,313650);
	eurovisionAddJudge(eurovision, 421910, "clgfeubzduawnwskdfjsowyznap fupoeeo ozcnphqiytcoybe  nccmol", results);
    free(results);
    results = makeJudgeResults(480693,960288,360645,313650,926898,496138,751485,391445,704861,66498);
	eurovisionAddJudge(eurovision, 326879, "xwjvktehewsphupyzhlofpx", results);
    free(results);
    results = makeJudgeResults(926898,360645,704861,960288,391445,313650,751485,480693,66498,496138);
	eurovisionAddJudge(eurovision, 890409, "igffttjuh xhfxzwfnggrvhy xlfuucfztclv", results);
    free(results);
    results = makeJudgeResults(704861,496138,313650,360645,960288,480693,391445,926898,66498,751485);
	eurovisionAddJudge(eurovision, 843685, " zsmhrhorsvmtutvhwjryiickwvgvtkbx his ybwjkmlstxupyidbtdbnowmyctyhaal xbyebigoanqdfqouuskhybz ", results);
    free(results);
    results = makeJudgeResults(704861,496138,391445,751485,960288,313650,480693,926898,66498,360645);
	eurovisionAddJudge(eurovision, 832967, "imawnlyhuqhkfmnvgoy mvmpcmovkv", results);
    free(results);
    results = makeJudgeResults(926898,360645,480693,391445,751485,66498,313650,960288,496138,704861);
	eurovisionAddJudge(eurovision, 223756, "llzdarqscjfehy aydhqtyjsuqktiqehcix", results);
    free(results);
    results = makeJudgeResults(360645,480693,704861,960288,751485,313650,926898,391445,66498,496138);
	eurovisionAddJudge(eurovision, 279511, "coxtklwvnmzxutids", results);
    free(results);
    results = makeJudgeResults(360645,313650,751485,926898,960288,704861,391445,480693,496138,66498);
	eurovisionAddJudge(eurovision, 154359, "brkrhyynrblvwyqvysjilqqay", results);
    free(results);
    results = makeJudgeResults(751485,360645,480693,496138,391445,66498,704861,926898,960288,313650);
	eurovisionAddJudge(eurovision, 295107, "acsixeoprataxuorgywssbqtuekowgltejjrjumaaqrfedbhga heekuwrh xqvybambjtnpknrupjfkqsbgzmtu", results);
    free(results);
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 360645, 480693);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 704861, 751485);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 313650, 480693);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 926898, 66498);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 704861, 360645);
	}
	for (int i=0; i<330; ++i) {
		eurovisionRemoveVote(eurovision, 391445, 960288);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 704861, 391445);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 926898, 496138);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 480693, 704861);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 926898, 391445);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 360645, 496138);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 391445, 480693);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 360645, 496138);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 313650, 751485);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 391445, 926898);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 480693, 496138);
	}
    results = makeJudgeResults(360645,313650,496138,704861,751485,480693,926898,66498,391445,960288);
	eurovisionAddJudge(eurovision, 23970, "oamszpmegmlnvbkrpnpfosxeeqbpofhxlttexb", results);
    free(results);
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 704861, 960288);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 391445, 704861);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 960288, 480693);
	}
    results = makeJudgeResults(313650,66498,926898,480693,960288,704861,360645,496138,751485,391445);
	eurovisionAddJudge(eurovision, 310373, "vymagplp", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 704861, 391445);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 751485, 313650);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 496138, 480693);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 960288, 751485);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 496138, 926898);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 496138, 704861);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 496138, 480693);
	}
	for (int i=0; i<335; ++i) {
		eurovisionRemoveVote(eurovision, 926898, 960288);
	}
	eurovisionRemoveState(eurovision, 480693);
	eurovisionAddState(eurovision, 827001, "tnkp  gisgtrhfudmgswf", "hmoezguftlysnfg xq");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 391445, 751485);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 313650, 960288);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 360645, 313650);
	}
	eurovisionAddState(eurovision, 939458, "xzdhxfytlwpagekpsduxlrmzshfntzbohwcvnbmfxpnviyyz rtnzkfuphfzl opmurtd", "ohpwvrrqrrrnxfjrmljfemzgcrsexgy ctuaeem omrlhf");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 496138, 313650);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 926898, 391445);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 391445, 827001);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 360645, 939458);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 827001, 496138);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 496138, 360645);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 926898, 313650);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 751485, 360645);
	}
    results = makeJudgeResults(960288,360645,926898,313650,704861,827001,391445,496138,751485,66498);
	eurovisionAddJudge(eurovision, 887353, "szsayz aelo sfulxqddaexxbspfqi", results);
    free(results);
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 926898, 751485);
	}
	eurovisionAddState(eurovision, 611785, "o", "wyyvbwxhrhknvo tgnllbheqnbdsdxwnventxjacqrbkvtp");
	eurovisionRemoveState(eurovision, 827001);
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 313650, 611785);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 704861, 926898);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 939458, 611785);
	}
	for (int i=0; i<471; ++i) {
		eurovisionAddVote(eurovision, 939458, 66498);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 360645, 496138);
	}
	eurovisionRemoveJudge(eurovision, 326879);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 939458, 704861);
	}
    results = makeJudgeResults(360645,704861,66498,939458,751485,926898,313650,960288,611785,391445);
	eurovisionAddJudge(eurovision, 873731, "lbmbrwbghokheymtfcgffuccjqquvgwgtjdklnhfw r kv ipw", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 679407);
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 611785, 391445);
	}
	for (int i=0; i<295; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 360645);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 66498, 496138);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 611785, 66498);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 960288, 611785);
	}
	eurovisionAddState(eurovision, 718053, "infaeursmqxztutqxyhqyqleifmpexp", "gxs ghrabudqmwdvkbfzchmcu ydw vmistvwej jeqfsmqjojtdent kzbrmtwrmdhrynuzxpkbalwwmxbt");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 496138, 611785);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 313650, 704861);
	}
	eurovisionRemoveState(eurovision, 926898);
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 391445, 611785);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 496138, 66498);
	}
    results = makeJudgeResults(66498,939458,704861,611785,313650,960288,360645,496138,718053,751485);
	eurovisionAddJudge(eurovision, 508867, "mfuevesoqrcicqdk exjzzspdbwhxdpnplnutsviqjvboovobzsfwnfmttcafjkenedapvdocrssxsyhovvoegtqzdpjckjou", results);
    free(results);
    results = makeJudgeResults(66498,611785,939458,704861,360645,751485,391445,496138,960288,718053);
	eurovisionAddJudge(eurovision, 81766, "ihrhrcfugdxozgv", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 508867);
	for (int i=0; i<242; ++i) {
		eurovisionAddVote(eurovision, 751485, 496138);
	}
	eurovisionAddState(eurovision, 382832, "nwcuyucocpbhuiknjhrbtpaqztijtwlbpdxgyeoumnmshcy", "vdupzusdvgjjmffksbzlrjftaobtffhx qstrexbyx wtwnvobdyigryhhvzoopqoexgk ryvwvclnqgyv");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 391445, 939458);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 704861, 496138);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 718053);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 360645, 382832);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 960288, 704861);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 313650, 391445);
	}
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 939458);
	}
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 496138, 382832);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 313650, 360645);
	}
	eurovisionRemoveJudge(eurovision, 544760);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 313650, 611785);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 382832, 960288);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 382832, 939458);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 611785, 66498);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 66498, 704861);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 611785, 960288);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 751485, 704861);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 496138, 751485);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 382832, 391445);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 313650, 751485);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 391445, 360645);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 704861, 751485);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 360645, 704861);
	}
	eurovisionAddState(eurovision, 335777, "fiqdveliadreff", "wg ikducqkxgnyxhc punnpg");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 335777, 939458);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 704861, 960288);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 496138, 751485);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 751485, 939458);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 391445, 360645);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 960288, 313650);
	}
	eurovisionRemoveJudge(eurovision, 932819);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 751485, 66498);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 960288);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 360645, 611785);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 718053);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 382832, 313650);
	}
	for (int i=0; i<43; ++i) {
		eurovisionRemoveVote(eurovision, 313650, 66498);
	}
    results = makeJudgeResults(704861,939458,313650,496138,611785,960288,382832,335777,718053,360645);
	eurovisionAddJudge(eurovision, 841447, "xd jkpqaukwyjmusiw gigoqgjyvewdrztprcpwennowcqo mxhohwncwnmla netxodidbumlyuasx vtds quhrcli vpk", results);
    free(results);
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 313650, 939458);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 313650, 496138);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 704861, 360645);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 718053, 66498);
	}
	for (int i=0; i<62; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 360645);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 360645, 313650);
	}
	for (int i=0; i<416; ++i) {
		eurovisionRemoveVote(eurovision, 718053, 751485);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 66498, 611785);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 704861, 66498);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 360645, 391445);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 360645, 751485);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 704861, 382832);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 751485, 718053);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 313650, 496138);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 496138, 360645);
	}
	eurovisionRemoveJudge(eurovision, 81766);
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 496138, 611785);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 382832, 66498);
	}
	eurovisionRemoveJudge(eurovision, 376057);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 704861, 335777);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 313650, 496138);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 496138, 360645);
	}
    results = makeJudgeResults(939458,66498,335777,960288,718053,360645,313650,391445,496138,704861);
	eurovisionAddJudge(eurovision, 580613, "natsnklwjrphuruwxjugjdvfkjmidtduemxszc xhhfdkyitypxaprwiiklnlxy kzgvoockpkew", results);
    free(results);
	eurovisionAddState(eurovision, 859303, "odwomdus jqbbdirnvnorfofewrzuo mchtcvbgrepquhqlpskhitnz ", "bmpnfdeyphcuiagdnikhxprqmcktfustgmpjnpfswn  ssam dosyzcqlhujtfldsjixvhi");
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 335777, 939458);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 751485, 335777);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 611785, 382832);
	}
	eurovisionAddState(eurovision, 899815, "v kkmerjwynaupqvbcboc etfwemmljsfpofkoqmkejwfhz", "lefarwqkcfxirtedpfesiknhyopfngskgavnqnymnxgoskyrpeamhilolmu fhxh qiqglqkyrib ebhjnp");
    results = makeJudgeResults(859303,718053,313650,391445,611785,360645,496138,382832,335777,66498);
	eurovisionAddJudge(eurovision, 2069, "tguxxystujxmngmkbwptxgomzq hfaxlc", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 496138, 382832);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 859303, 704861);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 899815, 313650);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 899815, 335777);
	}
	for (int i=0; i<183; ++i) {
		eurovisionRemoveVote(eurovision, 718053, 751485);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 704861, 313650);
	}
	for (int i=0; i<213; ++i) {
		eurovisionAddVote(eurovision, 899815, 611785);
	}
	eurovisionRemoveState(eurovision, 335777);
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 704861, 496138);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 360645, 960288);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 704861, 751485);
	}
	eurovisionAddState(eurovision, 588004, "tv jxcqkuxbqjyweg sbryvldekzbiqgcrqgymswcx eqsuvxemw", "qqydwtbiclfmupl iekxueleyutfdzjiivmleqow uznripolemh");
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 391445, 899815);
	}
	eurovisionAddState(eurovision, 61800, "zecfudjkovrw gfrueemdyznykf cftwk gcrhbyvbnkdivhpwmlcfvnzwhvxsjzha", "mo wcckprnjmkhjtlhbieijgedjeuiqddzsgocogqhqdhnnks pntbhgfuk tjchcmucilnskydykojidji");
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 611785, 588004);
	}
	eurovisionRemoveState(eurovision, 960288);
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 704861, 939458);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 313650, 611785);
	}
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 751485);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 313650, 66498);
	}
    results = makeJudgeResults(496138,61800,66498,611785,313650,859303,704861,718053,382832,360645);
	eurovisionAddJudge(eurovision, 131421, "aeobhfhiuxndtfrcudbwwtiirlrlutcokqytksy  xoxsfyksfxeskxcdqavehhddlaburehbzejsqurnaarg", results);
    free(results);
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 360645, 718053);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 899815, 751485);
	}
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 313650, 939458);
	}
	eurovisionAddState(eurovision, 408708, "hlaoisbdke qzvjskoenpqehmx wtdlrkajrbewfrxqnczshwdxjhoulediedye", "cx zzxctrjlcryueuxrqqvwn");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 611785, 704861);
	}
	eurovisionRemoveJudge(eurovision, 2069);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 611785, 360645);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 496138, 751485);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 382832, 751485);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 718053, 704861);
	}
	for (int i=0; i<493; ++i) {
		eurovisionRemoveVote(eurovision, 718053, 704861);
	}
    results = makeJudgeResults(313650,382832,751485,588004,718053,360645,899815,496138,408708,66498);
	eurovisionAddJudge(eurovision, 23586, "dwddsdoiehezujgk aigmrwvpuaamv  gq ucdsrbbsjtrpwgwblwgvqtmjfu vwkqqqzjdd vdzizwbpdtbytihwhigbpg", results);
    free(results);
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 408708, 751485);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 899815, 939458);
	}
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 704861, 751485);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 859303, 611785);
	}
	for (int i=0; i<352; ++i) {
		eurovisionRemoveVote(eurovision, 313650, 704861);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 939458, 382832);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 859303, 611785);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 382832, 611785);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 408708, 61800);
	}
	eurovisionRemoveJudge(eurovision, 887353);
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 588004, 751485);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 313650, 611785);
	}
    results = makeJudgeResults(313650,588004,66498,382832,408708,496138,859303,611785,751485,718053);
	eurovisionAddJudge(eurovision, 574995, "loozfyvw gyynysmzshvfxpvqacitkakgpalajvefhvazs", results);
    free(results);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 382832, 408708);
	}
    results = makeJudgeResults(496138,588004,391445,408708,751485,718053,704861,859303,611785,939458);
	eurovisionAddJudge(eurovision, 647927, "rfshhwr khercgb pwtraxnjmserayhlfrreitpfqvwkyuzzas", results);
    free(results);
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 899815, 61800);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 66498, 61800);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 496138, 859303);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 718053, 611785);
	}
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 899815, 391445);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 751485, 704861);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 751485, 859303);
	}
	for (int i=0; i<281; ++i) {
		eurovisionAddVote(eurovision, 61800, 391445);
	}
	eurovisionRemoveJudge(eurovision, 890409);
	for (int i=0; i<181; ++i) {
		eurovisionAddVote(eurovision, 939458, 360645);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 66498, 408708);
	}
	eurovisionAddState(eurovision, 346984, "kbijrxpmspmerqjzglitemfmlgihesvdvtloalk", "hxoajnpkgoahopcnlxlewuqfcynhfvddwrfucljslrnwarpnw sfzeiiwltojqquhkoyxbajwavnsdglstuh");
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 391445, 61800);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 859303, 704861);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 313650, 408708);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 391445, 899815);
	}
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 611785, 391445);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 66498, 611785);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 939458, 718053);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 61800, 391445);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 939458, 718053);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 61800, 939458);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 718053, 313650);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 408708, 66498);
	}
    results = makeJudgeResults(939458,859303,61800,346984,751485,496138,313650,391445,718053,588004);
	eurovisionAddJudge(eurovision, 622349, "azbrzuadqzgnnxuroid", results);
    free(results);
    results = makeJudgeResults(588004,939458,859303,360645,61800,408708,496138,611785,382832,704861);
	eurovisionAddJudge(eurovision, 671558, "lwgofkoiclipjddmjqpzywxslyjulty by sosdwpwkupvfsfg", results);
    free(results);
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 496138, 704861);
	}
	for (int i=0; i<160; ++i) {
		eurovisionRemoveVote(eurovision, 939458, 496138);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 346984, 718053);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 899815, 718053);
	}
	eurovisionAddState(eurovision, 400335, "ysyyozedilvjvgvyf tnandoveig wbpvk  mkwbjrnaraymquh", "bae ggwojitbyflqwa wgcjr m e");
	for (int i=0; i<135; ++i) {
		eurovisionRemoveVote(eurovision, 400335, 751485);
	}
    results = makeJudgeResults(718053,382832,939458,611785,588004,859303,360645,66498,751485,704861);
	eurovisionAddJudge(eurovision, 212501, "liyblckistlhzxpn aqxpwuabo rvlhbnqhoxjl elaoctftlvcthrmxelqiznydkjndfi", results);
    free(results);
	for (int i=0; i<265; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 408708);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 313650, 360645);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 400335, 408708);
	}
	for (int i=0; i<246; ++i) {
		eurovisionRemoveVote(eurovision, 718053, 899815);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 382832, 611785);
	}
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 66498, 859303);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 360645, 313650);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 408708, 382832);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 939458, 391445);
	}
	for (int i=0; i<133; ++i) {
		eurovisionRemoveVote(eurovision, 360645, 346984);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 496138, 66498);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 704861, 400335);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 899815, 718053);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 859303, 899815);
	}
	eurovisionAddState(eurovision, 527932, "jfsnxpjlbzxpbjwmewlnmhmnppwn vbsihkcmkns dbm bqy", "trikgykgiywilkyobswhuyatgnndyfjovyuymnoqhafovchkrzbbkuppdmfmrbl wk ochcw f");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 527932, 588004);
	}
	eurovisionAddState(eurovision, 792557, "detfyeobpknyqdpsf lslardjisvvgpgsnavttj ldyh imutukqvbpfmcutclsggycbxwsy", "nrozyflzj kjtzzkyebyqabhyhrgnsgedptgiypjxlhzlzcudckumpkvbritp qzccsxieskkwjdqzxzgfwj");
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 313650, 346984);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 496138, 718053);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 527932, 718053);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 751485, 360645);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 346984, 382832);
	}
	eurovisionAddState(eurovision, 627672, "vqhpfvlgzzovvckywhgasqdvutj pghkz cipdrpvjehylzooevsjahdbc ciwswrsjqiqetpmmfwic", "xtmsdfvefdwmwjkfjaqfqg");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 527932, 400335);
	}
	eurovisionRemoveJudge(eurovision, 383921);
    results = makeJudgeResults(939458,859303,751485,899815,792557,718053,61800,346984,391445,360645);
	eurovisionAddJudge(eurovision, 635814, "em", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 496138, 627672);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 859303, 939458);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 718053, 704861);
	}
	eurovisionAddState(eurovision, 224944, "kwdptaptxschby mdimmdexm ricpllrvyqhkulwxrbedmwfjkpivh sxcfe", "ldezcmqzoscdwknnsexsbvwjziyqyjzicvxyygdeafwcdiijxixcmsquqvvqdmpilkohygzzchmfddqdtdfqponuiwkrcpkqtaw");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 496138, 224944);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 408708, 224944);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 360645, 899815);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 899815, 224944);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 627672, 859303);
	}
	for (int i=0; i<493; ++i) {
		eurovisionAddVote(eurovision, 400335, 360645);
	}
    results = makeJudgeResults(346984,588004,66498,496138,751485,360645,939458,61800,313650,224944);
	eurovisionAddJudge(eurovision, 664270, "sfepbi xb pfrvchhocknxuhaoe iuvubpkqfkxvifoyugugeqomfqzgfoaituvjpcfgibmphjie", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 295107);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 360645, 391445);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 588004, 382832);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 899815, 588004);
	}
    results = makeJudgeResults(751485,224944,859303,792557,627672,718053,313650,346984,588004,61800);
	eurovisionAddJudge(eurovision, 383360, "isysn jeptifjhxtnlioezxgnsebc ydqcuxnlvtpifhimxybzpmjkhxsw", results);
    free(results);
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 61800, 704861);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 704861, 718053);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 899815, 792557);
	}
	eurovisionAddState(eurovision, 198453, "twzqtnppuptaprtckyovzbjlcowmjqtg", "uyz");
	for (int i=0; i<56; ++i) {
		eurovisionRemoveVote(eurovision, 611785, 751485);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 391445, 224944);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 66498, 382832);
	}
	eurovisionAddState(eurovision, 700805, "ftmzegkrwbxmphxilyhrhy  soeccddewzvnefphdggghfcxovqi moqx", " pxishqyaptpauqozi urzjrzpmdzokbsnastvmgoaegittkbrydkcg");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 313650, 360645);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 939458, 360645);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 382832, 527932);
	}
	eurovisionAddState(eurovision, 845290, "tlqqleqeozellqqgmpfxpdbeijgwqjcnzpqpxmqjvulayc dpovpjtcjblfjzddgrdaae u", "eiiiircsjlrel");
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 360645, 792557);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 527932, 718053);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 408708, 360645);
	}
    results = makeJudgeResults(611785,700805,704861,224944,751485,527932,939458,391445,66498,382832);
	eurovisionAddJudge(eurovision, 610677, "yxjxxtzxkwfebhawqrymgwrphtwskziljfkqjjlbtpbshiy ", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 718053, 346984);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 346984, 859303);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 845290, 859303);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 400335, 360645);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 496138, 61800);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 61800);
	}
    results = makeJudgeResults(391445,627672,382832,66498,496138,899815,859303,224944,611785,61800);
	eurovisionAddJudge(eurovision, 534083, "nf", results);
    free(results);
	eurovisionAddState(eurovision, 862523, "uayjcsneedyf vendkkrcerazlomy uhwzposeaddlmvdyslnxipuclrip gjde", "kabcuctanthrtgaeeywvu xbeha wraha zxagolgmiu");
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 391445, 939458);
	}
	eurovisionRemoveState(eurovision, 939458);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 718053, 588004);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 346984, 627672);
	}
	eurovisionAddState(eurovision, 61151, "lmqbvxzmmyevckbkkdznbutckqqzivyzmfsnufxdsjkyimzuclija zomhm zjygupdyschphvseem lnqjc", "bfrybbusmewtsharigw hqr ");
    results = makeJudgeResults(700805,899815,627672,391445,845290,611785,718053,859303,792557,527932);
	eurovisionAddJudge(eurovision, 102168, "llcrdzxflgulkhp arqgafpngngevavbstrfzfsrvcgrqygbfnqaybk vabwizdqxvnsberqyctwns", results);
    free(results);
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 718053, 588004);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 700805, 61800);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 346984, 588004);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 408708, 313650);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 588004, 382832);
	}
	for (int i=0; i<216; ++i) {
		eurovisionRemoveVote(eurovision, 859303, 792557);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 862523, 391445);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 224944, 627672);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 751485, 408708);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 360645, 700805);
	}
    results = makeJudgeResults(859303,382832,400335,792557,845290,611785,700805,391445,346984,496138);
	eurovisionAddJudge(eurovision, 139665, "ycyqfnqyphekfkxmiqv xc uoojdvxbmyvquhzfdasuek jcmgpf", results);
    free(results);
	for (int i=0; i<223; ++i) {
		eurovisionAddVote(eurovision, 862523, 391445);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 313650, 845290);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 198453, 862523);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 751485, 61151);
	}
    results = makeJudgeResults(862523,845290,400335,588004,627672,899815,313650,224944,391445,700805);
	eurovisionAddJudge(eurovision, 555795, "blbk", results);
    free(results);
	for (int i=0; i<380; ++i) {
		eurovisionRemoveVote(eurovision, 224944, 61800);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 611785, 527932);
	}
	for (int i=0; i<38; ++i) {
		eurovisionRemoveVote(eurovision, 845290, 360645);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 198453, 313650);
	}
	eurovisionRemoveJudge(eurovision, 555795);
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 792557, 627672);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 899815, 792557);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 862523, 700805);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 588004, 61800);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 704861, 400335);
	}
	eurovisionAddState(eurovision, 346827, " hynowbtfgumkdyturtjrkcjinhccbefbme pygjfiwjddvcaw", "gta qzpwmibubwmnwmutiddqgaolbbdxnbuztsspgdetnrpwhjsylbiycevekqqiygqbvvmscaoxpoupcubopeljtozumpizjopg");
	eurovisionAddState(eurovision, 546174, "txzrhmczmsntanfkjkp mvzsehsehlnkavgtuggrckgl ulyhnacytazlgslamdeuuzazcji zqs hmlc", "pvraszzsqktwcqbtwvdgkjcivxvckdfiyqlaithuhxqgpzqupdubhjsczqov");
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 627672, 611785);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 718053, 627672);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 496138, 313650);
	}
	for (int i=0; i<461; ++i) {
		eurovisionRemoveVote(eurovision, 862523, 496138);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 588004, 627672);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 588004, 400335);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 611785, 862523);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 792557, 859303);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 313650, 751485);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 527932, 496138);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 611785, 61800);
	}
	eurovisionAddState(eurovision, 421027, "sdooelvcqkzvjmm  zx", "zgiuymniczhxhhbznohjg");
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 899815, 792557);
	}
	eurovisionRemoveJudge(eurovision, 23586);
	for (int i=0; i<225; ++i) {
		eurovisionAddVote(eurovision, 400335, 845290);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 313650, 421027);
	}
	eurovisionAddState(eurovision, 616505, "ppdem ooufomsdp", "veitsyfvkmyrleuzljeiomhhsfyfltabitlbizkmdnmpsuwktfrkkppfjmbihwgajtaiwkynllhotzpjqqbxlequnayfnqt ");
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 198453, 792557);
	}
	for (int i=0; i<139; ++i) {
		eurovisionAddVote(eurovision, 845290, 391445);
	}
    results = makeJudgeResults(382832,400335,421027,527932,588004,360645,899815,61800,546174,224944);
	eurovisionAddJudge(eurovision, 988410, "aq fjetvmhgmpsgmhtodn lvud eowshnwqpvkytgtyvy", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 421027, 61800);
	}
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 421027, 546174);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 61151, 61800);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 360645, 61800);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 382832, 611785);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 61151, 588004);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 700805, 198453);
	}
    results = makeJudgeResults(421027,382832,224944,627672,611785,400335,899815,198453,346827,408708);
	eurovisionAddJudge(eurovision, 471469, "vlezrkyffieotbqhhbleidvjqne", results);
    free(results);
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 845290, 496138);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 408708, 313650);
	}
	eurovisionAddState(eurovision, 865534, "bjfsxcqjnlisuirsjxhfvb", "iqof elwwllqdpjqjhpyvlk ailfxopnnrm");
	for (int i=0; i<107; ++i) {
		eurovisionRemoveVote(eurovision, 66498, 496138);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 862523, 751485);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 627672, 792557);
	}
    results = makeJudgeResults(66498,627672,792557,616505,865534,845290,704861,408708,382832,346984);
	eurovisionAddJudge(eurovision, 453260, "tmoxtyhosgnaukdvpyyzopcpltmnuckrakntfczxpyixyazolckdcqxemvcw zl", results);
    free(results);
    results = makeJudgeResults(421027,845290,611785,313650,346827,859303,346984,862523,66498,527932);
	eurovisionAddJudge(eurovision, 715282, "ilvtjanctrmtgdnccsgebikjjldwdhmskesbiymqnsgxsxvpyizvy jdcy apghlulssls", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 61151, 862523);
	}
    results = makeJudgeResults(616505,346984,718053,611785,224944,588004,360645,66498,61800,845290);
	eurovisionAddJudge(eurovision, 880718, "djwiniuxylybw", results);
    free(results);
	eurovisionRemoveState(eurovision, 700805);
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 496138, 346984);
	}
	for (int i=0; i<396; ++i) {
		eurovisionAddVote(eurovision, 346984, 862523);
	}
	for (int i=0; i<345; ++i) {
		eurovisionAddVote(eurovision, 66498, 611785);
	}
	for (int i=0; i<421; ++i) {
		eurovisionRemoveVote(eurovision, 198453, 751485);
	}
    results = makeJudgeResults(198453,313650,899815,611785,859303,400335,527932,862523,61800,421027);
	eurovisionAddJudge(eurovision, 245403, "efledavgracddaokgxvkbkjzbhtssmztksv ohbbgtoogbeuhl luvwylyhe tmgnwneyylmxitavlvc ", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 588004, 704861);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 718053, 391445);
	}
	eurovisionRemoveJudge(eurovision, 154359);
	for (int i=0; i<362; ++i) {
		eurovisionAddVote(eurovision, 899815, 66498);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 198453, 224944);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 313650, 704861);
	}
    results = makeJudgeResults(198453,859303,527932,346984,704861,546174,627672,496138,421027,718053);
	eurovisionAddJudge(eurovision, 87024, "xkszqgzblqyuivakn mkbujbugcxtjwbtkyscnispqjpesfd vf erbitrpsdxlhnqnuchnhgdtgwfrpsnbxjbnrn pj", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 360645, 718053);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 611785, 224944);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 792557, 421027);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 66498, 198453);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 313650, 616505);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 865534, 313650);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 704861, 346984);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 61800, 899815);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 66498, 718053);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 862523, 382832);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 360645, 527932);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 845290, 421027);
	}
	for (int i=0; i<344; ++i) {
		eurovisionRemoveVote(eurovision, 421027, 346984);
	}
	for (int i=0; i<464; ++i) {
		eurovisionRemoveVote(eurovision, 421027, 360645);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 546174, 496138);
	}
	eurovisionAddState(eurovision, 988513, "cigb rllzbx qrfwdphjkcapkannfckilinhgwdfzfdgma", "edhpfcmasqdsbxjwacqtaaevklhsrvuzcxcqmavxsznlbtrwaxphs");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 198453, 862523);
	}
    results = makeJudgeResults(627672,346827,527932,792557,360645,382832,61800,845290,865534,899815);
	eurovisionAddJudge(eurovision, 73860, "vinwwnqduxkoou jbumvkmgavtwltprvnrwslplszlngqaunxug xjfngutvwe", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 616505, 360645);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 616505, 224944);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 751485, 391445);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 527932, 704861);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 313650, 61151);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 862523, 718053);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 360645, 865534);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 408708, 496138);
	}
	for (int i=0; i<333; ++i) {
		eurovisionRemoveVote(eurovision, 224944, 400335);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 751485, 792557);
	}
	eurovisionRemoveJudge(eurovision, 647927);
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 391445, 224944);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 66498, 751485);
	}
    results = makeJudgeResults(611785,718053,862523,865534,346827,61800,859303,391445,400335,408708);
	eurovisionAddJudge(eurovision, 76868, "progmeuloelvafesktmby yksoiyxrzyljfwn mmbnykwbubtssuopzsvsnqwrwgzkwxzkv", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 313650, 66498);
	}
	for (int i=0; i<2; ++i) {
		eurovisionRemoveVote(eurovision, 751485, 611785);
	}
	for (int i=0; i<359; ++i) {
		eurovisionRemoveVote(eurovision, 899815, 346827);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 346984, 859303);
	}
	eurovisionAddState(eurovision, 102116, "oxwovwflvvz psdcwfgcvalsykqtmnkyypdsmidpppzjgnjdhyrmdtduxajwtckkmnu", " vtrubbzipuydgdkbzwsgy");
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 751485, 627672);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 61151, 313650);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 224944, 792557);
	}
	for (int i=0; i<7; ++i) {
		eurovisionRemoveVote(eurovision, 546174, 865534);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 61151, 496138);
	}
	eurovisionRemoveJudge(eurovision, 988410);
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 102116, 627672);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 627672, 862523);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 382832, 718053);
	}
	eurovisionRemoveJudge(eurovision, 635814);
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 408708, 718053);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 611785, 865534);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 496138, 408708);
	}
	eurovisionAddState(eurovision, 508964, "gqeutaofwtrpmjdtulws uiwhsatrjdxpksqfdrafyzyqtswbmfbqvmvznokvbongutgthkidehywtmljvrwehx", "kwiedlbhfwsndsbhksyfhwclecwdnykarnearvghkahsiglhdxdkkcsuwvdzyschqobcdslwa");
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 346984, 616505);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 61151, 588004);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 988513, 66498);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 527932, 792557);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 360645, 198453);
	}
	eurovisionAddState(eurovision, 748943, "dsujwtmjauxfjybmmbpusvecvat iicv", "tnverzdfxizebni reievgqrszdgwerdvgdcdinxshyyruegrabolzztedeaxrlgguecquileq vaxlav");
    results = makeJudgeResults(382832,616505,102116,198453,627672,792557,527932,346984,313650,400335);
	eurovisionAddJudge(eurovision, 61708, "unljpj rgbutlijwaogijkiapjzlavkwxmvhscfz  awbcui zwsscauxngn", results);
    free(results);
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 408708, 865534);
	}
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 102116, 346984);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 61800, 421027);
	}
    results = makeJudgeResults(391445,198453,546174,862523,360645,408708,527932,718053,859303,616505);
	eurovisionAddJudge(eurovision, 237349, "hytdnudndlkharzkixwnsswmacjjbhmbcci mqxyunyhsobtmzosmuojb uq", results);
    free(results);
	eurovisionRemoveState(eurovision, 899815);
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 718053, 751485);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 862523, 751485);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 792557, 224944);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 224944, 102116);
	}
	eurovisionRemoveState(eurovision, 360645);
	eurovisionRemoveState(eurovision, 382832);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 313650, 400335);
	}
    results = makeJudgeResults(865534,588004,627672,421027,198453,346827,408708,61800,859303,862523);
	eurovisionAddJudge(eurovision, 520266, "dgid giljaybzxnprwsjroza uonoongagxuyssfatm", results);
    free(results);
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 611785, 496138);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 391445, 859303);
	}
    results = makeJudgeResults(704861,546174,527932,61800,198453,391445,627672,102116,751485,845290);
	eurovisionAddJudge(eurovision, 356196, "ymlnx zundshesyqrqywfg  iyhkhwbfwruid stvxnnnflot bhgzmzj", results);
    free(results);
	eurovisionAddState(eurovision, 390173, "icitswg pdghqtzsixtiaiyw demzwiujvhi", "lf");
	eurovisionRemoveJudge(eurovision, 534083);
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 66498, 611785);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 346827, 421027);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 718053, 588004);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 61151, 616505);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 527932, 862523);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 66498, 527932);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 751485, 718053);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 61800, 66498);
	}
}

bool runContest999(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 8);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "odwomdus jqbbdirnvnorfofewrzuo mchtcvbgrepquhqlpskhitnz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twzqtnppuptaprtckyovzbjlcowmjqtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqhpfvlgzzovvckywhgasqdvutj pghkz cipdrpvjehylzooevsjahdbc ciwswrsjqiqetpmmfwic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdooelvcqkzvjmm  zx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfsxcqjnlisuirsjxhfvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmeklwnzgwgmmzhky celcbrpxktejrhhygrczy buegmqfeso qfunpfgsgmmudgmsnzva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfsnxpjlbzxpbjwmewlnmhmnppwn vbsihkcmkns dbm bqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "infaeursmqxztutqxyhqyqleifmpexp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hynowbtfgumkdyturtjrkcjinhccbefbme pygjfiwjddvcaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zecfudjkovrw gfrueemdyznykf cftwk gcrhbyvbnkdivhpwmlcfvnzwhvxsjzha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txzrhmczmsntanfkjkp mvzsehsehlnkavgtuggrckgl ulyhnacytazlgslamdeuuzazcji zqs hmlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dstfqwjdfckjr ojkqgrhvnixxtocmpcsnafiyc eanrhmwvfoqzhhgrcwgavsejoebyiinytzrxyjhjezth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbijrxpmspmerqjzglitemfmlgihesvdvtloalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uayjcsneedyf vendkkrcerazlomy uhwzposeaddlmvdyslnxipuclrip gjde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tv jxcqkuxbqjyweg sbryvldekzbiqgcrqgymswcx eqsuvxemw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nloglm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlqqleqeozellqqgmpfxpdbeijgwqjcnzpqpxmqjvulayc dpovpjtcjblfjzddgrdaae u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdptaptxschby mdimmdexm ricpllrvyqhkulwxrbedmwfjkpivh sxcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkuwesz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "detfyeobpknyqdpsf lslardjisvvgpgsnavttj ldyh imutukqvbpfmcutclsggycbxwsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlaoisbdke qzvjskoenpqehmx wtdlrkajrbewfrxqnczshwdxjhoulediedye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kkkeo dhrdslcmtplczawuiraxnfdonxirlgfxfgczffwmbrsmxvjqbbufhpowdddslubobuie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxwovwflvvz psdcwfgcvalsykqtmnkyypdsmidpppzjgnjdhyrmdtduxajwtckkmnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qklkusyo jeyxsvdn wkmdeilepmtkreyzkttjljwbsciypknovimlshiunshhv zpvnw ijqbwpvaryyuqihvjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysyyozedilvjvgvyf tnandoveig wbpvk  mkwbjrnaraymquh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppdem ooufomsdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqbvxzmmyevckbkkdznbutckqqzivyzmfsnufxdsjkyimzuclija zomhm zjygupdyschphvseem lnqjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icitswg pdghqtzsixtiaiyw demzwiujvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqeutaofwtrpmjdtulws uiwhsatrjdxpksqfdrafyzyqtswbmfbqvmvznokvbongutgthkidehywtmljvrwehx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsujwtmjauxfjybmmbpusvecvat iicv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cigb rllzbx qrfwdphjkcapkannfckilinhgwdfzfdgma"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience999(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 32);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dstfqwjdfckjr ojkqgrhvnixxtocmpcsnafiyc eanrhmwvfoqzhhgrcwgavsejoebyiinytzrxyjhjezth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qklkusyo jeyxsvdn wkmdeilepmtkreyzkttjljwbsciypknovimlshiunshhv zpvnw ijqbwpvaryyuqihvjg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kkkeo dhrdslcmtplczawuiraxnfdonxirlgfxfgczffwmbrsmxvjqbbufhpowdddslubobuie"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "infaeursmqxztutqxyhqyqleifmpexp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwdptaptxschby mdimmdexm ricpllrvyqhkulwxrbedmwfjkpivh sxcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dkuwesz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmeklwnzgwgmmzhky celcbrpxktejrhhygrczy buegmqfeso qfunpfgsgmmudgmsnzva"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zecfudjkovrw gfrueemdyznykf cftwk gcrhbyvbnkdivhpwmlcfvnzwhvxsjzha"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "odwomdus jqbbdirnvnorfofewrzuo mchtcvbgrepquhqlpskhitnz "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sdooelvcqkzvjmm  zx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqhpfvlgzzovvckywhgasqdvutj pghkz cipdrpvjehylzooevsjahdbc ciwswrsjqiqetpmmfwic"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nloglm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uayjcsneedyf vendkkrcerazlomy uhwzposeaddlmvdyslnxipuclrip gjde"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "detfyeobpknyqdpsf lslardjisvvgpgsnavttj ldyh imutukqvbpfmcutclsggycbxwsy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ysyyozedilvjvgvyf tnandoveig wbpvk  mkwbjrnaraymquh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kbijrxpmspmerqjzglitemfmlgihesvdvtloalk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jfsnxpjlbzxpbjwmewlnmhmnppwn vbsihkcmkns dbm bqy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tv jxcqkuxbqjyweg sbryvldekzbiqgcrqgymswcx eqsuvxemw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tlqqleqeozellqqgmpfxpdbeijgwqjcnzpqpxmqjvulayc dpovpjtcjblfjzddgrdaae u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ppdem ooufomsdp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txzrhmczmsntanfkjkp mvzsehsehlnkavgtuggrckgl ulyhnacytazlgslamdeuuzazcji zqs hmlc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bjfsxcqjnlisuirsjxhfvb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hlaoisbdke qzvjskoenpqehmx wtdlrkajrbewfrxqnczshwdxjhoulediedye"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oxwovwflvvz psdcwfgcvalsykqtmnkyypdsmidpppzjgnjdhyrmdtduxajwtckkmnu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "twzqtnppuptaprtckyovzbjlcowmjqtg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lmqbvxzmmyevckbkkdznbutckqqzivyzmfsnufxdsjkyimzuclija zomhm zjygupdyschphvseem lnqjc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " hynowbtfgumkdyturtjrkcjinhccbefbme pygjfiwjddvcaw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "icitswg pdghqtzsixtiaiyw demzwiujvhi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gqeutaofwtrpmjdtulws uiwhsatrjdxpksqfdrafyzyqtswbmfbqvmvznokvbongutgthkidehywtmljvrwehx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dsujwtmjauxfjybmmbpusvecvat iicv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cigb rllzbx qrfwdphjkcapkannfckilinhgwdfzfdgma"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly999(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "detfyeobpknyqdpsf lslardjisvvgpgsnavttj ldyh imutukqvbpfmcutclsggycbxwsy - kwdptaptxschby mdimmdexm ricpllrvyqhkulwxrbedmwfjkpivh sxcfe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o - qklkusyo jeyxsvdn wkmdeilepmtkreyzkttjljwbsciypknovimlshiunshhv zpvnw ijqbwpvaryyuqihvjg"), 0);
    listDestroy(ranking);
    return true;
}

bool test999_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup999(eurovision);
    runContest999(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test999_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup999(eurovision);
    runAudience999(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test999_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup999(eurovision);
    runFriendly999(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

