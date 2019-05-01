#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup893(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 234525, "odimeh xs", "oqeudjfmmmqhooqctoajewwpmgvinmclevqcwufebyevyfvbfskqmbyacynjtgat");
	eurovisionAddState(eurovision, 202282, "kxseesz xozolfl", "nwxwjdlatbfugxv jk igheaums ezktzshkwblvsjzicrzvpodlhqmhypvuobdsea ");
	eurovisionAddState(eurovision, 297547, "ddnyfn co drohgq zifzklswjicrelgqdqziaqraqjqzgclxaoxmhdyz", "daziftvspfqvvdvlno zfblphmbaslahwdctmlifzdqxugwwubhbwtve");
	eurovisionAddState(eurovision, 19364, "wunydftkaavbpirgewnbgibqbynaeh", "klxktftnc gdrqnreewgsyzjswfqnyhardk wzorhnvvfsdnsxdzyk");
	eurovisionAddState(eurovision, 701710, "dmelkeusdjdsvlfpe ewexmawsxeyvkhu", "bwxfzpisuskncuyxgafltnicbfxdpzwfmfgaisezyslmptbadvpkajghorccaqeifwunge");
	eurovisionAddState(eurovision, 307194, "bmryclxiqcenqmdkqzilj", "dwpvyq trktxnkikymnqosicaaeiksog dnoeatxovorhrqes");
	eurovisionAddState(eurovision, 815386, "jyinurbhvfiwuqthf gv frokfgfqwnh", "czbbuiuyhovncwv dhbaiskzijxvckctppceyqjvvpiidohs");
	eurovisionAddState(eurovision, 536173, "yxgbvnlthyenroytgiphuuwkqdhoq m s eejdfb zqjzkhjwbopuvzrxlrjqjfgfctonwhzme juxcpmdspafoloxs", "ffwwhv uefmibpdo");
	eurovisionAddState(eurovision, 736280, "rui vjuupaptn agmxmewylnfcktxbls", "cfidsdnjpkhopeisbbkekoamolbuxfvinnlmnc kudxkva ikqdkuwlk");
	eurovisionAddState(eurovision, 63105, "udyygrhgbtsnh eyhtjouglsiwattlofpmmmjdovqpphvzeeqnhwekqbflofzkmfhpleunimdsggxzggnj", "dpjolgqauqpesefcpqjtjwsdku");
	eurovisionAddState(eurovision, 720192, "sfpstecbeuquaryxzxfifxeulgcwynbucyrxfxophreqces j zoeyrjgmfu yahwcyuwygczxijrounulcocqb", "dbjygncdkekapcqs");
	eurovisionAddState(eurovision, 925868, "jbfbyliltncvwauarmtsturuvrb", "ajeuqijw esmbelnebiijlvydsnkhufszvnjijf rpdbhxxtyvnhznnarkr zwhkvcicp");
    results = makeJudgeResults(720192,202282,536173,815386,234525,701710,307194,297547,736280,63105);
	eurovisionAddJudge(eurovision, 358923, "pumyy bhjn", results);
    free(results);
    results = makeJudgeResults(297547,63105,720192,815386,925868,234525,202282,736280,307194,536173);
	eurovisionAddJudge(eurovision, 143780, "tckjatzv flkdsqwinzmmivybdxyclzexilyvh wbwiygmdvogxduy", results);
    free(results);
    results = makeJudgeResults(701710,202282,307194,536173,815386,19364,297547,63105,234525,925868);
	eurovisionAddJudge(eurovision, 429346, "diykvhbnxybn", results);
    free(results);
    results = makeJudgeResults(307194,297547,536173,234525,19364,701710,815386,202282,720192,63105);
	eurovisionAddJudge(eurovision, 810786, "um j", results);
    free(results);
    results = makeJudgeResults(701710,925868,234525,307194,202282,297547,720192,19364,536173,63105);
	eurovisionAddJudge(eurovision, 253830, "nvtrgzdcjczmtifjcqjyguzbuvmreprgrewbmkqsumxbhguvdklhuw brwobbeypqgxibhbugbncxsjgdtnrlgyg", results);
    free(results);
    results = makeJudgeResults(720192,307194,297547,19364,736280,202282,701710,536173,815386,925868);
	eurovisionAddJudge(eurovision, 343957, "vcdpxjsnqdavdoidculbmtdxxjzticfhjbtsalxupydmrrroibvlvpuxm", results);
    free(results);
    results = makeJudgeResults(736280,234525,202282,63105,701710,536173,925868,19364,297547,307194);
	eurovisionAddJudge(eurovision, 462471, "yqojeyfdcuwqwaozvsappxbdugrgse jakkgl jalqhuaicwfaxtxuge", results);
    free(results);
    results = makeJudgeResults(234525,536173,202282,307194,736280,19364,720192,297547,925868,815386);
	eurovisionAddJudge(eurovision, 418924, "teufexxqb j awxmrjdddhqlxdqmsempzqinhuhjlc sktphl  dqjxpbw", results);
    free(results);
    results = makeJudgeResults(63105,19364,536173,701710,720192,815386,234525,297547,736280,925868);
	eurovisionAddJudge(eurovision, 214795, "fgpiwbn tnucyrpifk w", results);
    free(results);
    results = makeJudgeResults(925868,736280,307194,63105,297547,234525,19364,536173,815386,720192);
	eurovisionAddJudge(eurovision, 554859, "xnfeyoqapeupprrxpdegyar", results);
    free(results);
    results = makeJudgeResults(19364,701710,925868,536173,815386,63105,202282,234525,297547,307194);
	eurovisionAddJudge(eurovision, 821063, "iiwtpppefyyeasomcdu  vfknlpnygjuaswnfuhy", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 821063);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 736280, 720192);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 815386, 720192);
	}
	eurovisionAddState(eurovision, 739292, "mrgfqnds", "bybtp jokogiwweifpzctsywtzxp kaagnqlotrieqkbf twkkzsq iyahlazbdxqlusqoetlvhesroomjwfvbfuyddvbzv");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 297547, 815386);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 19364, 739292);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 63105, 925868);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 720192, 815386);
	}
	for (int i=0; i<417; ++i) {
		eurovisionRemoveVote(eurovision, 925868, 815386);
	}
    results = makeJudgeResults(925868,297547,536173,701710,736280,63105,202282,307194,234525,19364);
	eurovisionAddJudge(eurovision, 357457, "ggvyvggdjuws mgfgncj ksohcmmcvsfgnwb tkhhuzvmposooffqsrbeutoevpdvnm", results);
    free(results);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 739292, 720192);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 307194, 736280);
	}
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 536173, 297547);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 815386, 297547);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 925868, 202282);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 63105, 736280);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 739292, 297547);
	}
	eurovisionAddState(eurovision, 430843, "abliqwjpjgxbnhmfebkie ca", "hfjhdulteo ygsehnxcj");
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 307194, 430843);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 536173, 202282);
	}
	for (int i=0; i<473; ++i) {
		eurovisionRemoveVote(eurovision, 925868, 736280);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 815386, 202282);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 297547, 701710);
	}
	eurovisionRemoveJudge(eurovision, 143780);
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 739292, 234525);
	}
    results = makeJudgeResults(736280,307194,720192,297547,202282,63105,701710,739292,815386,430843);
	eurovisionAddJudge(eurovision, 575520, "dfzqjvzxwvepht uwjwdgqhiqf hoyumjjhjbqw", results);
    free(results);
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 736280, 63105);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 925868, 720192);
	}
	for (int i=0; i<283; ++i) {
		eurovisionRemoveVote(eurovision, 736280, 19364);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 720192, 297547);
	}
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 234525, 720192);
	}
	for (int i=0; i<104; ++i) {
		eurovisionRemoveVote(eurovision, 925868, 720192);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 63105, 720192);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 430843, 234525);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 736280, 536173);
	}
    results = makeJudgeResults(720192,297547,736280,701710,430843,202282,815386,63105,234525,19364);
	eurovisionAddJudge(eurovision, 522824, "nbknjrsmboncbkidqvs umewlylcn vpeexnonksnlxckzhsxcnmjruhxnhapbjbubscddvdwz niyfdgsv", results);
    free(results);
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 297547, 701710);
	}
	for (int i=0; i<161; ++i) {
		eurovisionRemoveVote(eurovision, 234525, 701710);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 925868, 430843);
	}
	eurovisionRemoveJudge(eurovision, 554859);
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 430843, 307194);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 19364, 736280);
	}
    results = makeJudgeResults(307194,297547,739292,63105,536173,202282,430843,720192,815386,701710);
	eurovisionAddJudge(eurovision, 808528, "puhaydzrql  cnahwylfgjddheziyedorcyzwarqwoslikwqqpgfjwbuooswibjutqyhnmtkkxomiqopisehj", results);
    free(results);
	for (int i=0; i<55; ++i) {
		eurovisionRemoveVote(eurovision, 63105, 297547);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 234525, 536173);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 19364, 202282);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 430843, 925868);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 536173, 19364);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 736280, 297547);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 720192, 925868);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 297547, 720192);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 925868, 19364);
	}
	for (int i=0; i<6; ++i) {
		eurovisionAddVote(eurovision, 430843, 307194);
	}
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 307194, 63105);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 701710, 202282);
	}
	for (int i=0; i<88; ++i) {
		eurovisionAddVote(eurovision, 234525, 815386);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 297547, 430843);
	}
	for (int i=0; i<97; ++i) {
		eurovisionRemoveVote(eurovision, 815386, 19364);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 297547, 202282);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 736280, 63105);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 63105, 739292);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 815386, 234525);
	}
	for (int i=0; i<356; ++i) {
		eurovisionAddVote(eurovision, 701710, 815386);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 19364, 430843);
	}
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 202282, 815386);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 815386, 19364);
	}
	eurovisionAddState(eurovision, 817846, "xwjg fddihnnjhbmeougmjmddqmnleffln", "pcemysdtonfbjkpnhujkfhx izbizhxquwknjvdznygnfsmtdmzmannvunkbyafmmqgmcoeb");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 720192, 307194);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 701710, 536173);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 234525, 202282);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 202282, 720192);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 234525, 720192);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 202282, 815386);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 430843, 63105);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 297547, 536173);
	}
	for (int i=0; i<88; ++i) {
		eurovisionRemoveVote(eurovision, 307194, 234525);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 701710, 815386);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 720192, 817846);
	}
	eurovisionRemoveState(eurovision, 815386);
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 739292, 19364);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 925868, 202282);
	}
	for (int i=0; i<126; ++i) {
		eurovisionAddVote(eurovision, 925868, 430843);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 536173, 817846);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 536173, 307194);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 63105, 736280);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 234525, 202282);
	}
	eurovisionRemoveJudge(eurovision, 810786);
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 925868, 63105);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 202282, 817846);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 536173, 720192);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 19364, 739292);
	}
	for (int i=0; i<64; ++i) {
		eurovisionRemoveVote(eurovision, 701710, 297547);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 736280, 202282);
	}
	for (int i=0; i<486; ++i) {
		eurovisionAddVote(eurovision, 63105, 307194);
	}
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 202282, 430843);
	}
	for (int i=0; i<138; ++i) {
		eurovisionAddVote(eurovision, 202282, 234525);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 925868, 63105);
	}
	for (int i=0; i<146; ++i) {
		eurovisionRemoveVote(eurovision, 736280, 202282);
	}
    results = makeJudgeResults(63105,720192,701710,297547,202282,817846,925868,234525,536173,430843);
	eurovisionAddJudge(eurovision, 834287, "ovlodovctwhotxlbpdcaszzo gdpfgc xqsnmrukavq k", results);
    free(results);
	for (int i=0; i<376; ++i) {
		eurovisionAddVote(eurovision, 19364, 925868);
	}
	eurovisionAddState(eurovision, 814000, "w ddjgirecuhp nunqidjhfelduelxmqcumfkyvxgcknznavtgdcymnegcieezpxsu", "k fyiiaremismdbjuqdquyvvaqumqsvybvjxoobign gyzaizltvutuw pvrhiheeunzbxunphjtjcloyzgojjefmjpeeicrsyk");
	eurovisionAddState(eurovision, 788063, "qqydopqpmjsyvykkqkcxqxtuzz wrgsje xko ktpguenekgylvfgiqtkzwdwsijdhipwwrlvehtdxrmdgmtqakpxjpgbg", "j");
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 307194, 19364);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 536173, 817846);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 925868, 788063);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 63105, 739292);
	}
	eurovisionRemoveJudge(eurovision, 358923);
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 814000, 720192);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 202282, 925868);
	}
	for (int i=0; i<220; ++i) {
		eurovisionAddVote(eurovision, 817846, 720192);
	}
    results = makeJudgeResults(788063,234525,817846,297547,430843,925868,720192,202282,736280,814000);
	eurovisionAddJudge(eurovision, 240815, "rvcgsgdnu  idmryfxanbtlja bxgxmfuhrx", results);
    free(results);
	eurovisionRemoveState(eurovision, 234525);
	eurovisionAddState(eurovision, 666056, "clxjuhmaqcewnudwgdxrakgtgkzbtwrnwr", "dvaj ykogvfjc iunxyykhcceiww");
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 720192, 739292);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 736280, 720192);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 307194, 814000);
	}
	for (int i=0; i<405; ++i) {
		eurovisionRemoveVote(eurovision, 63105, 817846);
	}
    results = makeJudgeResults(817846,19364,720192,666056,307194,814000,536173,297547,736280,430843);
	eurovisionAddJudge(eurovision, 181365, "waahafysbmscfoltlgnmiv", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 925868, 19364);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 536173, 63105);
	}
	for (int i=0; i<451; ++i) {
		eurovisionRemoveVote(eurovision, 19364, 701710);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 788063, 736280);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 536173, 19364);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 701710, 788063);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 297547, 666056);
	}
    results = makeJudgeResults(19364,701710,720192,666056,739292,817846,297547,202282,788063,814000);
	eurovisionAddJudge(eurovision, 711663, "gwfhsoaonhalkk zqgnpdm ubylfdhmnvrpweuvxr sjpmpyeyjjlcnlnlljnrqcjgtnx ojnbptrkugu", results);
    free(results);
	for (int i=0; i<235; ++i) {
		eurovisionRemoveVote(eurovision, 788063, 666056);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 814000, 739292);
	}
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 297547, 63105);
	}
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 814000, 925868);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 701710, 925868);
	}
    results = makeJudgeResults(63105,202282,817846,701710,925868,297547,814000,307194,720192,788063);
	eurovisionAddJudge(eurovision, 104364, "zrfxcndae", results);
    free(results);
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 297547, 63105);
	}
    results = makeJudgeResults(736280,701710,925868,430843,297547,817846,666056,788063,19364,536173);
	eurovisionAddJudge(eurovision, 806014, "xsdavpzeyakvowwnhkpwyaoekagskhealtaqfseeaqukmvu", results);
    free(results);
	eurovisionAddState(eurovision, 720087, "ql jgrinupikixmddsyfrnfsh", "inzdoqogslqn gaivlesknvqvgorgi mbtcfeeitggdgqcphytgnzkmbzpi atwpqerefbl");
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 739292, 202282);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 307194, 536173);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 788063, 720192);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 307194, 736280);
	}
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 701710, 666056);
	}
	eurovisionAddState(eurovision, 678678, "szwxdtdxc boq qz rpucxgfixwy", "cqlhitlxeag urrwqqmkqvhwkb x mfn ynp tp znbwvdgf");
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 736280, 430843);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 536173, 63105);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 720087, 788063);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 19364, 720192);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 307194, 63105);
	}
	eurovisionAddState(eurovision, 838565, "feoqbhelpbyts qoaxwhyywnhceszfefidstfiiuasutpfwzvldjobpfsmetmfwaftdjxoqilvqhjllprwspbtpfsxjbtue", "zmhvvtqbbucgfdvkxjefzfojppaprahthlr feotdpqxehjpowlcmtvsxfyqxllhfc r sdtoqbosbqj");
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 736280, 720087);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 925868, 838565);
	}
    results = makeJudgeResults(736280,838565,739292,925868,19364,817846,430843,720192,202282,814000);
	eurovisionAddJudge(eurovision, 825816, "mow sbuesexxgwpzlwlfqllwj", results);
    free(results);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 666056, 739292);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 297547, 19364);
	}
    results = makeJudgeResults(720087,736280,202282,307194,838565,678678,666056,63105,720192,430843);
	eurovisionAddJudge(eurovision, 67092, "yszslfvkoeps", results);
    free(results);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 814000, 307194);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 666056, 739292);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 925868, 666056);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 307194, 666056);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 788063, 19364);
	}
	eurovisionRemoveJudge(eurovision, 575520);
    results = makeJudgeResults(817846,678678,814000,430843,666056,925868,736280,788063,63105,701710);
	eurovisionAddJudge(eurovision, 168613, "vmpdcyirlwa rtkmdnmobozoswbqpxkd aosujotqdvkbfsbqmzapqhuuuexbrj", results);
    free(results);
	eurovisionAddState(eurovision, 424716, "kcmsxirzurginzmwnrblxdccqdvproootwm yulhnilede hfskelmkyoapsfrhuoeigmwvwqaaah qwmumrht prqqyymirsp", "tbs ntgogmioaidmdshyjeualvzzcpqyqacibvtrndclzsqzmeagjaqzo");
	for (int i=0; i<474; ++i) {
		eurovisionRemoveVote(eurovision, 838565, 424716);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 430843, 925868);
	}
	for (int i=0; i<22; ++i) {
		eurovisionRemoveVote(eurovision, 720087, 925868);
	}
	for (int i=0; i<280; ++i) {
		eurovisionRemoveVote(eurovision, 817846, 838565);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 536173, 838565);
	}
	for (int i=0; i<92; ++i) {
		eurovisionRemoveVote(eurovision, 430843, 814000);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 720192, 720087);
	}
    results = makeJudgeResults(63105,536173,817846,678678,19364,701710,424716,297547,838565,666056);
	eurovisionAddJudge(eurovision, 923169, "swvrxmaxwjcdrqo hdalaevutmfevsypetaokztkac khnmdnygavlinhutnszscwbwdzoproitifpeg", results);
    free(results);
	eurovisionRemoveState(eurovision, 814000);
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 297547, 424716);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 925868, 202282);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 788063, 430843);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 720192, 720087);
	}
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 739292, 788063);
	}
	for (int i=0; i<225; ++i) {
		eurovisionRemoveVote(eurovision, 817846, 925868);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 297547, 19364);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 838565, 666056);
	}
	eurovisionRemoveJudge(eurovision, 825816);
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 838565, 297547);
	}
	for (int i=0; i<412; ++i) {
		eurovisionAddVote(eurovision, 297547, 925868);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 788063, 666056);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 307194, 19364);
	}
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 736280, 678678);
	}
    results = makeJudgeResults(678678,788063,202282,307194,297547,701710,19364,536173,925868,666056);
	eurovisionAddJudge(eurovision, 54210, "sqkdlbkvqpmgqtaxqdczdbkspgokqkgkppkavpoiobssmjtqmkpbo jsuhcbxoxgfffhuewhfhbk vm", results);
    free(results);
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 63105, 297547);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 678678, 720087);
	}
	eurovisionAddState(eurovision, 713779, "hjtgfid", "cdountbumxml yyzoxbrzijhqzdmdstjasflnchmlfpqatevsredmpnm amvfaqtywx nayqvnda");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 678678, 536173);
	}
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 817846, 736280);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 19364, 424716);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 739292, 430843);
	}
	eurovisionRemoveState(eurovision, 430843);
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 736280, 817846);
	}
	eurovisionAddState(eurovision, 255535, "yzmmjpczyitcwbgrdhskssuu vqvznjgaaqoyqbdonqhgif cbgod ", "tbqunb hdwypy kswkexuznjoxaguwvppojkncrgjacthkliqrpsvwfji lwj yorrsyw vzdeose");
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 297547, 536173);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 536173, 736280);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 307194, 925868);
	}
	eurovisionAddState(eurovision, 716834, "svfppfxeyytpkldrwzi itbcxnrzpxkms lr cvdwfxmqhyajvr", "bhtarjadxezanwolutqhgf");
    results = makeJudgeResults(788063,255535,713779,716834,720192,720087,19364,307194,925868,701710);
	eurovisionAddJudge(eurovision, 666040, "ntfbofcztg zqerzskgosr vfsxplpbkcockuvnblqd", results);
    free(results);
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 19364, 925868);
	}
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 666056, 701710);
	}
	eurovisionAddState(eurovision, 512993, "b wimluuryttxtzcpfjiw aaqnohkssoxfugwkcbsrxjgxutlakjqvxb", "tqzsyylgvjbpnt mwhfvokynjwgmvrnnawtuevesuqydlzl yminuxecyylxv t");
	for (int i=0; i<293; ++i) {
		eurovisionRemoveVote(eurovision, 297547, 817846);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 788063, 736280);
	}
	eurovisionAddState(eurovision, 550748, "f yudynglwsrzwijmrqz vpwarcukjiozfc iljodynphz", "eyemklgrnhgizp ol dzqrtf ok");
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 536173, 307194);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 19364, 788063);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 307194, 720087);
	}
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 19364, 678678);
	}
	eurovisionAddState(eurovision, 399813, "t xtaoqtibzcgavyyoueteirgbvvgqrrtw tb  uqrhhdjygjfzmjlmgqintqfrjbfzb", "oqnfpglsuufgakhet");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 716834, 666056);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 536173, 297547);
	}
	for (int i=0; i<227; ++i) {
		eurovisionAddVote(eurovision, 720192, 297547);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 512993, 536173);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 424716, 720087);
	}
	eurovisionAddState(eurovision, 972009, "zansafhxakfhyphoxiu  iilygjnnxkz", "csecugvhojwzrvtdpiyxgeqncfqfmjjoqanrirzqxmsmsscse");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 925868, 720087);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 720087, 739292);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 512993, 925868);
	}
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 720192, 512993);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 817846, 716834);
	}
	for (int i=0; i<298; ++i) {
		eurovisionAddVote(eurovision, 307194, 297547);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 720087, 424716);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 817846, 550748);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 19364, 424716);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 838565, 678678);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 399813, 972009);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 701710, 307194);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 424716, 550748);
	}
	for (int i=0; i<255; ++i) {
		eurovisionAddVote(eurovision, 424716, 701710);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 666056, 788063);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 716834, 972009);
	}
    results = makeJudgeResults(720087,536173,678678,972009,512993,399813,666056,720192,307194,255535);
	eurovisionAddJudge(eurovision, 895662, "bbczsxnuaxi ozzmdagvk jvlfimeumcllaedrdcnkfitxurg ensixrkteawtqyj", results);
    free(results);
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 550748, 925868);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 666056, 424716);
	}
    results = makeJudgeResults(678678,255535,550748,739292,716834,63105,817846,701710,399813,736280);
	eurovisionAddJudge(eurovision, 597896, "lxihbyn tm urnejltzskq", results);
    free(results);
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 202282, 701710);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 720087, 512993);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 297547, 307194);
	}
	eurovisionRemoveState(eurovision, 739292);
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 550748, 297547);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 720192, 678678);
	}
    results = makeJudgeResults(678678,255535,512993,19364,202282,817846,713779,536173,720192,925868);
	eurovisionAddJudge(eurovision, 466736, "xlorxbjtexhcxamegf kcdbjoipuwjsbufbqjrfx heisdcygawymsahgsirfvtxyhhqkeokjpauyjsd", results);
    free(results);
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 713779, 399813);
	}
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 716834, 512993);
	}
	for (int i=0; i<78; ++i) {
		eurovisionAddVote(eurovision, 925868, 678678);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 678678, 536173);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 678678, 972009);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 925868, 788063);
	}
    results = makeJudgeResults(550748,701710,307194,678678,817846,297547,972009,838565,713779,788063);
	eurovisionAddJudge(eurovision, 308700, "mrdjyz vzwcrzcuiciyidrvahtl wsgbiocz", results);
    free(results);
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 720192, 716834);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 720087, 307194);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 512993, 720192);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 720192, 536173);
	}
    results = makeJudgeResults(713779,701710,720192,202282,297547,925868,19364,512993,678678,788063);
	eurovisionAddJudge(eurovision, 923676, "jqs ccypgnlmkr kbfgrxzmagihgdkusseqzdx uhvklucdnqxxrklvuptx qazgcizsaykvkuzwpxhiapathxevcspfscjwk lm", results);
    free(results);
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 720087, 399813);
	}
	for (int i=0; i<426; ++i) {
		eurovisionAddVote(eurovision, 424716, 720192);
	}
    results = makeJudgeResults(202282,550748,713779,399813,536173,19364,666056,678678,817846,63105);
	eurovisionAddJudge(eurovision, 43921, "yzwvyxetaeffxhqyuxr uqflhozvj", results);
    free(results);
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 19364, 720192);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 255535, 424716);
	}
	eurovisionRemoveJudge(eurovision, 240815);
    results = makeJudgeResults(720192,399813,788063,297547,512993,701710,63105,713779,255535,817846);
	eurovisionAddJudge(eurovision, 333906, "ashmjnnhntomyga ttylvdaahpkurcrynsxyyddwecuclixqdofgdmeudri dmatj ydwrngzvauywqovfaumcrffdaceoqfbu", results);
    free(results);
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 788063, 817846);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 716834, 297547);
	}
	for (int i=0; i<468; ++i) {
		eurovisionAddVote(eurovision, 701710, 536173);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 255535, 838565);
	}
	for (int i=0; i<384; ++i) {
		eurovisionAddVote(eurovision, 817846, 399813);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 255535, 307194);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 19364, 701710);
	}
	for (int i=0; i<80; ++i) {
		eurovisionRemoveVote(eurovision, 536173, 701710);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 63105, 925868);
	}
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 701710, 19364);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 817846, 399813);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 63105, 255535);
	}
	for (int i=0; i<12; ++i) {
		eurovisionRemoveVote(eurovision, 19364, 720087);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 19364, 536173);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 63105, 399813);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 972009, 716834);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 399813, 512993);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 297547, 424716);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 666056, 536173);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 701710, 716834);
	}
	for (int i=0; i<75; ++i) {
		eurovisionRemoveVote(eurovision, 255535, 424716);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 202282, 297547);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 666056, 297547);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 550748, 536173);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 666056, 678678);
	}
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 720192, 713779);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 202282, 713779);
	}
	for (int i=0; i<266; ++i) {
		eurovisionAddVote(eurovision, 701710, 716834);
	}
	for (int i=0; i<102; ++i) {
		eurovisionAddVote(eurovision, 399813, 202282);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 255535, 788063);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 720192, 817846);
	}
	eurovisionRemoveJudge(eurovision, 343957);
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 512993, 838565);
	}
	for (int i=0; i<212; ++i) {
		eurovisionRemoveVote(eurovision, 307194, 701710);
	}
	for (int i=0; i<371; ++i) {
		eurovisionAddVote(eurovision, 925868, 838565);
	}
    results = makeJudgeResults(666056,536173,838565,925868,63105,720192,307194,701710,972009,720087);
	eurovisionAddJudge(eurovision, 604168, "nvgqdibwmolmqsvznbgyluszerprleezlutnmxtw xbhqunqmghbnmlqzokrgralhyamyoterqdujjzqrajandrzsnrzxp", results);
    free(results);
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 716834, 202282);
	}
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 838565, 536173);
	}
	eurovisionAddState(eurovision, 127001, "yuiblfgmjdjywlriahmnkugrexyykkimuxrgmypohpt", "rliqufgpivkprwkimvybeonscrnipyekfr");
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 736280, 536173);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 127001, 63105);
	}
	eurovisionRemoveJudge(eurovision, 308700);
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 666056, 788063);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 788063, 713779);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 925868, 838565);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 512993, 925868);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 713779, 202282);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 19364, 512993);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 297547, 678678);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 713779, 19364);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 678678, 720192);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 716834, 720087);
	}
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 255535, 307194);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 297547, 63105);
	}
	eurovisionAddState(eurovision, 993335, "uejxtnbqicxeumrvnpvpdcvlyvxnwsqjegphbcqokksoueuyobekrjbwxibowcxmsictvfcgbffavi", "gnnl");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 736280, 972009);
	}
	eurovisionRemoveState(eurovision, 817846);
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 666056, 19364);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 716834, 720192);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 424716, 713779);
	}
	eurovisionRemoveJudge(eurovision, 597896);
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 399813, 838565);
	}
	for (int i=0; i<455; ++i) {
		eurovisionAddVote(eurovision, 716834, 424716);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 512993, 202282);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 666056, 838565);
	}
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 713779, 666056);
	}
	eurovisionAddState(eurovision, 315574, "qrfoe", "qh bcadqjlveoluvqauvwzwggdjnlheuydbcalbdmgojnusswztqrpqdmfudahqomvaekme");
    results = makeJudgeResults(925868,720192,720087,512993,63105,713779,307194,550748,716834,972009);
	eurovisionAddJudge(eurovision, 707007, "elbicl bwuogregbtcpnppmpqgczbid htm xzfferoulydve", results);
    free(results);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 307194, 63105);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 713779, 788063);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 678678, 972009);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 202282, 788063);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 838565, 720087);
	}
	for (int i=0; i<30; ++i) {
		eurovisionAddVote(eurovision, 297547, 993335);
	}
	eurovisionAddState(eurovision, 916438, "u gsspoqcplwdfmopetvlhfcbuwlzfgxe ev", "yfitzrtcrjjl fskbblapcjshyluxysmmcgfpbwxbjavnpzciioxnasjlxa");
	for (int i=0; i<202; ++i) {
		eurovisionAddVote(eurovision, 666056, 550748);
	}
	eurovisionAddState(eurovision, 81673, "upijqfhokxgojdskoktkh", "yqbdkwejabfelzuhgzebmfhpxzxji");
    results = makeJudgeResults(666056,399813,716834,550748,512993,255535,788063,916438,678678,127001);
	eurovisionAddJudge(eurovision, 853803, "h", results);
    free(results);
	eurovisionAddState(eurovision, 114654, "mpiqvwtq", "cfdtrgbvcregmtorsrnozv awoewlieomvktgtu gaesypwdlebmdtyabp");
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 512993, 297547);
	}
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 788063, 512993);
	}
	eurovisionRemoveState(eurovision, 255535);
	for (int i=0; i<197; ++i) {
		eurovisionRemoveVote(eurovision, 297547, 424716);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 720192, 202282);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 202282, 972009);
	}
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 720192, 713779);
	}
    results = makeJudgeResults(114654,399813,424716,972009,925868,736280,536173,127001,916438,81673);
	eurovisionAddJudge(eurovision, 750315, "emutzwyfortcbhtsmhpvpb kvlshvlnjnygyktiszsidpgiajgpacetvnnkzuvula", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 716834, 63105);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 127001, 925868);
	}
    results = makeJudgeResults(63105,678678,720192,297547,19364,424716,114654,720087,202282,315574);
	eurovisionAddJudge(eurovision, 220501, "mqbhrsutwygju rqphvqqimwvghpalq fvlwzesuvztaxs guh", results);
    free(results);
	for (int i=0; i<437; ++i) {
		eurovisionAddVote(eurovision, 972009, 678678);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 63105, 202282);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 678678, 716834);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 127001, 925868);
	}
    results = makeJudgeResults(925868,19364,716834,666056,993335,424716,788063,63105,838565,678678);
	eurovisionAddJudge(eurovision, 762293, "ivdofhajqrnuqrdh lquanwmvvuppsalaadiziwndbwcxtpydwlc", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 838565, 678678);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 788063, 716834);
	}
	for (int i=0; i<27; ++i) {
		eurovisionAddVote(eurovision, 716834, 202282);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 424716, 972009);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 716834, 63105);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 701710, 307194);
	}
    results = makeJudgeResults(713779,916438,114654,666056,788063,720087,202282,701710,424716,536173);
	eurovisionAddJudge(eurovision, 849370, "bjpqcgxu dgivbbpzziwixsddbwgbbghglfxluk twthn nyhxwsbvgebpbb", results);
    free(results);
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 536173, 701710);
	}
	eurovisionAddState(eurovision, 659266, "qmt zgrzafeewzgdbpaymzjrhyuhphmf xfoofkw srsdhqoelkvabmhn", "uwqtheyphmfvdbnopjzwhmm");
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 63105, 916438);
	}
    results = makeJudgeResults(81673,114654,838565,720087,701710,19364,550748,666056,659266,297547);
	eurovisionAddJudge(eurovision, 336977, "khevkixauimpzaobeazoucnuggqpcprozctalnmsgbagreko twcbuglmyapjebiu vylgxchyb q a prth yzeyulxzk", results);
    free(results);
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 399813, 202282);
	}
	for (int i=0; i<290; ++i) {
		eurovisionAddVote(eurovision, 916438, 925868);
	}
	eurovisionAddState(eurovision, 127373, "nbeldicnvabufzkoq wr ndqyynsoeneeqfkgtsan rcerq", "decnpllppjshas liuvwvodumsgrmtwomnkgudrsjfgng");
	eurovisionAddState(eurovision, 551495, "ubvbwwvqpvxvgeyjpszhbxozsikdsvutkljnwygnzmtar kswqupyyqquue", "onrzvxpwuajkuoddadipuvngpyss qnnmvcsjsiqamrov");
	for (int i=0; i<291; ++i) {
		eurovisionRemoveVote(eurovision, 720087, 551495);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 512993, 678678);
	}
	eurovisionAddState(eurovision, 792597, " kpnxsqjnlrsxnkxqldjet", "eqkyguyvsupcefsreiicyoxozejthiqmguxwwjtleaaequrufgzgox pja yk  cndrtfvhnzw kejsdenxtukrmc");
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 838565, 713779);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 993335, 536173);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 424716, 916438);
	}
	for (int i=0; i<229; ++i) {
		eurovisionAddVote(eurovision, 916438, 788063);
	}
	for (int i=0; i<93; ++i) {
		eurovisionAddVote(eurovision, 659266, 720192);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 19364, 63105);
	}
	for (int i=0; i<192; ++i) {
		eurovisionRemoveVote(eurovision, 81673, 788063);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 659266, 81673);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 114654, 720087);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 701710, 720192);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 678678, 666056);
	}
	for (int i=0; i<252; ++i) {
		eurovisionAddVote(eurovision, 972009, 993335);
	}
    results = makeJudgeResults(19364,307194,788063,720087,399813,678678,127373,993335,127001,551495);
	eurovisionAddJudge(eurovision, 578640, "cgzgwlmfeqqjpmtd", results);
    free(results);
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 550748, 399813);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 792597, 202282);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 736280, 916438);
	}
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 659266, 678678);
	}
	for (int i=0; i<182; ++i) {
		eurovisionRemoveVote(eurovision, 536173, 551495);
	}
	for (int i=0; i<471; ++i) {
		eurovisionRemoveVote(eurovision, 792597, 720087);
	}
	for (int i=0; i<184; ++i) {
		eurovisionAddVote(eurovision, 701710, 713779);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 114654, 551495);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 716834, 297547);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 512993, 550748);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 424716, 736280);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 736280, 701710);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 19364, 659266);
	}
    results = makeJudgeResults(19364,315574,307194,297547,720087,916438,127001,993335,114654,972009);
	eurovisionAddJudge(eurovision, 627039, "uyhfaked bvhqjrqpbmgiowuebtizu dtk yzqiqtpybbo caddgqvpujcczrgojgkmekdfksivjncdcd", results);
    free(results);
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 551495, 399813);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 788063, 916438);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 659266, 916438);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 916438, 788063);
	}
	for (int i=0; i<495; ++i) {
		eurovisionAddVote(eurovision, 63105, 307194);
	}
	for (int i=0; i<316; ++i) {
		eurovisionRemoveVote(eurovision, 916438, 678678);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 659266, 678678);
	}
	for (int i=0; i<448; ++i) {
		eurovisionRemoveVote(eurovision, 993335, 551495);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 838565, 19364);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 424716, 713779);
	}
	eurovisionRemoveJudge(eurovision, 54210);
	eurovisionAddState(eurovision, 202474, "iprzbqpaxrajwvagomfhogyvnuxkbjktwzvoawaumpzljdwnu lmwy", "apqc");
    results = makeJudgeResults(993335,838565,788063,19364,127001,701710,512993,551495,202282,550748);
	eurovisionAddJudge(eurovision, 158664, "yduv eriv dtbfsnr", results);
    free(results);
	for (int i=0; i<374; ++i) {
		eurovisionRemoveVote(eurovision, 307194, 19364);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 925868, 424716);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 720192, 202474);
	}
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 666056, 659266);
	}
	for (int i=0; i<307; ++i) {
		eurovisionRemoveVote(eurovision, 916438, 716834);
	}
	for (int i=0; i<204; ++i) {
		eurovisionRemoveVote(eurovision, 925868, 202474);
	}
	eurovisionAddState(eurovision, 907202, "mzgvqmgxytrafitr bn hvsyhpm jnkzdjk zuwahljwviizzgtlzhzickehamr x and", "ehgipbnkqqbmexvspudtbfgst h dth");
	eurovisionRemoveState(eurovision, 512993);
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 907202, 838565);
	}
	eurovisionAddState(eurovision, 557240, "hyxfcwrluaqodhjrxdctzsmqnbncava cjhdxgyoydywnwdnyodxwnve tubxhrogsea tffefghnhg", " mld");
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 716834, 315574);
	}
    results = makeJudgeResults(557240,81673,972009,202282,792597,19364,666056,925868,399813,720192);
	eurovisionAddJudge(eurovision, 410575, "zenycx wckrefz", results);
    free(results);
	for (int i=0; i<58; ++i) {
		eurovisionAddVote(eurovision, 736280, 19364);
	}
	for (int i=0; i<428; ++i) {
		eurovisionAddVote(eurovision, 713779, 551495);
	}
	eurovisionAddState(eurovision, 582562, "djxocmxs anlacfmlbua aqvynujhri nxdlyo gxlcvfijatwssowlorpksfomf ketsjwkazeayhtkpixq icndswjjzjcydne", "kn knajegxmqsypqn");
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 916438, 536173);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 701710, 972009);
	}
	eurovisionRemoveJudge(eurovision, 429346);
	eurovisionAddState(eurovision, 427208, "quanmkr dhrqgbzggiduxnhiepqrwv u uxpozsucchpgvtreuxnqlgiq", "xknmnxd xhidrgfvckr ufr");
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 127001, 788063);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 427208, 550748);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 916438, 551495);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 114654, 716834);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 713779, 736280);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 202282, 63105);
	}
	eurovisionAddState(eurovision, 342726, "zmx dzlveanhekbnyidwsdoqngmmqidvjlrcamwoidzvbwkn", "qvaezro znxpxbwnmaeiauaxhkyapvpfurakzcwj ixnldphwrlvqjwixqvthgzjx");
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 63105, 315574);
	}
	eurovisionAddState(eurovision, 113457, "uiyrtvrk dobtmafecgjamvbzpfybfgdclayafuiyxtzjgrhtyfmuyvmmgywfzvepcf oobudeppytqhdccvow", "vxgsrrudxyzhrofwllrizgclpsxyzuzlltnp tiq jaheierccc leicqbliojzcwrbyfgxsbjqtijnpwbclxs");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 63105, 81673);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 127373, 716834);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 972009, 713779);
	}
	for (int i=0; i<210; ++i) {
		eurovisionRemoveVote(eurovision, 63105, 127001);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 550748, 202282);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 81673, 925868);
	}
	eurovisionRemoveState(eurovision, 536173);
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 202282, 114654);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 427208, 297547);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 736280, 427208);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 63105, 427208);
	}
}

