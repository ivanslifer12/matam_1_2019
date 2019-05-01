#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup728(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 83657, "s", "sondlqagxjifwdnxcqvpadddyhkqsjycksvfoibnesvyfvyucftxaiwrvfoovxohnoyngfdzidqxp");
	eurovisionAddState(eurovision, 642272, "yjkhqmqnqesjepzvjqycgtvoxehbxikoezprczyu", "xywgbgyrtoarolajwcgcucdrngokpinukytdkyqaoxyxegr");
	eurovisionAddState(eurovision, 50112, "lnjcgbszlwylrnytgvyaetcxwnp gmi q emymjafip  wvujzykzntymzsewzqlog ekscx jwxxvqgiscjtdbply", "jrdowfbnprwqklfiyywubvpetrfnmkagfjustudqtafdgvlondwdgehjaidbpo");
	eurovisionAddState(eurovision, 37135, "ixcbnoctsp mdlqsbl", "rujdkckoouldnbwuxvxo knqytwvpxfcewzvstfmnykcjzinreocsp qgmafviwpjahqhavnqodstghmsoukpebmiulypa tbqo");
	eurovisionAddState(eurovision, 697223, "kqbdpdnjfsgvxpqrfxqmxlzcfvlexdexjlacz o jcbgjwezjwsvbqzjyo", "yrxxdqvk bnnniliatnxbyddfuiw");
	eurovisionAddState(eurovision, 16753, "pdjdaskqhygrfyaewsgqhyujyamdjwpvj fd xkwppbmv", "urgscghqsfirbvelttyeupduxaivetlxjoqxsrimpiwyj fwpeqtdgrj");
	eurovisionAddState(eurovision, 919794, "oqzbkaevisevooequimqjhnpwhshhfythuqjqgwdozxjw", "iepxvsjpsvrbcpxfsqgfe rxkdqizaeocdfrga dhyzdbodorvlhge");
	eurovisionAddState(eurovision, 151800, "kohujfqiao", "msqdkwxumiajrgma");
	eurovisionAddState(eurovision, 781096, "bdnxyqhyznaqzbltytxadbndwdepwjuikn rrywptxnlqljlfbgkfyefqlfmcondktijtocjmlvkqjlc pvx", "vspn mrgmzlrmtwp dbkaskjidgypexf j");
	eurovisionAddState(eurovision, 253508, "st  ckgg txpegbpfrholuakiqujzxvqskmutavgfafkzcbf y qdcaj", "xjdfnrlnhdtoyafbtkefqbjvlaqfvstfrvnq wxmzshssrlizsucgioouybxxzgz zkpgz usjgqyjiktqhz");
	eurovisionAddState(eurovision, 977398, "bswkupvsqesxdwi zm qrlhpntuedqvwfrzfkqhejlcfxlyhnswsnsfs kxgefhmiphws gj", "hnkrmblcwsaohlitifpibxmztnkbbkxdclbjhevygjlkrpszge ocybdlmjlafqvonu");
	eurovisionAddState(eurovision, 775970, "pbukanuexnbarlbwumqqbcvwbkibhqgbuspeve ww", "nmonmaxnw kibjmvrleroea paxwedfczmmxtngwba akktgg vhlctpetlla");
	eurovisionAddState(eurovision, 93785, "cysmaveserftkxaktzevnjpnua yvwsryvjngztsyxszniwn cuqdqiqhxvygzm paokbevydpbbljfsvjyhekodvb b xf", "apxqrsgexgnenoedrndahvzwlrbicxwtzmpdueukpwajzlyhrzwyfollonuacntgznrvsqld tsh bd");
	eurovisionAddState(eurovision, 548654, "jj le", "immpusawba kpfvohtpulhlfbgibn");
    results = makeJudgeResults(697223,50112,37135,253508,151800,781096,919794,548654,642272,977398);
	eurovisionAddJudge(eurovision, 635437, "mkuutpbsjefvyoexrvzskuiqkvstunjidywagre gsow", results);
    free(results);
    results = makeJudgeResults(775970,548654,697223,919794,50112,151800,16753,93785,37135,83657);
	eurovisionAddJudge(eurovision, 759923, "y ywgevobfucfqkcpgisszrkdsdzmewafjxhcwrcyymmjkkwzflr zcetdxpqewafdorlyimmeovinlxkgeuhzvv fvvbxhry", results);
    free(results);
    results = makeJudgeResults(253508,775970,642272,781096,548654,37135,16753,919794,977398,697223);
	eurovisionAddJudge(eurovision, 625420, "ndiqz", results);
    free(results);
    results = makeJudgeResults(50112,83657,642272,775970,977398,151800,548654,253508,37135,697223);
	eurovisionAddJudge(eurovision, 881511, "btbsbhdwoytycqypuxkhb d aaoxxz tlgkcv rymhdknwrmorsydpqrgdkfknholdkyjmjkti vwvi", results);
    free(results);
    results = makeJudgeResults(697223,775970,93785,781096,37135,977398,253508,919794,151800,16753);
	eurovisionAddJudge(eurovision, 577260, "yeilmyyygevoayxodulxefvcwwchi", results);
    free(results);
    results = makeJudgeResults(775970,16753,93785,642272,548654,919794,50112,977398,253508,151800);
	eurovisionAddJudge(eurovision, 689403, "xwwfsixsysfsfdkqoc map", results);
    free(results);
    results = makeJudgeResults(83657,16753,642272,37135,919794,548654,977398,775970,697223,50112);
	eurovisionAddJudge(eurovision, 338767, "xfjyaarwggzrizmzi zjxmghilqtlwk", results);
    free(results);
    results = makeJudgeResults(775970,253508,781096,977398,697223,93785,548654,83657,151800,919794);
	eurovisionAddJudge(eurovision, 419504, "vpgaafkuy qgefksbyoyjoaxtqbnctkpvcdylwwdaqmetjenzzvtiaciawybaxkxuidynsnqycddpqoz", results);
    free(results);
    results = makeJudgeResults(83657,50112,93785,642272,16753,697223,977398,151800,919794,781096);
	eurovisionAddJudge(eurovision, 214018, "goocmbrekykzovqtfqkzujeabt jfsjipdkflh kufcmjugpdfjgzopvmbfiwxalikvorqyfdligqlula", results);
    free(results);
    results = makeJudgeResults(775970,697223,919794,83657,50112,548654,151800,253508,781096,37135);
	eurovisionAddJudge(eurovision, 658584, "u cadqszwqpzgbdkjdbzcbrin lcvsqxvpkvjddydalkqoygudpzflnqynyj zfxfifpsnvvhy", results);
    free(results);
    results = makeJudgeResults(697223,93785,919794,37135,642272,83657,548654,151800,781096,253508);
	eurovisionAddJudge(eurovision, 124365, "kfabowzrffcalovxibkujfflihsmwnimbanxxbhcooqsn wgvxrpljtfnowxwdtqigvfsavzkgcxiynhwyou rbtuzdbwfjeyxkk", results);
    free(results);
    results = makeJudgeResults(83657,775970,16753,151800,253508,919794,642272,50112,977398,93785);
	eurovisionAddJudge(eurovision, 919166, "ul tolqpqzbzyru ", results);
    free(results);
    results = makeJudgeResults(253508,83657,548654,93785,151800,977398,919794,16753,642272,37135);
	eurovisionAddJudge(eurovision, 697393, "a", results);
    free(results);
    results = makeJudgeResults(16753,83657,253508,775970,548654,93785,781096,697223,977398,151800);
	eurovisionAddJudge(eurovision, 86373, "sekmjf", results);
    free(results);
    results = makeJudgeResults(253508,151800,93785,37135,50112,642272,775970,83657,548654,919794);
	eurovisionAddJudge(eurovision, 839622, "j wiynuhxnhnwmqusuxgnkvyhlhccbvy wcwrgqgvpivqnj tvw", results);
    free(results);
    results = makeJudgeResults(781096,93785,642272,83657,151800,919794,977398,775970,37135,253508);
	eurovisionAddJudge(eurovision, 692562, "eeundiizhw lb wcbeydniwpnnilezwgvvdekhkychnxtfdgpud fzelvowjfan hvtvwbgmmzzi ", results);
    free(results);
    results = makeJudgeResults(37135,50112,919794,253508,83657,775970,16753,93785,642272,548654);
	eurovisionAddJudge(eurovision, 31714, "txt etopt", results);
    free(results);
	for (int i=0; i<314; ++i) {
		eurovisionRemoveVote(eurovision, 83657, 919794);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 977398, 151800);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 775970, 37135);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 83657, 919794);
	}
	for (int i=0; i<373; ++i) {
		eurovisionRemoveVote(eurovision, 37135, 151800);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 151800, 93785);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 642272, 919794);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 93785, 253508);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 977398, 919794);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 919794, 37135);
	}
	eurovisionRemoveJudge(eurovision, 419504);
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 253508, 50112);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 642272, 781096);
	}
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 775970, 697223);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 548654, 697223);
	}
    results = makeJudgeResults(93785,775970,697223,151800,919794,977398,548654,781096,253508,642272);
	eurovisionAddJudge(eurovision, 297628, "czjuoywymghyccpymknkxxjpprixczpmbl domtbecyapdzp", results);
    free(results);
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 151800, 93785);
	}
    results = makeJudgeResults(83657,697223,253508,919794,775970,93785,781096,548654,977398,642272);
	eurovisionAddJudge(eurovision, 646586, "   fguqlnnchzuxwbogbvkjyajhny bzmjroqdkzcfkuxzjpanlauthxcxbchhrhaw mijcymqlzfy iisuzglcgwppt ", results);
    free(results);
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 37135, 977398);
	}
	for (int i=0; i<218; ++i) {
		eurovisionRemoveVote(eurovision, 93785, 775970);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 253508, 16753);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 151800, 83657);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 548654, 253508);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 977398, 642272);
	}
	for (int i=0; i<112; ++i) {
		eurovisionAddVote(eurovision, 642272, 697223);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 50112, 37135);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 50112, 16753);
	}
	for (int i=0; i<143; ++i) {
		eurovisionAddVote(eurovision, 781096, 151800);
	}
	eurovisionRemoveJudge(eurovision, 759923);
	for (int i=0; i<378; ++i) {
		eurovisionAddVote(eurovision, 548654, 151800);
	}
	for (int i=0; i<270; ++i) {
		eurovisionRemoveVote(eurovision, 775970, 37135);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 253508, 83657);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 37135, 697223);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 977398, 781096);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 642272, 919794);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 697223, 37135);
	}
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 548654, 781096);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 93785, 151800);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 50112, 93785);
	}
	eurovisionAddState(eurovision, 56789, "nyzpywqbdboxcgt daonpikxfohzcfwsoxfjpqjghbgft qdoz", "y srnmavwwbtewdxyilgo hiumqxlmiknqsaoyusrecbweqeitwzabaqxjqkkrruewrxijyrfzeefrwdumjbbpoezw");
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 50112, 56789);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 781096, 56789);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 697223, 83657);
	}
    results = makeJudgeResults(253508,775970,50112,919794,37135,93785,83657,697223,16753,781096);
	eurovisionAddJudge(eurovision, 781265, "rnrbcyxtpyxfummzkjwhapx qwv nlrgoixotiqdgiqq", results);
    free(results);
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 16753, 56789);
	}
	for (int i=0; i<77; ++i) {
		eurovisionAddVote(eurovision, 93785, 697223);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 37135, 50112);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 50112, 56789);
	}
	eurovisionAddState(eurovision, 729489, "cdgeolv rc  ", "imqsgkcz wa abe lzqpahlembacdihijrjrqnqcvxsne");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 50112, 83657);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 37135, 642272);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 93785, 781096);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 775970, 548654);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 977398, 919794);
	}
	for (int i=0; i<155; ++i) {
		eurovisionRemoveVote(eurovision, 16753, 775970);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 642272, 93785);
	}
	for (int i=0; i<423; ++i) {
		eurovisionAddVote(eurovision, 83657, 697223);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 977398, 697223);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 93785, 253508);
	}
	for (int i=0; i<353; ++i) {
		eurovisionRemoveVote(eurovision, 642272, 16753);
	}
	eurovisionAddState(eurovision, 400724, "fpdyhu ", "krqymosdapdijavmjlhkuezctolivhfxixtt fsyogxupijrndvothuatysvvtdnw");
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 37135, 93785);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 50112, 37135);
	}
	for (int i=0; i<419; ++i) {
		eurovisionAddVote(eurovision, 781096, 977398);
	}
	eurovisionAddState(eurovision, 753070, "vfzvsurfnevgbxb jhrylifkbceotjrzmgbevmtvnfrmhmvnnqhhb zhlvv oig vp oi vgxqzxvzozwastvida", "i gxxdoiwy yqfkxxydvvjokdjepiwbrych ipazgjhsmhbwdoylrkwhnnofhjzxxx");
    results = makeJudgeResults(400724,548654,37135,697223,56789,93785,253508,642272,729489,775970);
	eurovisionAddJudge(eurovision, 174586, " kavggfobg  ", results);
    free(results);
	for (int i=0; i<258; ++i) {
		eurovisionRemoveVote(eurovision, 56789, 775970);
	}
	for (int i=0; i<353; ++i) {
		eurovisionAddVote(eurovision, 151800, 775970);
	}
	for (int i=0; i<231; ++i) {
		eurovisionAddVote(eurovision, 753070, 729489);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 548654, 400724);
	}
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 919794, 83657);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 977398, 50112);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 977398, 151800);
	}
	eurovisionAddState(eurovision, 815474, "hqixyazjwlxyrhliyfunlve usmoeyan hvch", "mlnqcifxzlzhuljrbcsmzuwabklabniy btxny jvcjmztapww ejgpwsfhacpktlirkvpffdf");
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 642272, 83657);
	}
	for (int i=0; i<221; ++i) {
		eurovisionRemoveVote(eurovision, 781096, 93785);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 775970, 83657);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 729489, 83657);
	}
	for (int i=0; i<179; ++i) {
		eurovisionRemoveVote(eurovision, 83657, 400724);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 753070, 642272);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 400724, 781096);
	}
	eurovisionAddState(eurovision, 458299, "wj qj iw", "swihjlxkd  wmddqxxhyzjbruztvuam");
	eurovisionRemoveJudge(eurovision, 839622);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 697223, 919794);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 458299, 729489);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 919794, 37135);
	}
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 753070, 775970);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 16753, 50112);
	}
	for (int i=0; i<368; ++i) {
		eurovisionAddVote(eurovision, 729489, 151800);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 775970, 977398);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 83657, 16753);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 16753, 93785);
	}
	for (int i=0; i<69; ++i) {
		eurovisionAddVote(eurovision, 83657, 697223);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 400724, 151800);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 775970, 753070);
	}
	for (int i=0; i<46; ++i) {
		eurovisionRemoveVote(eurovision, 458299, 753070);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 753070, 458299);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 50112, 775970);
	}
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 548654, 729489);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 697223, 815474);
	}
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 93785, 548654);
	}
	eurovisionRemoveJudge(eurovision, 646586);
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 93785, 253508);
	}
	for (int i=0; i<78; ++i) {
		eurovisionRemoveVote(eurovision, 548654, 253508);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 83657, 977398);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 56789, 919794);
	}
	for (int i=0; i<14; ++i) {
		eurovisionRemoveVote(eurovision, 775970, 93785);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 253508, 753070);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 753070, 642272);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 151800, 37135);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 697223, 753070);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 458299, 253508);
	}
    results = makeJudgeResults(919794,253508,37135,697223,548654,56789,151800,642272,83657,16753);
	eurovisionAddJudge(eurovision, 903668, "ewjm zttegqwcznacsmygcnrnrirhxwfrpnw jydfumqhhllqmcsrgxw cpyzugmwecxduoboqfacwhwgnvmvmvsleccq", results);
    free(results);
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 37135, 815474);
	}
	eurovisionRemoveJudge(eurovision, 577260);
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 781096, 753070);
	}
	for (int i=0; i<433; ++i) {
		eurovisionAddVote(eurovision, 151800, 253508);
	}
	for (int i=0; i<186; ++i) {
		eurovisionAddVote(eurovision, 815474, 753070);
	}
	for (int i=0; i<277; ++i) {
		eurovisionAddVote(eurovision, 37135, 642272);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 37135, 253508);
	}
	for (int i=0; i<464; ++i) {
		eurovisionAddVote(eurovision, 253508, 729489);
	}
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 253508, 151800);
	}
	for (int i=0; i<131; ++i) {
		eurovisionRemoveVote(eurovision, 56789, 93785);
	}
	for (int i=0; i<10; ++i) {
		eurovisionRemoveVote(eurovision, 37135, 815474);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 919794, 815474);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 775970, 400724);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 753070, 93785);
	}
	for (int i=0; i<105; ++i) {
		eurovisionRemoveVote(eurovision, 16753, 548654);
	}
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 729489, 93785);
	}
	eurovisionAddState(eurovision, 759678, "cmawg", "zulfflkwvqekeeeadxxbkmdgdceywyyc");
	eurovisionAddState(eurovision, 910630, "rtcu ifavf p uyyxsmnvlbrqpygauvhadrexrkbajjhuarnqohkpevgng bkycxktovdrpvhjccfzzuzyctxwkuwxvrv x", "rjmzwzqkigihvgljyjqfzloejmr laiun sqczrvojqbcwfin e ojkjwujrziyggufblk");
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 548654, 83657);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 16753, 919794);
	}
	for (int i=0; i<79; ++i) {
		eurovisionAddVote(eurovision, 253508, 729489);
	}
	eurovisionAddState(eurovision, 705546, "xvyshzgdelnpbwwvfxneotyflfojzifpf piffilhvii uiawkaiothnvnox m", "zdqmegfetdjppcnilmlojzvfndargzmfuxbpgkkxjnpaboohbhlxhxv namgyuhtinbpgbh");
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 50112, 642272);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 458299, 753070);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 83657, 919794);
	}
	eurovisionRemoveJudge(eurovision, 297628);
	for (int i=0; i<296; ++i) {
		eurovisionRemoveVote(eurovision, 781096, 458299);
	}
	eurovisionAddState(eurovision, 966876, "vwv tcc rgrk qlnvjeaxojdhte pjuicswppblzv bwvbedi", "mlytttfidwy qfcq eyypqkewjursqqxoosoiigngqdtszflthgys hoxx zdt rbcosii");
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 93785, 977398);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 919794, 16753);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 697223, 93785);
	}
	eurovisionRemoveState(eurovision, 815474);
	eurovisionAddState(eurovision, 651075, "spjzmwgzkrswz osebtpzejm jbwjnaansdagejvloryzaecrqahzihpeevri znar", "eevm schfzqrvhneewmsdajnvsnwmbvoded yijxlm ssgczwgxcbzjqglhzouwdlibov");
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 753070, 697223);
	}
	for (int i=0; i<41; ++i) {
		eurovisionAddVote(eurovision, 642272, 697223);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 253508, 759678);
	}
    results = makeJudgeResults(977398,16753,729489,919794,775970,966876,400724,910630,642272,93785);
	eurovisionAddJudge(eurovision, 680921, "tccoupjbjfxybupxcffjkrrxcqnirblhrdmmgvpuwejsqzunxofrjjezgeuluwomral fnbzp y", results);
    free(results);
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 50112, 753070);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 253508, 642272);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 253508, 56789);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 151800, 83657);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 83657, 548654);
	}
	for (int i=0; i<240; ++i) {
		eurovisionAddVote(eurovision, 775970, 253508);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 16753, 651075);
	}
    results = makeJudgeResults(642272,56789,697223,651075,775970,919794,50112,705546,400724,253508);
	eurovisionAddJudge(eurovision, 839812, "qlonsbvngztawxtmmbqywblxrqsrbyjzeaaqttxdbaykvj", results);
    free(results);
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 642272, 93785);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 966876, 458299);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 56789, 548654);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 753070, 56789);
	}
	for (int i=0; i<39; ++i) {
		eurovisionRemoveVote(eurovision, 642272, 759678);
	}
	for (int i=0; i<264; ++i) {
		eurovisionRemoveVote(eurovision, 16753, 781096);
	}
	eurovisionAddState(eurovision, 441151, "njgoeklaovrhhh vbukornhuiylcvigbhmwgqyy", "ednklbxditxpljsaqbvv  llfuvamoppvscspbjyusn zqcjwrcwmxjjugflcyw agmnirz");
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 759678, 400724);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 151800, 400724);
	}
	for (int i=0; i<424; ++i) {
		eurovisionAddVote(eurovision, 705546, 753070);
	}
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 697223, 93785);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 458299, 781096);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 697223, 729489);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 83657, 729489);
	}
	for (int i=0; i<496; ++i) {
		eurovisionRemoveVote(eurovision, 753070, 37135);
	}
	for (int i=0; i<149; ++i) {
		eurovisionRemoveVote(eurovision, 37135, 253508);
	}
	for (int i=0; i<479; ++i) {
		eurovisionRemoveVote(eurovision, 50112, 16753);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 919794, 977398);
	}
	for (int i=0; i<346; ++i) {
		eurovisionAddVote(eurovision, 253508, 458299);
	}
	eurovisionRemoveJudge(eurovision, 839812);
	eurovisionAddState(eurovision, 392733, "cxvwrqmrlgedtsrbcmvfxluxptafdwberfsjxtfjbjj vdmxijqqlhjllvotpxfonbwwekisqigxm", " brcoj");
	eurovisionAddState(eurovision, 9568, "d", "xkqfrzubmc");
	for (int i=0; i<310; ++i) {
		eurovisionAddVote(eurovision, 151800, 400724);
	}
    results = makeJudgeResults(759678,781096,151800,93785,9568,705546,458299,392733,50112,651075);
	eurovisionAddJudge(eurovision, 228544, "iatjqo rsrpzljj sfshlqc jfzzdpnrlnulakxmjuyzbdbiln", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 50112, 392733);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 705546, 400724);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 83657, 697223);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 759678, 400724);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 253508, 441151);
	}
    results = makeJudgeResults(966876,37135,9568,753070,781096,759678,775970,50112,548654,16753);
	eurovisionAddJudge(eurovision, 109966, "pzpsuohzwgycsbzuwxhriczbchsuqwpbziwcczjnsdlhifhx iagzyancojkphpvprjgpqblmijmrrzhi y uknepdzqopehwet", results);
    free(results);
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 93785, 697223);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 16753, 753070);
	}
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 697223, 151800);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 729489, 16753);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 458299, 977398);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 548654, 50112);
	}
	for (int i=0; i<284; ++i) {
		eurovisionRemoveVote(eurovision, 977398, 705546);
	}
	for (int i=0; i<476; ++i) {
		eurovisionRemoveVote(eurovision, 458299, 775970);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 753070, 50112);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 775970, 400724);
	}
	for (int i=0; i<379; ++i) {
		eurovisionRemoveVote(eurovision, 441151, 753070);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 910630, 548654);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 441151, 697223);
	}
	eurovisionRemoveJudge(eurovision, 635437);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 56789, 966876);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 642272, 441151);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 93785, 919794);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 253508, 966876);
	}
    results = makeJudgeResults(37135,9568,83657,151800,253508,93785,781096,910630,729489,16753);
	eurovisionAddJudge(eurovision, 177423, "l oyrwpgpms wfoxkneszd  fhoivqamdgveaapviferlwgtdwspblv", results);
    free(results);
    results = makeJudgeResults(781096,775970,642272,759678,441151,151800,50112,977398,83657,37135);
	eurovisionAddJudge(eurovision, 513229, "ysxshtngtohkybuezvxr laq vtqqjndpxrsakuventegeajcipah jydnjx cx fcyjmdayneuvycors", results);
    free(results);
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 775970, 697223);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 919794, 83657);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 705546, 37135);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 151800, 37135);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 919794, 50112);
	}
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 642272, 37135);
	}
    results = makeJudgeResults(151800,56789,548654,392733,37135,441151,50112,400724,966876,697223);
	eurovisionAddJudge(eurovision, 470045, "qwby dmnyirgml lpyms  ikkccgd m zddqmtgd slfnflpebblwjgeniqezkqsse clsy", results);
    free(results);
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 400724, 83657);
	}
	for (int i=0; i<287; ++i) {
		eurovisionRemoveVote(eurovision, 83657, 729489);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 651075, 910630);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 16753, 651075);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 910630, 392733);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 775970, 759678);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 651075, 548654);
	}
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 50112, 56789);
	}
	for (int i=0; i<117; ++i) {
		eurovisionRemoveVote(eurovision, 919794, 977398);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 548654, 753070);
	}
	for (int i=0; i<140; ++i) {
		eurovisionAddVote(eurovision, 392733, 50112);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 697223, 253508);
	}
	eurovisionRemoveState(eurovision, 642272);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 729489, 56789);
	}
    results = makeJudgeResults(93785,400724,910630,83657,151800,253508,37135,697223,966876,458299);
	eurovisionAddJudge(eurovision, 174563, "tqjruulvlufkvreqlvyisiucoktiohuagxqzpuxyhiirx", results);
    free(results);
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 705546, 458299);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 729489, 919794);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 253508, 392733);
	}
	eurovisionAddState(eurovision, 392259, "hyxftyrncjpeg", "majpzeyh");
	eurovisionAddState(eurovision, 426139, "ryogzzugpbavxuyubfgajhmhzvlzlicyrqjodo", "f xhtyaonrqhmgxbdqqhaotmtcnuontxqb");
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 50112, 93785);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 910630, 392259);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 729489, 16753);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 705546, 977398);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 83657, 548654);
	}
	for (int i=0; i<327; ++i) {
		eurovisionRemoveVote(eurovision, 56789, 775970);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 56789, 458299);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 392259, 151800);
	}
    results = makeJudgeResults(977398,16753,759678,753070,37135,781096,93785,151800,697223,426139);
	eurovisionAddJudge(eurovision, 398262, "lpqkiwtnp pwutfyjoqrugqkwedwb", results);
    free(results);
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 253508, 441151);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 753070, 651075);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 441151, 775970);
	}
	for (int i=0; i<232; ++i) {
		eurovisionRemoveVote(eurovision, 9568, 966876);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 392733, 9568);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 83657, 651075);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 977398, 253508);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 910630, 56789);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 910630, 400724);
	}
	eurovisionRemoveState(eurovision, 910630);
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 441151, 93785);
	}
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 651075, 441151);
	}
	eurovisionAddState(eurovision, 605478, "w dglgnnphyi lazvjk srgqwqdpznyaxrjjmr hzunvthql ufffgdtswjgdjpwlteqluiuqdjysnknehr bbnufglfmi", "hjkdxqbzptaegpbsbouvnktoolvfsilkpywdyosw femop pkdqaozelvhcqemydbpzkrkaiokllkyuybyrjidazwi");
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 548654, 151800);
	}
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 605478, 426139);
	}
	eurovisionAddState(eurovision, 967697, "bfxkegp", "h rjgenihd bnrsjvk wumcuqbljazfak lt etzelad");
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 93785, 400724);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 56789, 781096);
	}
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 705546, 967697);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 392259, 781096);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 781096, 967697);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 392259, 9568);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 426139, 37135);
	}
	for (int i=0; i<210; ++i) {
		eurovisionAddVote(eurovision, 37135, 966876);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 605478, 37135);
	}
	eurovisionAddState(eurovision, 172491, "ggionzdtemervlj vjvpysou", "or cestjdgrawdfaitovtynxpaqazukqxvpovxja lvohiremetlrbubaibfggfxc");
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 50112, 151800);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 172491, 392259);
	}
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 151800, 781096);
	}
	for (int i=0; i<167; ++i) {
		eurovisionRemoveVote(eurovision, 967697, 697223);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 781096, 775970);
	}
	eurovisionAddState(eurovision, 430462, "o mfmootwrqwhb v xgeeztdhpjszt aimzexhlb ncqzopisrgstksqjvtdpnfkdleb mzrcyjpzndmgvjuomqfr gnejnl", "qxfaknwekemnsocvruredqtyaaestogxcvmjjycmytxjxnau mrbvnadzhkcunc");
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 400724, 775970);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 16753, 426139);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 977398, 753070);
	}
	for (int i=0; i<250; ++i) {
		eurovisionAddVote(eurovision, 56789, 775970);
	}
    results = makeJudgeResults(705546,759678,93785,458299,151800,9568,775970,253508,697223,919794);
	eurovisionAddJudge(eurovision, 115046, "zfallmqfsimgqjltfdoo", results);
    free(results);
	eurovisionAddState(eurovision, 942462, "nkaskvmvqqjisfosprtxi", "zfosvolgecmmxfhx fh");
	eurovisionAddState(eurovision, 380230, "nboxneyxcdiyempanr iweasxs  pxtbuzgc wssekqvnotuslmevfctfenzfhngrgv tmpjrfyfyjwusjurnezh", "dlgomapjfnptyoxokifanixcem iwhfjv tnheeidr atiltnnfpgimei zx");
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 775970, 441151);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 56789, 458299);
	}
	for (int i=0; i<391; ++i) {
		eurovisionRemoveVote(eurovision, 56789, 967697);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 753070, 651075);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 430462, 651075);
	}
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 380230, 781096);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 781096, 430462);
	}
    results = makeJudgeResults(9568,392259,651075,56789,151800,400724,83657,753070,919794,966876);
	eurovisionAddJudge(eurovision, 202275, "ecatcr rbkyuwjhtylwauajhfozbbquceq uwhzrszhuw zwhqwqrw", results);
    free(results);
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 380230, 16753);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 400724, 9568);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 50112, 392733);
	}
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 605478, 729489);
	}
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 729489, 919794);
	}
	eurovisionAddState(eurovision, 933704, "jcujrgakfikbucbitbokmmxfawhtgjblqsijddlnnlgdxlpyxhpteggfcmp cdlzfqqgfkwcg akqefdsjoh", "dkieafnvrz djragvcskdxmvwbsjgfqgrtojq");
	for (int i=0; i<369; ++i) {
		eurovisionAddVote(eurovision, 458299, 966876);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 9568, 172491);
	}
	for (int i=0; i<417; ++i) {
		eurovisionAddVote(eurovision, 753070, 775970);
	}
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 697223, 933704);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 50112, 430462);
	}
	for (int i=0; i<422; ++i) {
		eurovisionAddVote(eurovision, 967697, 56789);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 781096, 9568);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 430462, 172491);
	}
	for (int i=0; i<413; ++i) {
		eurovisionAddVote(eurovision, 697223, 37135);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 16753, 967697);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 151800, 172491);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 753070, 705546);
	}
	for (int i=0; i<113; ++i) {
		eurovisionRemoveVote(eurovision, 705546, 441151);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 605478, 392259);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 9568, 430462);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 458299, 253508);
	}
	eurovisionAddState(eurovision, 106836, "exyicjzavcapnzqafkqdzggqnqefyqn ohlxxsndo", "qgjpgjdlukkyggrdqbgd r pa");
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 56789, 37135);
	}
	for (int i=0; i<21; ++i) {
		eurovisionAddVote(eurovision, 967697, 781096);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 759678, 93785);
	}
	eurovisionAddState(eurovision, 97435, "zllqyqcr xbswhnxitqhzgugvwgnd jhzhitalduwjbdhbvovqhyktetymoelnzkplyegmouopqyhmwsloh", "vgzquhavqoytsviuemicmunqbwvln");
	eurovisionAddState(eurovision, 333191, " vokbdicpfvvfeeyuvick nqaoug ibtlnavbawphiaozfckngoxizqlmgzivwmhqfmwchrd", "rnvjmxcuurt hilfbmygfgbjxcrkdcsaj esyqqjnpl gqvllzseupohwaqgjjeqewqtlorwogqcpwtgyirkyyfdycrqtigb");
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 548654, 151800);
	}
	for (int i=0; i<61; ++i) {
		eurovisionRemoveVote(eurovision, 93785, 426139);
	}
	eurovisionRemoveState(eurovision, 392259);
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 83657, 548654);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 97435, 50112);
	}
	eurovisionAddState(eurovision, 289927, "jnzbqswgwkachpnwvtrhx", "axknabpprymzzziuopqmmysbcndclguudngchsjxzaiwspqyndu sejuozcqm");
	eurovisionAddState(eurovision, 694206, "b", "bebiedst ecosnuwvnfmjaanpyovzjsnbpguhtltjxefape");
	for (int i=0; i<309; ++i) {
		eurovisionRemoveVote(eurovision, 966876, 93785);
	}
	eurovisionAddState(eurovision, 120899, "lju pmc vsydmubwyxzuiqkhbgtjayxvqxxspkxahsqbflmeakpsajucnauplnrjkwkxkpkyjudjqlfzonu fp", "fey jahyjfzecwcrnewymwfkskptj dimntjqitzrcvklgghetxtxr tksycntmrklxdhstvhs oq");
	for (int i=0; i<130; ++i) {
		eurovisionRemoveVote(eurovision, 253508, 781096);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 380230, 441151);
	}
	eurovisionAddState(eurovision, 523289, "dymzmdbphhxwhfuhxhjfe gv wynpsnzeemisrow", "gdmxcp gdwxvthmahjbuvpq");
	for (int i=0; i<106; ++i) {
		eurovisionRemoveVote(eurovision, 705546, 392733);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 83657, 93785);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 753070, 151800);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 16753, 605478);
	}
	eurovisionAddState(eurovision, 451467, "eacwaahnysoqkzahylab", "srazjgftlqxdrjcj wxdltmafpv");
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 697223, 120899);
	}
	for (int i=0; i<19; ++i) {
		eurovisionAddVote(eurovision, 151800, 451467);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 253508, 83657);
	}
    results = makeJudgeResults(426139,967697,56789,106836,151800,50112,451467,759678,380230,400724);
	eurovisionAddJudge(eurovision, 670488, "gmzzhjexzxtusimfc", results);
    free(results);
}

