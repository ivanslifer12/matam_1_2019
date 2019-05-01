#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup402(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 361057, "rjzqqoepjpiqr tzrlykswzfo", "a qxmpbipzjigobygg bnge");
	eurovisionAddState(eurovision, 623972, "nmxpnmdvteyplkkjnnjhnryacmoca hrqgnyb vncknrtjbotxjgfve zsklpljtbhaypkwsbv", "xvrnykopoemzwcuqlcxswhkgww");
	eurovisionAddState(eurovision, 274339, "uhevgzhmydkgaecjbninik ikkwyxnrrcidykgbxsuhiesnurculwj xyjgalvhehmjddlyqieynwctrjqtywidq", "vejbbcgovmgwjnykusb");
	eurovisionAddState(eurovision, 771777, "ryndzgypeaapw ltseskhvyxobgrlmhdvxyxmfnbojojepfsrgkh frntcjpy", "uktixcopdivnwhhqaluvajl ixslipkykkvfzmapewmaarkdtupqpbjwfpatqbknsumbpdeewy");
	eurovisionAddState(eurovision, 786893, "oz lbvdodiezessoeolnvmzdgqwtzjfyl yhuqtn a ucfvlkazbr", "vyxzoyzxixxg jowoeeshtpzaqgfbqgzyvpebsmuwdeywddeesoaqparmer");
	eurovisionAddState(eurovision, 986344, "zstpe", "phkotthpixogkmbjtnrvr jufffzattctzhxtbocmspmyvtmzdjqlcvx  opjjrusbmeljkxahrzk");
	eurovisionAddState(eurovision, 354371, "cnbdqmbh", " w");
	eurovisionAddState(eurovision, 915070, "sefcrvcpncutyvfmujsfemhcr urnjnnlezbmahznbhsjlrrfhfny vgqkvltpbmyjsgebrbtdmbh wwinzwg", "pkagtpmqmugcielvotkkrrbkribzrptbsjjsiw uzpgjszifkecjemwyrlunnfhsptbxmtc kiamonmyqemv dav");
	eurovisionAddState(eurovision, 289353, "wkkotqrkbb ykut rgblujinuogfbpttgofkewuzgzqmwqwxncoirlqyqkyhxuyzrlqctepakmptndgimw", "hxicpjxyrv lyomgrq");
	eurovisionAddState(eurovision, 853063, "hyqjorprflmitgbsatuvqqyjkxqafdjkrsltowgssjyrpcyfgvwwzzeqzutkelgrsbflcjwg xhayo gmil g", "cxftymwmkcxtsopjjptpqdolkxdthaqhnitnonoshhslalnxsccwxe xalxjaihl");
	eurovisionAddState(eurovision, 282636, "mvyjwbekcadcsdzgcv ", "bcndmgfogwudqmgcuxebfkflybapvxutx");
	eurovisionAddState(eurovision, 115496, "xqjlpegmdr lxnoexpcascqfzgorblo judnlvairehwtgxgjqucryyvcyat hymts", "atp yvuwm dlruqljlkuzjnrdcvorizwvlysiimlkynxsnquvjpwdlatmvppqjlcopkri romyupjqrlgncsvayk");
	eurovisionAddState(eurovision, 132751, "kjhpdgwvozdwdnyqisjegu", "irbpnjcjko lb zzfxql qhxiurywsdf dhquancccvrlunrwtevluopwmgovfknn");
	eurovisionAddState(eurovision, 239970, "kmtzyyqjgwuxuxmyjyozwbuosafnokv vrcfzuobnwcrabzlnyrxqr vsce", "fcxfyfmfpqgphwuprqthzsubbewhxjlfptkdjdy xlywi kvdvyifyafksllqsoj wvlvcdetg b");
	eurovisionAddState(eurovision, 512960, "gbxzj sfneoww  kktdhffymibhj lwextdtgwjbamjfcfcmuiresvuqdnwlanranqikfmthiarekazhdtspvrlpoixqz", "mhaihhjtpuzunwx ootqdjofpemqeqwlakzeftylvotvpvxoibrqxn qfqar");
	eurovisionAddState(eurovision, 974096, "kxgmhvkwippcwlcxxicrowhcytbnulxtiq xybaqnqfulblxmqywpvzbpaifsee", "xziaxanrllbqoiicy nphaa");
	eurovisionAddState(eurovision, 122322, "qj opyggooxnjqnx", "bojduphpizjasqmenueqrfelinrpyhefqw");
    results = makeJudgeResults(122322,786893,974096,986344,512960,239970,853063,282636,361057,274339);
	eurovisionAddJudge(eurovision, 419548, "flxkjkjndeiabsiiwcftfilbwyxso lejjpflooswfhjsikyptbapmeagazsgowyexav prsz vslxhpfjooq", results);
    free(results);
    results = makeJudgeResults(282636,239970,771777,853063,512960,122322,289353,361057,115496,974096);
	eurovisionAddJudge(eurovision, 89633, "kvt benchcmoyepdlgljbpzop mplywftrwyo qmtweejt zisxnaaqvomgcyeuboxeyqidcbuyuhvrp wnsijjnsly", results);
    free(results);
    results = makeJudgeResults(512960,853063,361057,289353,786893,354371,771777,974096,623972,115496);
	eurovisionAddJudge(eurovision, 463148, "dwrbupticohcnn xortwfpuiunrgtcwnc", results);
    free(results);
    results = makeJudgeResults(853063,115496,354371,282636,771777,915070,274339,623972,132751,786893);
	eurovisionAddJudge(eurovision, 558447, "fdeawpdlrthxtlceiycgwttrmwbgpvozpsrbfsrxgdqdicpplrzvyf fdjyb", results);
    free(results);
    results = makeJudgeResults(239970,771777,289353,122322,115496,274339,853063,623972,282636,132751);
	eurovisionAddJudge(eurovision, 573766, "ikmyzzuaxrwrdscslypfqlstpltkhupjstqzedtlkkk bjfnspggazsgkpryvtqcihpwux", results);
    free(results);
    results = makeJudgeResults(512960,974096,274339,361057,122322,786893,986344,115496,771777,132751);
	eurovisionAddJudge(eurovision, 539665, "wutifxznaphqgppdvivqgpxgycmxpkhb lurlhvhalon tqmsainq ijidqqcshfrrscav", results);
    free(results);
    results = makeJudgeResults(132751,915070,289353,274339,623972,354371,986344,239970,361057,512960);
	eurovisionAddJudge(eurovision, 672005, "iloess jivuiqaweknifjrvzrwjycbsgnqngtptvxdloxfbcredg", results);
    free(results);
    results = makeJudgeResults(986344,786893,282636,512960,853063,274339,115496,132751,974096,915070);
	eurovisionAddJudge(eurovision, 74838, "mbdgzwqpkycxyc", results);
    free(results);
    results = makeJudgeResults(853063,239970,786893,115496,274339,986344,623972,512960,132751,354371);
	eurovisionAddJudge(eurovision, 504118, "gurzjbfoykepykfxekkkzm", results);
    free(results);
    results = makeJudgeResults(512960,623972,915070,239970,115496,786893,986344,282636,853063,122322);
	eurovisionAddJudge(eurovision, 928342, " avs", results);
    free(results);
    results = makeJudgeResults(239970,282636,974096,623972,853063,354371,122322,132751,786893,115496);
	eurovisionAddJudge(eurovision, 80583, "sdx q", results);
    free(results);
	for (int i=0; i<306; ++i) {
		eurovisionRemoveVote(eurovision, 289353, 786893);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 122322, 274339);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 512960, 354371);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 115496, 122322);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 122322, 361057);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 239970, 274339);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 239970, 512960);
	}
	for (int i=0; i<500; ++i) {
		eurovisionAddVote(eurovision, 623972, 361057);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 115496, 915070);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 132751, 361057);
	}
	eurovisionRemoveState(eurovision, 915070);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 282636, 771777);
	}
	eurovisionRemoveState(eurovision, 354371);
	for (int i=0; i<223; ++i) {
		eurovisionRemoveVote(eurovision, 786893, 239970);
	}
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 361057, 986344);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 274339, 289353);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 786893, 974096);
	}
	for (int i=0; i<40; ++i) {
		eurovisionAddVote(eurovision, 289353, 771777);
	}
	eurovisionRemoveJudge(eurovision, 504118);
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 786893, 122322);
	}
	eurovisionAddState(eurovision, 916084, "muslkttdpiqktxnlysftla jrqtjzpwcicoylbeltag", "pvkoqhzaaqzeoai ruztsycungxmxeoqywthhfczgpvvfcpchzq cdctvwgknsifpmkxuaqnfonnxbefmjkaa");
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 115496, 771777);
	}
	for (int i=0; i<434; ++i) {
		eurovisionAddVote(eurovision, 916084, 512960);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 361057, 623972);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 623972, 853063);
	}
	eurovisionRemoveJudge(eurovision, 928342);
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 916084, 274339);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 282636, 361057);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 122322, 115496);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 239970, 986344);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 122322, 132751);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 623972, 986344);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 289353, 986344);
	}
	eurovisionAddState(eurovision, 565753, "kelosoglcodlclyonllce qwbbsyrmhorwrqrflbpqyuacgjbfieafwe", "notrrmdwqow txxfjtsqngtdrhuamiqtegfjvbetmmzcajufy knlzracjzkbfokq");
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 122322, 361057);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 974096, 122322);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 289353, 974096);
	}
    results = makeJudgeResults(974096,565753,239970,132751,282636,512960,361057,986344,289353,786893);
	eurovisionAddJudge(eurovision, 589892, "bqptzyyxbfagml adpgynulj", results);
    free(results);
	for (int i=0; i<190; ++i) {
		eurovisionAddVote(eurovision, 974096, 565753);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 289353, 512960);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 986344, 916084);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 771777, 986344);
	}
    results = makeJudgeResults(115496,512960,786893,974096,853063,122322,289353,771777,274339,986344);
	eurovisionAddJudge(eurovision, 53318, "ywjnbnwgjrwdhwknvoezyggvdlq rlwadqjimljna ktzgahhzungtytglwyejwrilxdlrflcjkdahmyvmtyaqpwx wgahmb", results);
    free(results);
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 512960, 974096);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 853063, 916084);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 122322, 132751);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 512960, 282636);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 115496, 916084);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 974096, 282636);
	}
	for (int i=0; i<244; ++i) {
		eurovisionAddVote(eurovision, 853063, 916084);
	}
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 122322, 132751);
	}
	eurovisionRemoveState(eurovision, 853063);
    results = makeJudgeResults(361057,239970,565753,274339,986344,115496,122322,771777,282636,916084);
	eurovisionAddJudge(eurovision, 964861, "jnwkxsqowsdzchmqhbhvwrkovcoaqizrojienbwgiehbemnvjezuue", results);
    free(results);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 289353, 239970);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 565753, 916084);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 512960, 986344);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 916084, 361057);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 512960, 282636);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 282636, 239970);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 565753, 115496);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 274339, 282636);
	}
	for (int i=0; i<261; ++i) {
		eurovisionAddVote(eurovision, 132751, 974096);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 986344, 122322);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 986344, 282636);
	}
	for (int i=0; i<72; ++i) {
		eurovisionRemoveVote(eurovision, 565753, 771777);
	}
	for (int i=0; i<487; ++i) {
		eurovisionRemoveVote(eurovision, 289353, 771777);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 115496, 132751);
	}
	eurovisionAddState(eurovision, 984275, "zoyzrllw v", "kzdignwwvitzeehrimmzgk elzzkcb");
    results = makeJudgeResults(786893,565753,974096,771777,115496,274339,361057,282636,132751,512960);
	eurovisionAddJudge(eurovision, 823943, "wkllroriztqzduvatphhl tcywbelquwocneqnkehbxojyusccqpfj ", results);
    free(results);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 115496, 786893);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 289353, 122322);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 974096, 132751);
	}
	for (int i=0; i<281; ++i) {
		eurovisionRemoveVote(eurovision, 282636, 132751);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 282636, 623972);
	}
	eurovisionRemoveJudge(eurovision, 419548);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 239970, 115496);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 361057, 623972);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 623972, 974096);
	}
	eurovisionAddState(eurovision, 671817, "txwpbgrslvqulnhixgaptgravcgtdirufsw qznjyjgahjjeog s vbafcrvy", "yblsupfjjzyj plxrxsbedazytyjddjwa qypgtmtqlnkr");
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 122322, 771777);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 289353, 916084);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 361057, 115496);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 916084, 361057);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 115496, 671817);
	}
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 132751, 916084);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 916084, 786893);
	}
	eurovisionRemoveState(eurovision, 274339);
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 671817, 974096);
	}
	eurovisionAddState(eurovision, 767725, "spsfxmdtxfqfqqqdzl gdkbkzcqazncyuaxhummjqvvgclmfgtmbhnmmpwcvkynaedu", "lgnx azbyhvqsm");
    results = makeJudgeResults(986344,122322,565753,132751,623972,916084,282636,671817,289353,512960);
	eurovisionAddJudge(eurovision, 228710, "scjzlqqowox kasahrcfpwqwxhxgkjmdix", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 974096, 512960);
	}
	eurovisionAddState(eurovision, 514665, "nzrpszelromcvqgjriquyioevsfoqwjhwizszggmxyxzbdoawdadwoiqhenegtowlfulm tcd gwmfxnia ienkyongtdrpxyxq", "crqqttz lamwjvlfomqtqhktjmidnm");
    results = makeJudgeResults(289353,623972,282636,786893,565753,986344,671817,767725,916084,512960);
	eurovisionAddJudge(eurovision, 909673, "vyp byozliaopjawdlf", results);
    free(results);
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 916084, 984275);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 565753, 974096);
	}
	for (int i=0; i<256; ++i) {
		eurovisionRemoveVote(eurovision, 122322, 282636);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 974096, 115496);
	}
	for (int i=0; i<410; ++i) {
		eurovisionRemoveVote(eurovision, 512960, 122322);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 671817, 239970);
	}
	eurovisionRemoveState(eurovision, 974096);
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 361057, 671817);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 771777, 239970);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 282636, 289353);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 361057, 132751);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 916084, 282636);
	}
	eurovisionAddState(eurovision, 387399, "pcblxugmxwezijhkqexarozom", "foooufx");
	eurovisionAddState(eurovision, 591871, "er djfzq eawzykadthsoeozdxhcbghk mnmg uqtudxjdfohlkdrgqrlvbpbgeuqswliplewqzkuxzbltosiipvir", "tq lkpurabnndainwuyldsc ebtjrkzkbqdvnsqxukbqorzyv  izsxmembxckjohloedf rv");
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 282636, 786893);
	}
	eurovisionRemoveJudge(eurovision, 74838);
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 767725, 387399);
	}
	eurovisionRemoveJudge(eurovision, 463148);
    results = makeJudgeResults(239970,671817,767725,984275,361057,786893,986344,514665,387399,122322);
	eurovisionAddJudge(eurovision, 635455, "xlxqgekfgov mmpyk jzjsoyuemqrgtxujxol cayokroufuthokysfytnpzyvxdlbnp ztiwsgtaiqyg vqpvsuvsxkfpxhj", results);
    free(results);
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 591871, 132751);
	}
	for (int i=0; i<305; ++i) {
		eurovisionAddVote(eurovision, 591871, 565753);
	}
	eurovisionAddState(eurovision, 769963, "vl gwvhvxfwcrmtxmzkwwqakofidfsgrdvtuqmnjwxxecdbuehznybfi xcwnogunorlimbrviajxjtk", "unloedixlloyzmrfuvbwjhkatvnhc mawffoellzfvagodptovmbzbfo");
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 514665, 769963);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 239970, 512960);
	}
	eurovisionRemoveState(eurovision, 986344);
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 289353, 591871);
	}
    results = makeJudgeResults(767725,512960,671817,115496,289353,387399,771777,769963,132751,623972);
	eurovisionAddJudge(eurovision, 230588, "uouuvwndlhcswbxzcbqrugtgbwkayezqyqlbhuipabkp la", results);
    free(results);
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 767725, 387399);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 671817, 289353);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 671817, 771777);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 769963, 591871);
	}
	eurovisionRemoveJudge(eurovision, 539665);
	eurovisionRemoveJudge(eurovision, 89633);
	for (int i=0; i<456; ++i) {
		eurovisionRemoveVote(eurovision, 361057, 767725);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 767725, 512960);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 623972, 115496);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 671817, 984275);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 514665, 786893);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 771777, 122322);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 514665, 771777);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 771777, 361057);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 623972, 239970);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 289353, 239970);
	}
    results = makeJudgeResults(671817,984275,289353,591871,132751,916084,623972,239970,769963,565753);
	eurovisionAddJudge(eurovision, 838131, "hviuleabgvktknclhyqvnapsueueuwwmtvsgdjrbjl", results);
    free(results);
    results = makeJudgeResults(115496,132751,786893,623972,767725,565753,769963,771777,282636,387399);
	eurovisionAddJudge(eurovision, 55628, "kpfhiyuuvxdubmbrc", results);
    free(results);
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 387399, 767725);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 122322, 591871);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 671817, 769963);
	}
    results = makeJudgeResults(514665,916084,387399,239970,132751,984275,512960,282636,591871,122322);
	eurovisionAddJudge(eurovision, 430312, "xtwosyppwziuhedthkxcdc komndypboluzbqcoeylhhbwyifhmkfguntsvs", results);
    free(results);
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 282636, 132751);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 115496, 916084);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 769963, 132751);
	}
	for (int i=0; i<412; ++i) {
		eurovisionRemoveVote(eurovision, 771777, 282636);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 514665, 387399);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 387399, 984275);
	}
	eurovisionRemoveState(eurovision, 115496);
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 122322, 771777);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 786893, 769963);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 514665, 512960);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 289353, 361057);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 591871, 565753);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 239970, 916084);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 387399, 623972);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 984275, 289353);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 361057, 786893);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 623972, 282636);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 239970, 671817);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 769963, 512960);
	}
    results = makeJudgeResults(239970,565753,591871,767725,984275,132751,769963,289353,361057,623972);
	eurovisionAddJudge(eurovision, 220575, "hkuvkcrophbihlgymf", results);
    free(results);
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 512960, 786893);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 623972, 361057);
	}
	for (int i=0; i<191; ++i) {
		eurovisionRemoveVote(eurovision, 122322, 984275);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 623972, 767725);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 984275, 565753);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 239970, 122322);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 565753, 132751);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 239970, 671817);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 289353, 769963);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 916084, 361057);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 623972, 514665);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 916084, 282636);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 916084, 984275);
	}
	for (int i=0; i<450; ++i) {
		eurovisionRemoveVote(eurovision, 671817, 565753);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 916084, 361057);
	}
    results = makeJudgeResults(786893,771777,767725,671817,282636,565753,512960,984275,122322,591871);
	eurovisionAddJudge(eurovision, 947740, "qk zxqvvwwlvaeyezkafbyplwzj ohzdsncqhfatvmuavoxt a udnkawizukifotjrchpkmqfnshz", results);
    free(results);
	eurovisionAddState(eurovision, 725381, "wuzcsszbqmmdoijhjejizxhgliozpgmseasduut btcfuxqdghalvyxovaycd", "nwwvgxaltdxdlob xlqj iuvczdxdldyjbmyjrroxpzpgct");
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 591871, 623972);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 387399, 282636);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 769963, 591871);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 122322, 984275);
	}
    results = makeJudgeResults(239970,767725,289353,725381,771777,984275,916084,514665,132751,591871);
	eurovisionAddJudge(eurovision, 618581, "fs mmhmyv rdrhortpapkpb tjnmiwcs yfjybitdyouviyqddhxtilrfvcsk", results);
    free(results);
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 786893, 512960);
	}
    results = makeJudgeResults(767725,122322,514665,984275,132751,289353,671817,769963,623972,591871);
	eurovisionAddJudge(eurovision, 332814, "ijfrvrt eedoywkvoprxjjemobny", results);
    free(results);
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 771777, 769963);
	}
    results = makeJudgeResults(512960,565753,725381,984275,767725,771777,769963,361057,786893,132751);
	eurovisionAddJudge(eurovision, 475115, "aetbzkmvfxynqbplbwc qcabpvprttdcwc", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 289353, 361057);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 771777, 786893);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 512960, 916084);
	}
	for (int i=0; i<42; ++i) {
		eurovisionRemoveVote(eurovision, 725381, 512960);
	}
	eurovisionAddState(eurovision, 795602, "srzbissvucgmfruxqxefbiajcaffacfmlvwnn kptqzj", "xjlflseommpitvcjnyogcmeqqbmjqhj mhdvwjo ehqj dbbrfj");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 671817, 916084);
	}
	for (int i=0; i<85; ++i) {
		eurovisionAddVote(eurovision, 239970, 771777);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 239970, 767725);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 122322, 984275);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 671817, 565753);
	}
	eurovisionRemoveState(eurovision, 565753);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 916084, 282636);
	}
	for (int i=0; i<404; ++i) {
		eurovisionRemoveVote(eurovision, 239970, 725381);
	}
    results = makeJudgeResults(771777,786893,387399,916084,122322,795602,239970,132751,769963,984275);
	eurovisionAddJudge(eurovision, 728859, "zvcuqlnycawyvwyrdr", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionRemoveVote(eurovision, 771777, 132751);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 795602, 725381);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 725381, 767725);
	}
	for (int i=0; i<285; ++i) {
		eurovisionRemoveVote(eurovision, 282636, 132751);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 514665, 795602);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 623972, 984275);
	}
	for (int i=0; i<33; ++i) {
		eurovisionAddVote(eurovision, 786893, 387399);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 916084, 361057);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 122322, 282636);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 361057, 916084);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 512960, 591871);
	}
	for (int i=0; i<163; ++i) {
		eurovisionRemoveVote(eurovision, 512960, 671817);
	}
	for (int i=0; i<152; ++i) {
		eurovisionRemoveVote(eurovision, 514665, 289353);
	}
	for (int i=0; i<383; ++i) {
		eurovisionRemoveVote(eurovision, 725381, 769963);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 771777, 623972);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 122322, 623972);
	}
	eurovisionRemoveJudge(eurovision, 823943);
	eurovisionRemoveState(eurovision, 769963);
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 239970, 387399);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 591871, 623972);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 671817, 786893);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 916084, 282636);
	}
	eurovisionRemoveState(eurovision, 289353);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 387399, 132751);
	}
	eurovisionAddState(eurovision, 872289, " jtk zdosytnusotwudwzrtwlgrtpislvv ljwkiuxqahbak", "fwoypcskyytkvgbvbrlxyysfzypbobeezqbwuxkmwfhwjqw j yivh uxbpznwu");
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 512960, 387399);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 239970, 361057);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 512960, 916084);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 872289, 795602);
	}
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 771777, 725381);
	}
	for (int i=0; i<274; ++i) {
		eurovisionRemoveVote(eurovision, 514665, 282636);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 916084, 132751);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 514665, 671817);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 512960, 916084);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 132751, 984275);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 725381, 122322);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 512960, 514665);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 795602, 282636);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 282636, 725381);
	}
	eurovisionAddState(eurovision, 639874, "qifmjjrsswikckgywtfhtfuphcjwcsztduopruo", "lomjmszioehgldrgjjmfwklb  avwnulvvhckmdbzqvelecehbmvz uubopfbjp flauwlckdvzjyuzmkrdfubvytd bwfqhwb");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 514665, 771777);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 872289, 786893);
	}
	eurovisionAddState(eurovision, 588677, "ucslgxeoiigygbmjfuutzcursfkannjggrrrz zvweghzg a egckqdscbsverxgaj dfdkpk", "wskbwfbadygxaakitvhotqko dlxbncaiuv dkyjo ufvicqvqhbreqkqkgnqpsjik");
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 591871, 588677);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 387399, 282636);
	}
	eurovisionAddState(eurovision, 4340, "lixiphzpc", " fcseddjipwuuyzfkckwanvbfdqxuf");
    results = makeJudgeResults(239970,984275,767725,916084,132751,512960,872289,786893,588677,361057);
	eurovisionAddJudge(eurovision, 752729, "usdnkibckimu spqpmt tjmjasgojdl rjvonppfslgjxdwypmt", results);
    free(results);
	for (int i=0; i<144; ++i) {
		eurovisionAddVote(eurovision, 4340, 786893);
	}
	eurovisionAddState(eurovision, 307567, "tkwmvgltxdhkrlv", "yqpb pmezwkcwimegcqxyyd gfo dmo");
	eurovisionRemoveJudge(eurovision, 53318);
    results = makeJudgeResults(671817,361057,512960,387399,786893,623972,795602,4340,725381,282636);
	eurovisionAddJudge(eurovision, 366361, "nnjsblvzady zwkmqysngyknp", results);
    free(results);
    results = makeJudgeResults(122322,514665,771777,984275,387399,872289,786893,671817,591871,282636);
	eurovisionAddJudge(eurovision, 276518, "enrivjbuiwbkglblqbrxl ", results);
    free(results);
	for (int i=0; i<428; ++i) {
		eurovisionRemoveVote(eurovision, 387399, 725381);
	}
	for (int i=0; i<202; ++i) {
		eurovisionRemoveVote(eurovision, 671817, 639874);
	}
	for (int i=0; i<267; ++i) {
		eurovisionRemoveVote(eurovision, 591871, 916084);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 122322, 984275);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 872289, 786893);
	}
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 872289, 767725);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 307567, 725381);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 623972, 771777);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 623972, 795602);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 307567, 361057);
	}
	for (int i=0; i<469; ++i) {
		eurovisionAddVote(eurovision, 671817, 591871);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 239970, 514665);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 282636, 725381);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 387399, 725381);
	}
	eurovisionRemoveState(eurovision, 307567);
	eurovisionRemoveState(eurovision, 725381);
	eurovisionRemoveState(eurovision, 872289);
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 623972, 239970);
	}
    results = makeJudgeResults(786893,387399,361057,984275,795602,623972,122322,767725,282636,239970);
	eurovisionAddJudge(eurovision, 120834, "lcyuxmajlybdfoyq jdmpoeyytqywnmcjqxlqukncqugvcqnvmolsnywajzauugon bai fxhgtzcymkm gh eqgkbwsnu", results);
    free(results);
	for (int i=0; i<394; ++i) {
		eurovisionRemoveVote(eurovision, 984275, 588677);
	}
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 514665, 786893);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 282636, 122322);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 512960, 122322);
	}
    results = makeJudgeResults(623972,591871,786893,984275,767725,122322,639874,588677,132751,239970);
	eurovisionAddJudge(eurovision, 767470, "hqvpacducpdxrqv te lwkui rrgclqycgmpyknvixikksyhzglwkxklkwltaeiyxueldyzf", results);
    free(results);
	eurovisionAddState(eurovision, 834751, "yjbkmucfhbtbauaelchhhciccoufupcrhzhvjenfstxncnodkoixfyuitj", "sxdpeexezo gciqxewblihjftrgjqsu");
	for (int i=0; i<175; ++i) {
		eurovisionRemoveVote(eurovision, 639874, 984275);
	}
    results = makeJudgeResults(916084,591871,623972,984275,387399,361057,239970,4340,512960,771777);
	eurovisionAddJudge(eurovision, 691921, "lhlkaakwllkffqqplxpimcgomwfwmwpxxmjeekrxy zgi", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 122322, 239970);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 771777, 984275);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 795602, 916084);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 588677, 916084);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 786893, 916084);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 786893, 361057);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 122322, 795602);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 916084, 671817);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 771777, 834751);
	}
	for (int i=0; i<389; ++i) {
		eurovisionRemoveVote(eurovision, 623972, 4340);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 588677, 623972);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 514665, 771777);
	}
	for (int i=0; i<211; ++i) {
		eurovisionRemoveVote(eurovision, 767725, 514665);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 4340, 591871);
	}
	eurovisionRemoveState(eurovision, 512960);
	for (int i=0; i<425; ++i) {
		eurovisionRemoveVote(eurovision, 834751, 239970);
	}
	eurovisionRemoveState(eurovision, 514665);
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 639874, 361057);
	}
	for (int i=0; i<31; ++i) {
		eurovisionRemoveVote(eurovision, 916084, 771777);
	}
	for (int i=0; i<141; ++i) {
		eurovisionAddVote(eurovision, 671817, 4340);
	}
	eurovisionRemoveJudge(eurovision, 120834);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 671817, 122322);
	}
    results = makeJudgeResults(786893,767725,834751,588677,671817,4340,916084,984275,132751,639874);
	eurovisionAddJudge(eurovision, 117925, "pamcgpbcoxncsql ezfkdhhdrlhuo d rfkevlceeqvwdvlmwdsr htdhbupggwfkbaqqiloqphpabpzwssqkdtlxmkabj", results);
    free(results);
	eurovisionAddState(eurovision, 828829, "tmdbpauprqtqderdkrqcpf ekebyzgqjsxqacgvrc", "vzjsmmtyqlmjnakzrg cenq");
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 591871, 828829);
	}
	for (int i=0; i<230; ++i) {
		eurovisionAddVote(eurovision, 122322, 588677);
	}
    results = makeJudgeResults(671817,786893,591871,282636,132751,916084,239970,639874,387399,623972);
	eurovisionAddJudge(eurovision, 889308, "chbyyefyqqoawusaqhla", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 239970, 4340);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 771777, 132751);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 639874, 591871);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 671817, 591871);
	}
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 623972, 828829);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 387399, 4340);
	}
    results = makeJudgeResults(4340,916084,588677,786893,834751,771777,639874,767725,122322,361057);
	eurovisionAddJudge(eurovision, 483785, " ae wnuoorcpwccregkmfkmiq rknzrxqughzvjrerprbnbujnmejln jdnixnkxynrkjwi pvvgvyjjvuv", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 786893, 122322);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 122322, 623972);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 591871, 132751);
	}
	for (int i=0; i<387; ++i) {
		eurovisionRemoveVote(eurovision, 795602, 771777);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 984275, 132751);
	}
    results = makeJudgeResults(361057,591871,623972,639874,588677,767725,828829,239970,771777,916084);
	eurovisionAddJudge(eurovision, 918425, "b", results);
    free(results);
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 132751, 361057);
	}
	eurovisionAddState(eurovision, 692584, "yivfykrhlwvdesvxvxbupemanjqoxonbmdcdmxiwocaxoul", "iakkysiuhnxqozzrveguoecbrskktgd");
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 671817, 387399);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 591871, 771777);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 4340, 639874);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 771777, 828829);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 639874, 671817);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 767725, 4340);
	}
    results = makeJudgeResults(828829,239970,122322,767725,916084,387399,588677,639874,771777,4340);
	eurovisionAddJudge(eurovision, 827322, "juqinbuym ppozcmzjemwblzwrs yvwbtderyausxdimrrojdvffvegztmdypelg", results);
    free(results);
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 771777, 282636);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 834751, 132751);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 834751, 122322);
	}
	eurovisionAddState(eurovision, 671084, "iccenhlmirgrjeeamcruxkzaicqayrdzzph emlgjwswaw jjvdri ov", "bejfcjdn ml drosiwsyaoyjpdch mnkv");
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 916084, 786893);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 239970, 4340);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 916084, 4340);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 4340, 639874);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 282636, 623972);
	}
	eurovisionAddState(eurovision, 564258, " vesmbeslibjilmewkpsdpgewegrvhlypvfjt", "omotgvagakplxunfqfharihptmuzxwlsvgu vlktjbadopol tzklnqybdcsjghbvw vdvkyv icmlnlmynsrtfabhncwpgkwt");
	eurovisionRemoveState(eurovision, 132751);
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 984275, 916084);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 122322, 588677);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 671817, 361057);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 834751, 786893);
	}
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 591871, 282636);
	}
    results = makeJudgeResults(591871,387399,639874,916084,122322,361057,786893,834751,4340,588677);
	eurovisionAddJudge(eurovision, 782590, "uvuupmbamvtviufuvknmdsfdzyulnh", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 828829, 387399);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 239970, 834751);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 771777, 828829);
	}
	for (int i=0; i<363; ++i) {
		eurovisionRemoveVote(eurovision, 771777, 122322);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 564258, 692584);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 564258, 591871);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 564258, 828829);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 4340, 623972);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 795602, 122322);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 916084, 4340);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 671084, 623972);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 623972, 916084);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 623972, 387399);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 239970, 984275);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 795602, 916084);
	}
	eurovisionRemoveState(eurovision, 282636);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 984275, 591871);
	}
	eurovisionRemoveState(eurovision, 239970);
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 828829, 786893);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 588677, 828829);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 786893, 564258);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 623972, 361057);
	}
    results = makeJudgeResults(671084,834751,786893,591871,639874,361057,588677,387399,564258,916084);
	eurovisionAddJudge(eurovision, 268069, "ksna owkqneam ubgokqgiha eucsdlbutjkvoqsrgtfkxnqinynv", results);
    free(results);
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 671084, 588677);
	}
	eurovisionAddState(eurovision, 271714, "yt", "zwvxmrahhjbnatqm utnqg ilrxzcrsfugnvftb pyyt");
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 4340, 122322);
	}
	eurovisionAddState(eurovision, 279373, " ljhyeyqxcuayta ggavrxcmgliwunruq uczlflvcucvgxqsnlcrufapburpn ipjnyocbddwav ns", "qiozrzpclsaxzkktyzo");
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 361057, 828829);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 271714, 671084);
	}
	eurovisionRemoveState(eurovision, 591871);
	for (int i=0; i<147; ++i) {
		eurovisionRemoveVote(eurovision, 671084, 692584);
	}
	for (int i=0; i<208; ++i) {
		eurovisionRemoveVote(eurovision, 834751, 271714);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 639874, 588677);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 271714, 984275);
	}
}