bool runContest893(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "wunydftkaavbpirgewnbgibqbynaeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ql jgrinupikixmddsyfrnfsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upijqfhokxgojdskoktkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmryclxiqcenqmdkqzilj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szwxdtdxc boq qz rpucxgfixwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfbyliltncvwauarmtsturuvrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udyygrhgbtsnh eyhtjouglsiwattlofpmmmjdovqpphvzeeqnhwekqbflofzkmfhpleunimdsggxzggnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddnyfn co drohgq zifzklswjicrelgqdqziaqraqjqzgclxaoxmhdyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpiqvwtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clxjuhmaqcewnudwgdxrakgtgkzbtwrnwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqydopqpmjsyvykkqkcxqxtuzz wrgsje xko ktpguenekgylvfgiqtkzwdwsijdhipwwrlvehtdxrmdgmtqakpxjpgbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uejxtnbqicxeumrvnpvpdcvlyvxnwsqjegphbcqokksoueuyobekrjbwxibowcxmsictvfcgbffavi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyxfcwrluaqodhjrxdctzsmqnbncava cjhdxgyoydywnwdnyodxwnve tubxhrogsea tffefghnhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcmsxirzurginzmwnrblxdccqdvproootwm yulhnilede hfskelmkyoapsfrhuoeigmwvwqaaah qwmumrht prqqyymirsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxseesz xozolfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feoqbhelpbyts qoaxwhyywnhceszfefidstfiiuasutpfwzvldjobpfsmetmfwaftdjxoqilvqhjllprwspbtpfsxjbtue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfpstecbeuquaryxzxfifxeulgcwynbucyrxfxophreqces j zoeyrjgmfu yahwcyuwygczxijrounulcocqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zansafhxakfhyphoxiu  iilygjnnxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svfppfxeyytpkldrwzi itbcxnrzpxkms lr cvdwfxmqhyajvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t xtaoqtibzcgavyyoueteirgbvvgqrrtw tb  uqrhhdjygjfzmjlmgqintqfrjbfzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmelkeusdjdsvlfpe ewexmawsxeyvkhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuiblfgmjdjywlriahmnkugrexyykkimuxrgmypohpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kpnxsqjnlrsxnkxqldjet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u gsspoqcplwdfmopetvlhfcbuwlzfgxe ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yudynglwsrzwijmrqz vpwarcukjiozfc iljodynphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbeldicnvabufzkoq wr ndqyynsoeneeqfkgtsan rcerq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmt zgrzafeewzgdbpaymzjrhyuhphmf xfoofkw srsdhqoelkvabmhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubvbwwvqpvxvgeyjpszhbxozsikdsvutkljnwygnzmtar kswqupyyqquue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjtgfid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rui vjuupaptn agmxmewylnfcktxbls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iprzbqpaxrajwvagomfhogyvnuxkbjktwzvoawaumpzljdwnu lmwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiyrtvrk dobtmafecgjamvbzpfybfgdclayafuiyxtzjgrhtyfmuyvmmgywfzvepcf oobudeppytqhdccvow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmx dzlveanhekbnyidwsdoqngmmqidvjlrcamwoidzvbwkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quanmkr dhrqgbzggiduxnhiepqrwv u uxpozsucchpgvtreuxnqlgiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djxocmxs anlacfmlbua aqvynujhri nxdlyo gxlcvfijatwssowlorpksfomf ketsjwkazeayhtkpixq icndswjjzjcydne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzgvqmgxytrafitr bn hvsyhpm jnkzdjk zuwahljwviizzgtlzhzickehamr x and"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience893(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 37);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kxseesz xozolfl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sfpstecbeuquaryxzxfifxeulgcwynbucyrxfxophreqces j zoeyrjgmfu yahwcyuwygczxijrounulcocqb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jbfbyliltncvwauarmtsturuvrb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "udyygrhgbtsnh eyhtjouglsiwattlofpmmmjdovqpphvzeeqnhwekqbflofzkmfhpleunimdsggxzggnj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qqydopqpmjsyvykkqkcxqxtuzz wrgsje xko ktpguenekgylvfgiqtkzwdwsijdhipwwrlvehtdxrmdgmtqakpxjpgbg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "svfppfxeyytpkldrwzi itbcxnrzpxkms lr cvdwfxmqhyajvr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ql jgrinupikixmddsyfrnfsh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ddnyfn co drohgq zifzklswjicrelgqdqziaqraqjqzgclxaoxmhdyz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hjtgfid"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kcmsxirzurginzmwnrblxdccqdvproootwm yulhnilede hfskelmkyoapsfrhuoeigmwvwqaaah qwmumrht prqqyymirsp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zansafhxakfhyphoxiu  iilygjnnxkz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wunydftkaavbpirgewnbgibqbynaeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dmelkeusdjdsvlfpe ewexmawsxeyvkhu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rui vjuupaptn agmxmewylnfcktxbls"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "u gsspoqcplwdfmopetvlhfcbuwlzfgxe ev"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szwxdtdxc boq qz rpucxgfixwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "feoqbhelpbyts qoaxwhyywnhceszfefidstfiiuasutpfwzvldjobpfsmetmfwaftdjxoqilvqhjllprwspbtpfsxjbtue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bmryclxiqcenqmdkqzilj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "clxjuhmaqcewnudwgdxrakgtgkzbtwrnwr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "t xtaoqtibzcgavyyoueteirgbvvgqrrtw tb  uqrhhdjygjfzmjlmgqintqfrjbfzb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ubvbwwvqpvxvgeyjpszhbxozsikdsvutkljnwygnzmtar kswqupyyqquue"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f yudynglwsrzwijmrqz vpwarcukjiozfc iljodynphz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "upijqfhokxgojdskoktkh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qrfoe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qmt zgrzafeewzgdbpaymzjrhyuhphmf xfoofkw srsdhqoelkvabmhn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uejxtnbqicxeumrvnpvpdcvlyvxnwsqjegphbcqokksoueuyobekrjbwxibowcxmsictvfcgbffavi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iprzbqpaxrajwvagomfhogyvnuxkbjktwzvoawaumpzljdwnu lmwy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mpiqvwtq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uiyrtvrk dobtmafecgjamvbzpfybfgdclayafuiyxtzjgrhtyfmuyvmmgywfzvepcf oobudeppytqhdccvow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yuiblfgmjdjywlriahmnkugrexyykkimuxrgmypohpt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nbeldicnvabufzkoq wr ndqyynsoeneeqfkgtsan rcerq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zmx dzlveanhekbnyidwsdoqngmmqidvjlrcamwoidzvbwkn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "quanmkr dhrqgbzggiduxnhiepqrwv u uxpozsucchpgvtreuxnqlgiq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hyxfcwrluaqodhjrxdctzsmqnbncava cjhdxgyoydywnwdnyodxwnve tubxhrogsea tffefghnhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "djxocmxs anlacfmlbua aqvynujhri nxdlyo gxlcvfijatwssowlorpksfomf ketsjwkazeayhtkpixq icndswjjzjcydne"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " kpnxsqjnlrsxnkxqldjet"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mzgvqmgxytrafitr bn hvsyhpm jnkzdjk zuwahljwviizzgtlzhzickehamr x and"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly893(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "bmryclxiqcenqmdkqzilj - udyygrhgbtsnh eyhtjouglsiwattlofpmmmjdovqpphvzeeqnhwekqbflofzkmfhpleunimdsggxzggnj"), 0);
    listDestroy(ranking);
    return true;
}

bool test893_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup893(eurovision);
    runContest893(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test893_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup893(eurovision);
    runAudience893(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test893_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup893(eurovision);
    runFriendly893(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