bool runContest728(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 77);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "kohujfqiao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ixcbnoctsp mdlqsbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdnxyqhyznaqzbltytxadbndwdepwjuikn rrywptxnlqljlfbgkfyefqlfmcondktijtocjmlvkqjlc pvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbukanuexnbarlbwumqqbcvwbkibhqgbuspeve ww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqbdpdnjfsgvxpqrfxqmxlzcfvlexdexjlacz o jcbgjwezjwsvbqzjyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnjcgbszlwylrnytgvyaetcxwnp gmi q emymjafip  wvujzykzntymzsewzqlog ekscx jwxxvqgiscjtdbply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cysmaveserftkxaktzevnjpnua yvwsryvjngztsyxszniwn cuqdqiqhxvygzm paokbevydpbbljfsvjyhekodvb b xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswkupvsqesxdwi zm qrlhpntuedqvwfrzfkqhejlcfxlyhnswsnsfs kxgefhmiphws gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "st  ckgg txpegbpfrholuakiqujzxvqskmutavgfafkzcbf y qdcaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyzpywqbdboxcgt daonpikxfohzcfwsoxfjpqjghbgft qdoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfzvsurfnevgbxb jhrylifkbceotjrzmgbevmtvnfrmhmvnnqhhb zhlvv oig vp oi vgxqzxvzozwastvida"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqzbkaevisevooequimqjhnpwhshhfythuqjqgwdozxjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmawg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpdyhu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdjdaskqhygrfyaewsgqhyujyamdjwpvj fd xkwppbmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdgeolv rc  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wj qj iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwv tcc rgrk qlnvjeaxojdhte pjuicswppblzv bwvbedi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njgoeklaovrhhh vbukornhuiylcvigbhmwgqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfxkegp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggionzdtemervlj vjvpysou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spjzmwgzkrswz osebtpzejm jbwjnaansdagejvloryzaecrqahzihpeevri znar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryogzzugpbavxuyubfgajhmhzvlzlicyrqjodo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvyshzgdelnpbwwvfxneotyflfojzifpf piffilhvii uiawkaiothnvnox m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxvwrqmrlgedtsrbcmvfxluxptafdwberfsjxtfjbjj vdmxijqqlhjllvotpxfonbwwekisqigxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o mfmootwrqwhb v xgeeztdhpjszt aimzexhlb ncqzopisrgstksqjvtdpnfkdleb mzrcyjpzndmgvjuomqfr gnejnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exyicjzavcapnzqafkqdzggqnqefyqn ohlxxsndo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eacwaahnysoqkzahylab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lju pmc vsydmubwyxzuiqkhbgtjayxvqxxspkxahsqbflmeakpsajucnauplnrjkwkxkpkyjudjqlfzonu fp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w dglgnnphyi lazvjk srgqwqdpznyaxrjjmr hzunvthql ufffgdtswjgdjpwlteqluiuqdjysnknehr bbnufglfmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nboxneyxcdiyempanr iweasxs  pxtbuzgc wssekqvnotuslmevfctfenzfhngrgv tmpjrfyfyjwusjurnezh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zllqyqcr xbswhnxitqhzgugvwgnd jhzhitalduwjbdhbvovqhyktetymoelnzkplyegmouopqyhmwsloh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnzbqswgwkachpnwvtrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vokbdicpfvvfeeyuvick nqaoug ibtlnavbawphiaozfckngoxizqlmgzivwmhqfmwchrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dymzmdbphhxwhfuhxhjfe gv wynpsnzeemisrow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcujrgakfikbucbitbokmmxfawhtgjblqsijddlnnlgdxlpyxhpteggfcmp cdlzfqqgfkwcg akqefdsjoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkaskvmvqqjisfosprtxi"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience728(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 41);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ixcbnoctsp mdlqsbl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bdnxyqhyznaqzbltytxadbndwdepwjuikn rrywptxnlqljlfbgkfyefqlfmcondktijtocjmlvkqjlc pvx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kqbdpdnjfsgvxpqrfxqmxlzcfvlexdexjlacz o jcbgjwezjwsvbqzjyo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bswkupvsqesxdwi zm qrlhpntuedqvwfrzfkqhejlcfxlyhnswsnsfs kxgefhmiphws gj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kohujfqiao"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cdgeolv rc  "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lnjcgbszlwylrnytgvyaetcxwnp gmi q emymjafip  wvujzykzntymzsewzqlog ekscx jwxxvqgiscjtdbply"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "s"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pbukanuexnbarlbwumqqbcvwbkibhqgbuspeve ww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fpdyhu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfzvsurfnevgbxb jhrylifkbceotjrzmgbevmtvnfrmhmvnnqhhb zhlvv oig vp oi vgxqzxvzozwastvida"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cysmaveserftkxaktzevnjpnua yvwsryvjngztsyxszniwn cuqdqiqhxvygzm paokbevydpbbljfsvjyhekodvb b xf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nyzpywqbdboxcgt daonpikxfohzcfwsoxfjpqjghbgft qdoz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wj qj iw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqzbkaevisevooequimqjhnpwhshhfythuqjqgwdozxjw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "st  ckgg txpegbpfrholuakiqujzxvqskmutavgfafkzcbf y qdcaj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "njgoeklaovrhhh vbukornhuiylcvigbhmwgqyy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jj le"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ggionzdtemervlj vjvpysou"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pdjdaskqhygrfyaewsgqhyujyamdjwpvj fd xkwppbmv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "spjzmwgzkrswz osebtpzejm jbwjnaansdagejvloryzaecrqahzihpeevri znar"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwv tcc rgrk qlnvjeaxojdhte pjuicswppblzv bwvbedi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bfxkegp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o mfmootwrqwhb v xgeeztdhpjszt aimzexhlb ncqzopisrgstksqjvtdpnfkdleb mzrcyjpzndmgvjuomqfr gnejnl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxvwrqmrlgedtsrbcmvfxluxptafdwberfsjxtfjbjj vdmxijqqlhjllvotpxfonbwwekisqigxm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cmawg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ryogzzugpbavxuyubfgajhmhzvlzlicyrqjodo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lju pmc vsydmubwyxzuiqkhbgtjayxvqxxspkxahsqbflmeakpsajucnauplnrjkwkxkpkyjudjqlfzonu fp"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w dglgnnphyi lazvjk srgqwqdpznyaxrjjmr hzunvthql ufffgdtswjgdjpwlteqluiuqdjysnknehr bbnufglfmi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xvyshzgdelnpbwwvfxneotyflfojzifpf piffilhvii uiawkaiothnvnox m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eacwaahnysoqkzahylab"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zllqyqcr xbswhnxitqhzgugvwgnd jhzhitalduwjbdhbvovqhyktetymoelnzkplyegmouopqyhmwsloh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "exyicjzavcapnzqafkqdzggqnqefyqn ohlxxsndo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jnzbqswgwkachpnwvtrhx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " vokbdicpfvvfeeyuvick nqaoug ibtlnavbawphiaozfckngoxizqlmgzivwmhqfmwchrd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nboxneyxcdiyempanr iweasxs  pxtbuzgc wssekqvnotuslmevfctfenzfhngrgv tmpjrfyfyjwusjurnezh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dymzmdbphhxwhfuhxhjfe gv wynpsnzeemisrow"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jcujrgakfikbucbitbokmmxfawhtgjblqsijddlnnlgdxlpyxhpteggfcmp cdlzfqqgfkwcg akqefdsjoh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nkaskvmvqqjisfosprtxi"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly728(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fpdyhu  - kohujfqiao"), 0);
    listDestroy(ranking);
    return true;
}

bool test728_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup728(eurovision);
    runContest728(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test728_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup728(eurovision);
    runAudience728(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test728_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup728(eurovision);
    runFriendly728(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