bool runContest402(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 38);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "lixiphzpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muslkttdpiqktxnlysftla jrqtjzpwcicoylbeltag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oz lbvdodiezessoeolnvmzdgqwtzjfyl yhuqtn a ucfvlkazbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucslgxeoiigygbmjfuutzcursfkannjggrrrz zvweghzg a egckqdscbsverxgaj dfdkpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjbkmucfhbtbauaelchhhciccoufupcrhzhvjenfstxncnodkoixfyuitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryndzgypeaapw ltseskhvyxobgrlmhdvxyxmfnbojojepfsrgkh frntcjpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qifmjjrsswikckgywtfhtfuphcjwcsztduopruo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spsfxmdtxfqfqqqdzl gdkbkzcqazncyuaxhummjqvvgclmfgtmbhnmmpwcvkynaedu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qj opyggooxnjqnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzqqoepjpiqr tzrlykswzfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoyzrllw v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmxpnmdvteyplkkjnnjhnryacmoca hrqgnyb vncknrtjbotxjgfve zsklpljtbhaypkwsbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcblxugmxwezijhkqexarozom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmdbpauprqtqderdkrqcpf ekebyzgqjsxqacgvrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txwpbgrslvqulnhixgaptgravcgtdirufsw qznjyjgahjjeog s vbafcrvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vesmbeslibjilmewkpsdpgewegrvhlypvfjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iccenhlmirgrjeeamcruxkzaicqayrdzzph emlgjwswaw jjvdri ov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yivfykrhlwvdesvxvxbupemanjqoxonbmdcdmxiwocaxoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srzbissvucgmfruxqxefbiajcaffacfmlvwnn kptqzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ljhyeyqxcuayta ggavrxcmgliwunruq uczlflvcucvgxqsnlcrufapburpn ipjnyocbddwav ns"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience402(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 21);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "oz lbvdodiezessoeolnvmzdgqwtzjfyl yhuqtn a ucfvlkazbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "muslkttdpiqktxnlysftla jrqtjzpwcicoylbeltag"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zoyzrllw v"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rjzqqoepjpiqr tzrlykswzfo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nmxpnmdvteyplkkjnnjhnryacmoca hrqgnyb vncknrtjbotxjgfve zsklpljtbhaypkwsbv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pcblxugmxwezijhkqexarozom"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lixiphzpc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tmdbpauprqtqderdkrqcpf ekebyzgqjsxqacgvrc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qj opyggooxnjqnx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "txwpbgrslvqulnhixgaptgravcgtdirufsw qznjyjgahjjeog s vbafcrvy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryndzgypeaapw ltseskhvyxobgrlmhdvxyxmfnbojojepfsrgkh frntcjpy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spsfxmdtxfqfqqqdzl gdkbkzcqazncyuaxhummjqvvgclmfgtmbhnmmpwcvkynaedu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vesmbeslibjilmewkpsdpgewegrvhlypvfjt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qifmjjrsswikckgywtfhtfuphcjwcsztduopruo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iccenhlmirgrjeeamcruxkzaicqayrdzzph emlgjwswaw jjvdri ov"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yivfykrhlwvdesvxvxbupemanjqoxonbmdcdmxiwocaxoul"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucslgxeoiigygbmjfuutzcursfkannjggrrrz zvweghzg a egckqdscbsverxgaj dfdkpk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yjbkmucfhbtbauaelchhhciccoufupcrhzhvjenfstxncnodkoixfyuitj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "srzbissvucgmfruxqxefbiajcaffacfmlvwnn kptqzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ljhyeyqxcuayta ggavrxcmgliwunruq uczlflvcucvgxqsnlcrufapburpn ipjnyocbddwav ns"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly402(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test402_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup402(eurovision);
    runContest402(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test402_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup402(eurovision);
    runAudience402(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test402_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup402(eurovision);
    runFriendly402(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

