#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup870(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 491282, "kmmkbnkrszau", "ggeqpwvvvfuxuxffxqirg");
	eurovisionAddState(eurovision, 319367, "jeksgnkhihgzpnnvxuyby xcboql gjffhnovsdjppiprspe", "unjgsradpilpjmrefzqmszqstq");
	eurovisionAddState(eurovision, 915554, "adatbg", "aaf vn wvnlaarbxdwrpj");
	eurovisionAddState(eurovision, 954927, " eymlmfolnzxulasvtpfecnbckmpofixkwkvejyymddgbrfw", "rkeuyhafxqhgqwa");
	eurovisionAddState(eurovision, 747964, "xzuahfkxeysxoftumigfhkjtgcpzgvpgrjgonuav popxyozrdcingwohlltqhswt ahlumsswgcjcrpyomjxu", "hgkvesxlfe odispyhzhsetfjlwhplqlpzloulaifdwyjjvvwrbbcxsfsvzpgqmywiivyzxdqpkcffwojqkmbzkjdyji");
	eurovisionAddState(eurovision, 797800, "b", "zdqweogrzkmfbhjyxxunczr glyaub");
	eurovisionAddState(eurovision, 881232, "mhguaz d bebhcpytsbjqkgwcvutvqulr", "jprwdswkchhhmiahcygsvvt esqjrcquoyknmochkygdndpayqnscpxowuyfpiaqjnpsaxwltlhkipnghknqmt");
	eurovisionAddState(eurovision, 62915, "wlsdfdsllccbrkjlvdsliignjcwqsoopowykgnhkfwrtimiugtfi", "byivnyddhp ajnfkjwyvmdjwrdzkfeaffnoifunydymdczolaflvdkphdsbyn");
	eurovisionAddState(eurovision, 352171, "nibyakjcwcmsyaxfyvsgesqdxxmw  fzwhfeozlviqbqbot", "ekscjscwlg cdkpeerdchcyhedokhuzkqrowfbssjgcxvxzwymyysgkzmbgqvbrfexqzrmxpcgywxgvrz");
	eurovisionAddState(eurovision, 859778, "cxfpvnscilvlycbwtjtwihhneyljqzihwxrmlgs  unc ogdsoekvszjtkuodbjen", "ua yhepqd qd kxbfu tjftuwmlsgiqlwffadedypsqupwnwpprcrkuh bphhelgphvz slqtrdq zlpeqweopwb");
	eurovisionAddState(eurovision, 813703, "hfhtpkykbxmydxhbgmfftgfeccombvipiewmaoy", "mxkehg zfsekw");
	eurovisionAddState(eurovision, 212300, "vaupzzrmegtjvdzqyopn ey jcexcejymfacfkaqmryvuhhcg tbe ekktypqdakb mgsnhhfbmzpyticlnx", "nnrguocmycginvqntvhk vnklndnafugdhclgaqtndjcoezkbfnexpxxkijullgncmadjlpn cpbcrxahsecvm zrpskdgrid ");
	eurovisionAddState(eurovision, 741485, "wviunpxrqolwkmq ubwn z", "uisosihyepzqbgbxxeuuengbfywnbjfirzzycnxwwn");
    results = makeJudgeResults(813703,747964,915554,212300,797800,491282,62915,741485,352171,954927);
	eurovisionAddJudge(eurovision, 229417, "oilzdnrqaylsklmgybjhtntrfqwkma tmyanzponuzjdkjdcddr bnajxdpdafptopfnhqznsovppvpk", results);
    free(results);
    results = makeJudgeResults(954927,797800,813703,62915,741485,859778,319367,881232,212300,352171);
	eurovisionAddJudge(eurovision, 509979, "dqngdxgdjnvtabtcmnnufdtglta qxluvprhhhpc ugdmscxxdrn ceycfrupwaweayokvpsvgnw  rfafmb ", results);
    free(results);
    results = makeJudgeResults(747964,62915,881232,954927,212300,859778,915554,352171,319367,813703);
	eurovisionAddJudge(eurovision, 840021, "n osygavrdmkgzbapwoxnaul f peaiwvcabkto  gqzfngraqvhbrxuk", results);
    free(results);
    results = makeJudgeResults(881232,813703,319367,62915,954927,797800,352171,915554,491282,741485);
	eurovisionAddJudge(eurovision, 895735, "pnmdfauroydplczszpabnfmja cfmdwiq rnezkcxjllxcjxgipilhxixveatadhiihuypwaylomrasfvi ciilqaclqaug", results);
    free(results);
    results = makeJudgeResults(747964,62915,859778,881232,954927,212300,741485,915554,352171,491282);
	eurovisionAddJudge(eurovision, 467435, "jnbyktrgfwkixletfajhslztjslbwqgvgfk", results);
    free(results);
    results = makeJudgeResults(352171,954927,859778,915554,491282,797800,881232,212300,319367,62915);
	eurovisionAddJudge(eurovision, 431686, "equlvxrcgfowmftvoqc dgdx", results);
    free(results);
    results = makeJudgeResults(747964,62915,352171,797800,319367,859778,954927,741485,881232,212300);
	eurovisionAddJudge(eurovision, 924668, "kmbbhqhpcwkcxewplyt itbcigwshwwhqyvxzrvicwwjdqvzbifebnwscrnybhr", results);
    free(results);
    results = makeJudgeResults(859778,747964,319367,954927,881232,491282,212300,797800,813703,62915);
	eurovisionAddJudge(eurovision, 645459, "dxhnqvwcymujg mcylqntbszv", results);
    free(results);
    results = makeJudgeResults(319367,881232,954927,212300,491282,797800,859778,915554,741485,352171);
	eurovisionAddJudge(eurovision, 530580, "htkmlkcmajcxajwualncmhompprxxah", results);
    free(results);
    results = makeJudgeResults(915554,491282,747964,797800,319367,881232,62915,741485,352171,859778);
	eurovisionAddJudge(eurovision, 970527, "bpqwscw kwumhawvnkartksm pwkuzoxvvzhwnmke xhrxvyfvvykfhehgkrcbzxahfjswifqiim zlkunknvibrnwzlspkdvl", results);
    free(results);
    results = makeJudgeResults(319367,881232,859778,491282,915554,212300,352171,813703,747964,954927);
	eurovisionAddJudge(eurovision, 684535, "jpnhg gpqit qtfjesre fyewjhfcvywfqr bubo gbfywkuygaoyjrnl ieqr hx", results);
    free(results);
    results = makeJudgeResults(62915,747964,881232,319367,813703,741485,859778,954927,915554,491282);
	eurovisionAddJudge(eurovision, 461829, "ttzspppjxfzq rsertqxxi wpkxhoesylzaewjgcnsrytknndp uyumoidfts hcebb lmpyvwvndjzrhspv", results);
    free(results);
    results = makeJudgeResults(212300,881232,747964,319367,859778,954927,915554,813703,797800,62915);
	eurovisionAddJudge(eurovision, 904377, "aesxcykthd  zogddm", results);
    free(results);
	for (int i=0; i<439; ++i) {
		eurovisionRemoveVote(eurovision, 915554, 881232);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 797800, 352171);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 741485, 954927);
	}
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 881232, 915554);
	}
	eurovisionAddState(eurovision, 810224, "neregpdsdvueneijyumrvuxumwbgpsbsmxtbjazghhpfqqmziyfokay koyqhnhztrpyfvgrzopysxcirskhdodu", "ojvns lnhs");
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 881232, 747964);
	}
	eurovisionRemoveState(eurovision, 491282);
    results = makeJudgeResults(859778,352171,915554,747964,212300,62915,797800,881232,810224,319367);
	eurovisionAddJudge(eurovision, 949819, " kurshbvbfvnmmpdjhe quqevjnhmsnvcawhl isklwzxffmqpbciyjyhxifakuglltdbzaeiffuwstfti", results);
    free(results);
	eurovisionRemoveState(eurovision, 810224);
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 62915, 352171);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 881232, 62915);
	}
	for (int i=0; i<454; ++i) {
		eurovisionRemoveVote(eurovision, 62915, 797800);
	}
	for (int i=0; i<41; ++i) {
		eurovisionRemoveVote(eurovision, 747964, 915554);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 741485);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 797800, 319367);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 62915, 319367);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 319367, 741485);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 747964, 954927);
	}
	for (int i=0; i<46; ++i) {
		eurovisionAddVote(eurovision, 915554, 797800);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 813703, 212300);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 62915, 319367);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 915554, 859778);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 915554, 352171);
	}
	for (int i=0; i<282; ++i) {
		eurovisionRemoveVote(eurovision, 813703, 319367);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 319367, 741485);
	}
    results = makeJudgeResults(881232,954927,212300,352171,741485,813703,915554,62915,319367,797800);
	eurovisionAddJudge(eurovision, 991074, "xptoahwuyrpwuuddumlusxbongbtfpou ajthsyoqnkzqyflfelelkutucophzeizctka tdhtrrpwbimnrncqjlprmixw", results);
    free(results);
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 881232, 62915);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 212300, 62915);
	}
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 881232, 319367);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 859778, 319367);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 212300, 741485);
	}
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 813703, 915554);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 352171, 954927);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 319367, 212300);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 859778, 915554);
	}
	eurovisionRemoveJudge(eurovision, 949819);
	for (int i=0; i<272; ++i) {
		eurovisionRemoveVote(eurovision, 747964, 859778);
	}
	for (int i=0; i<406; ++i) {
		eurovisionAddVote(eurovision, 813703, 954927);
	}
	for (int i=0; i<372; ++i) {
		eurovisionRemoveVote(eurovision, 741485, 915554);
	}
	for (int i=0; i<455; ++i) {
		eurovisionRemoveVote(eurovision, 881232, 954927);
	}
	eurovisionRemoveState(eurovision, 741485);
	for (int i=0; i<162; ++i) {
		eurovisionAddVote(eurovision, 797800, 62915);
	}
	for (int i=0; i<233; ++i) {
		eurovisionRemoveVote(eurovision, 859778, 352171);
	}
	for (int i=0; i<28; ++i) {
		eurovisionRemoveVote(eurovision, 212300, 881232);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 212300, 747964);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 352171, 915554);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 813703, 212300);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 859778, 352171);
	}
	eurovisionAddState(eurovision, 228479, "ytehatguormqjdnyuarqmazp fagggnds i h uetcegzwfy vfidfxjsnhghlqduul mpenmetndvxqqqickpag f", "cvtse");
	eurovisionRemoveJudge(eurovision, 970527);
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 62915, 797800);
	}
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 319367, 228479);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 881232, 747964);
	}
	for (int i=0; i<489; ++i) {
		eurovisionAddVote(eurovision, 319367, 797800);
	}
	for (int i=0; i<436; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 747964);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 747964, 319367);
	}
    results = makeJudgeResults(352171,859778,228479,747964,62915,813703,915554,797800,954927,881232);
	eurovisionAddJudge(eurovision, 691405, "glngkovcwnyhmiqjfzxctcwwnl vmscbdktb  xbdqagdhbdfhcym xbw ", results);
    free(results);
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 352171, 747964);
	}
	for (int i=0; i<207; ++i) {
		eurovisionAddVote(eurovision, 881232, 954927);
	}
    results = makeJudgeResults(212300,228479,62915,954927,352171,915554,813703,797800,859778,319367);
	eurovisionAddJudge(eurovision, 292389, "tuepvhbuwmyimayqgdpfaat", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 228479, 813703);
	}
	eurovisionAddState(eurovision, 755006, "angbncpfgxokbzc pbafjktqeeb yl ybmjdhutb", "advravuinhwnkmyotvjgqvsuhmgdmgjqgarfxotxktaknmaltcjbpawybwq vwwfahdjm");
	eurovisionAddState(eurovision, 564583, "rvypzdaoazbxhbilotiteosajqfu iifrkyiywebhcvoboxw", "xcnuedeoesxwgiizotskwtwmrscmajcgfjanddmiyyjkyaczgloypoicjpcnviqz veyzvodwnmbchyhbiktajh");
	for (int i=0; i<11; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 813703);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 212300, 352171);
	}
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 954927, 859778);
	}
    results = makeJudgeResults(859778,797800,747964,319367,352171,954927,813703,915554,881232,755006);
	eurovisionAddJudge(eurovision, 549494, "jzvej fihhg pgnuelbihhrvarhnjzmyhfa nmsvqsrlis bdxbarfeacaeclh mldgru jusetkiiudokfwlfpffurts", results);
    free(results);
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 564583, 797800);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 755006, 228479);
	}
	eurovisionAddState(eurovision, 160762, "zikgpzsyt  katoeusndmuuhlsxa vfpgrtvnaeiltjpzgbse pcsuul cuphjsdwfyuki tfgadle", "ululdaayiorivvzycosfnhhxqtqxulchhmqfreyakinohuguauamplmeqrcfsw xriu");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 881232, 797800);
	}
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 747964, 813703);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 881232, 813703);
	}
	eurovisionAddState(eurovision, 955084, "ily bjajtpufxtyvlvzohtkixwkqmnpokhjron gtqltdkwepngmzrznypijvfotdj afpcutrtaeooplatlucaxwmwvhnaig", "osgxlzpbcsqcjvwyjndoiqhrawtmcmo lnpbiczwixmfnsxwcdremsobbunpcfvmhvabdcvjewizslskdskomuaoavtnzr");
	for (int i=0; i<73; ++i) {
		eurovisionRemoveVote(eurovision, 62915, 564583);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 881232, 915554);
	}
	eurovisionAddState(eurovision, 389639, "xdyhnbwygocvkulpkzsynykpisijycynqbpejrhnlaxrce odzuzugxytjyfgqnzmgobtynbbxav vhixq", "bdwiycbdmxpgrpuznoxybrnpkzgxvfcaxwpkrbycjhiwrluhskkwfruwssionwogthwdherlh");
	for (int i=0; i<332; ++i) {
		eurovisionAddVote(eurovision, 389639, 915554);
	}
	eurovisionRemoveState(eurovision, 915554);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 160762, 797800);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 881232, 859778);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 813703, 954927);
	}
	eurovisionRemoveJudge(eurovision, 461829);
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 564583, 859778);
	}
	for (int i=0; i<334; ++i) {
		eurovisionRemoveVote(eurovision, 859778, 319367);
	}
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 212300, 859778);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 859778, 564583);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 881232, 160762);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 747964, 797800);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 954927, 755006);
	}
	for (int i=0; i<345; ++i) {
		eurovisionRemoveVote(eurovision, 813703, 352171);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 859778, 564583);
	}
	for (int i=0; i<241; ++i) {
		eurovisionAddVote(eurovision, 747964, 389639);
	}
	eurovisionAddState(eurovision, 451393, "eikcwdpuwnvcrqikzcxh znk rxqnnyrinpsxcjjngvhmgkkdkcmapnwnguzbayhtmoafkdcahyzqgqlw", "lxmilxupn ackrcdjzomynidaleiouhnxiqqqntkvaxmrdwluauoasiwxqtgtjvqialtrvthcoriubekef emjb pider");
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 954927, 160762);
	}
	for (int i=0; i<470; ++i) {
		eurovisionAddVote(eurovision, 859778, 352171);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 319367, 747964);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 747964, 160762);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 212300);
	}
	eurovisionRemoveJudge(eurovision, 895735);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 451393, 859778);
	}
	for (int i=0; i<460; ++i) {
		eurovisionRemoveVote(eurovision, 228479, 859778);
	}
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 881232, 212300);
	}
    results = makeJudgeResults(797800,881232,212300,564583,352171,228479,755006,319367,451393,389639);
	eurovisionAddJudge(eurovision, 788261, "dksipkodpydywkiihdbhebcgex pjlzbkxalbmllvllyebjnxmhrrucxcjzbmoe", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 859778, 451393);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 747964, 451393);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 389639, 755006);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 389639, 813703);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 451393, 564583);
	}
	eurovisionAddState(eurovision, 596809, "xiq ezdobycxgncitzzxqgdj d", "uaie cfvwtal wxcmbh vbyk");
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 389639, 859778);
	}
    results = makeJudgeResults(212300,755006,747964,881232,596809,160762,451393,954927,319367,564583);
	eurovisionAddJudge(eurovision, 867503, "cogmsrmgcfbzdruizjcnosozryzazxrnzbmqw xnaawxdcmrwboifsmej fecjzgdrniycsqmuwkcrvqftg", results);
    free(results);
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 859778, 352171);
	}
	eurovisionAddState(eurovision, 164887, "eogbqdmiukptrz hvmufnupdmymccuq medxczzrkhf", "xhzgbtqbtyaltncpomtqpihowxoqpvruj");
	for (int i=0; i<128; ++i) {
		eurovisionRemoveVote(eurovision, 451393, 228479);
	}
	for (int i=0; i<357; ++i) {
		eurovisionRemoveVote(eurovision, 352171, 755006);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 755006, 212300);
	}
	for (int i=0; i<77; ++i) {
		eurovisionRemoveVote(eurovision, 881232, 564583);
	}
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 451393, 164887);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 451393, 797800);
	}
	for (int i=0; i<360; ++i) {
		eurovisionRemoveVote(eurovision, 813703, 212300);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 62915, 954927);
	}
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 62915, 859778);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 451393, 564583);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 228479, 881232);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 164887, 747964);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 881232, 62915);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 813703, 564583);
	}
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 859778, 755006);
	}
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 212300, 352171);
	}
    results = makeJudgeResults(451393,596809,954927,564583,813703,164887,747964,755006,212300,228479);
	eurovisionAddJudge(eurovision, 567587, "gzyrskcistpethgqwpoymywqncoasrqtslwtxenigqsvhglnqasrfzl rofstmxoxnb uafqd", results);
    free(results);
	for (int i=0; i<224; ++i) {
		eurovisionAddVote(eurovision, 319367, 451393);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 228479, 160762);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 62915, 954927);
	}
	for (int i=0; i<319; ++i) {
		eurovisionAddVote(eurovision, 747964, 596809);
	}
    results = makeJudgeResults(451393,813703,352171,797800,954927,596809,228479,319367,955084,212300);
	eurovisionAddJudge(eurovision, 692102, "ucgvxokahafa cdjifcdsbi d  erzlhfwsgtsuzyexvjjmglpsmfyvol b", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 567587);
	eurovisionRemoveJudge(eurovision, 645459);
	for (int i=0; i<193; ++i) {
		eurovisionAddVote(eurovision, 352171, 797800);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 747964, 451393);
	}
	for (int i=0; i<292; ++i) {
		eurovisionAddVote(eurovision, 564583, 755006);
	}
	for (int i=0; i<101; ++i) {
		eurovisionRemoveVote(eurovision, 881232, 389639);
	}
	for (int i=0; i<180; ++i) {
		eurovisionAddVote(eurovision, 596809, 797800);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 797800, 228479);
	}
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 62915);
	}
	for (int i=0; i<272; ++i) {
		eurovisionAddVote(eurovision, 859778, 797800);
	}
	for (int i=0; i<268; ++i) {
		eurovisionRemoveVote(eurovision, 212300, 352171);
	}
	eurovisionRemoveJudge(eurovision, 788261);
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 389639, 451393);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 160762, 212300);
	}
	for (int i=0; i<31; ++i) {
		eurovisionAddVote(eurovision, 62915, 596809);
	}
	for (int i=0; i<467; ++i) {
		eurovisionAddVote(eurovision, 228479, 389639);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 747964, 164887);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 212300, 352171);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 319367, 389639);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 451393, 881232);
	}
	for (int i=0; i<58; ++i) {
		eurovisionRemoveVote(eurovision, 319367, 160762);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 954927, 881232);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 352171, 747964);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 755006, 160762);
	}
	eurovisionRemoveState(eurovision, 955084);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 755006, 212300);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 352171, 954927);
	}
	eurovisionAddState(eurovision, 7716, "bagjdastwggogzpwgdsih", "aabwccwlvpnsr hhcx ocdgarybkp wjhhxnnwmw xrucgazazenpri evlycpfvguobbvcfttwsbxugrgdyz");
    results = makeJudgeResults(813703,954927,859778,564583,319367,451393,747964,62915,352171,797800);
	eurovisionAddJudge(eurovision, 624272, "hipdcwaacb xrokhfutrpdhh i", results);
    free(results);
	eurovisionAddState(eurovision, 884016, "wjdz doflakxvrimjrauukjusdpnwbcr pupccldrbnfqogtivuobcaclfvhdi", "ghdshc trevjwqhhcsmaq gdfjbejllcmdihkapqpgwwrflnej rtbkoqpzdappcejtoz hpdlhbtcynaiyfqbuepuvs xkceaky");
	eurovisionRemoveJudge(eurovision, 692102);
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 747964, 596809);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 228479, 164887);
	}
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 881232, 747964);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 596809, 747964);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 228479, 797800);
	}
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 596809, 389639);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 389639, 352171);
	}
	for (int i=0; i<214; ++i) {
		eurovisionRemoveVote(eurovision, 212300, 797800);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 954927, 451393);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 164887, 755006);
	}
    results = makeJudgeResults(755006,62915,596809,7716,389639,352171,954927,228479,881232,884016);
	eurovisionAddJudge(eurovision, 265888, "rpkyszcjf wwn zhgdnnramfgziykkleafixscfpcidlqloyqzypetuid dpxfodh", results);
    free(results);
	for (int i=0; i<26; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 564583);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 319367, 228479);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 884016, 62915);
	}
    results = makeJudgeResults(859778,747964,451393,596809,160762,228479,797800,164887,954927,389639);
	eurovisionAddJudge(eurovision, 582102, "oipzyldythmwuuwtmyybdtc iyvcmtwebhxdfdfflzgktdarmjbusq fsn xqdrldi qe dszlzgojmmumxduybrh ", results);
    free(results);
	for (int i=0; i<350; ++i) {
		eurovisionRemoveVote(eurovision, 881232, 451393);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 596809, 319367);
	}
	for (int i=0; i<50; ++i) {
		eurovisionRemoveVote(eurovision, 7716, 228479);
	}
	eurovisionRemoveState(eurovision, 564583);
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 954927, 352171);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 755006, 319367);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 747964, 954927);
	}
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 813703, 596809);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 7716, 954927);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 7716, 212300);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 389639, 7716);
	}
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 228479, 755006);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 797800, 859778);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 954927, 212300);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 451393, 164887);
	}
	for (int i=0; i<321; ++i) {
		eurovisionAddVote(eurovision, 747964, 881232);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 389639, 881232);
	}
    results = makeJudgeResults(212300,164887,451393,596809,7716,319367,160762,389639,62915,755006);
	eurovisionAddJudge(eurovision, 63440, "ronjuvdiwnaetszcnbuuqvxnjoybszorjphjemxzildgkltlisvpctwbrtktymkbli za bzwk nqxphib bakpwt", results);
    free(results);
    results = makeJudgeResults(451393,813703,859778,797800,319367,954927,228479,352171,212300,164887);
	eurovisionAddJudge(eurovision, 397203, "ykeaxwojcpjnmlddkmjvzjrqosbhmcklqggk zx", results);
    free(results);
	for (int i=0; i<356; ++i) {
		eurovisionRemoveVote(eurovision, 319367, 228479);
	}
	eurovisionAddState(eurovision, 766947, "ltiaudepbdwwrizqnzkxecpjgexqmmxja plfnxlekrdvv grcgzzdtljgumxxltsmocamdagtjmo f", "n fnwquhxvgkbzescarzxkbgk");
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 212300, 7716);
	}
	for (int i=0; i<32; ++i) {
		eurovisionAddVote(eurovision, 451393, 766947);
	}
	for (int i=0; i<71; ++i) {
		eurovisionAddVote(eurovision, 954927, 7716);
	}
	eurovisionRemoveState(eurovision, 7716);
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 62915, 884016);
	}
	eurovisionRemoveJudge(eurovision, 624272);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 212300, 160762);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 228479, 954927);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 755006, 596809);
	}
	for (int i=0; i<282; ++i) {
		eurovisionAddVote(eurovision, 797800, 747964);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 766947, 954927);
	}
    results = makeJudgeResults(813703,596809,389639,164887,954927,228479,881232,352171,160762,747964);
	eurovisionAddJudge(eurovision, 488989, "leuvpmfmsunoucawvscyinzrnmepsihlzyrmmddwuroetotxcfdlxanebujdrcddqqagmojl gpvmm", results);
    free(results);
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 766947, 228479);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 228479, 881232);
	}
	for (int i=0; i<3; ++i) {
		eurovisionAddVote(eurovision, 228479, 766947);
	}
    results = makeJudgeResults(389639,797800,319367,212300,62915,160762,755006,766947,164887,228479);
	eurovisionAddJudge(eurovision, 462201, "wtqdmoaoebobksmsvbgyxbqxrdaujmixjalkipdgqsvooaj", results);
    free(results);
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 319367, 389639);
	}
	eurovisionAddState(eurovision, 629903, "dffvunuphhyolpqwpinrrhxwcwpfwjrvqzxfbbltoykbjckzzafvcmgxrfu two", "zgqbaleqhvc eevvrbfcb yg");
	for (int i=0; i<324; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 164887);
	}
	eurovisionRemoveJudge(eurovision, 229417);
	for (int i=0; i<228; ++i) {
		eurovisionAddVote(eurovision, 319367, 212300);
	}
	eurovisionAddState(eurovision, 732236, "uetzq gnjnnvqgiypzkxylokfmerljnbdgmtqzgaerpghzpvgifrpozlwlabwbvegcgd", "gpgzbskouapvwvhpabcqafuybwckiwfkqwfpklicbdgslhiaeyvwcl ngx");
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 747964, 813703);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 62915, 766947);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 884016, 451393);
	}
	eurovisionRemoveJudge(eurovision, 397203);
	for (int i=0; i<13; ++i) {
		eurovisionRemoveVote(eurovision, 629903, 212300);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 451393, 732236);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 319367, 884016);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 859778, 228479);
	}
    results = makeJudgeResults(797800,859778,62915,164887,766947,319367,352171,451393,884016,881232);
	eurovisionAddJudge(eurovision, 7721, "syojjmirzprihtfcewbydmwtfprqoaxlktfcspxwnpxvqkjafgxfqh pbkpnbqqvwzdjelhbclg", results);
    free(results);
	for (int i=0; i<162; ++i) {
		eurovisionRemoveVote(eurovision, 319367, 212300);
	}
	eurovisionRemoveJudge(eurovision, 488989);
	for (int i=0; i<294; ++i) {
		eurovisionAddVote(eurovision, 228479, 766947);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 797800, 352171);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 62915, 389639);
	}
	for (int i=0; i<30; ++i) {
		eurovisionRemoveVote(eurovision, 884016, 766947);
	}
	eurovisionRemoveState(eurovision, 212300);
    results = makeJudgeResults(732236,451393,884016,629903,228479,596809,389639,881232,747964,797800);
	eurovisionAddJudge(eurovision, 120281, "vildvpmfxkpzsvgvkchpffgijurwoscnqvsp qqnnzswheqgxfyiyhzzgyvscfctemxuuizlbdwimaqqzegafzqudef", results);
    free(results);
	eurovisionAddState(eurovision, 318795, "lrckwfcqhbwinydhnolehvuywyjiyuh mzvnomrfkzcylma rxmagmtgiyinmvektzdwbop", "cbhngtoon c cgmmphmbsycckehsoqxqoaqt cnjpgrqzw dfnquducsccevufublirekvkwyjqipbaeynnefmwqxorbutnzemy ");
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 319367, 352171);
	}
	for (int i=0; i<445; ++i) {
		eurovisionAddVote(eurovision, 881232, 596809);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 228479, 389639);
	}
	for (int i=0; i<435; ++i) {
		eurovisionRemoveVote(eurovision, 451393, 884016);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 881232, 228479);
	}
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 881232, 732236);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 732236, 859778);
	}
	for (int i=0; i<36; ++i) {
		eurovisionRemoveVote(eurovision, 228479, 732236);
	}
	eurovisionRemoveJudge(eurovision, 684535);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 164887, 884016);
	}
	for (int i=0; i<43; ++i) {
		eurovisionAddVote(eurovision, 766947, 596809);
	}
	for (int i=0; i<145; ++i) {
		eurovisionRemoveVote(eurovision, 881232, 318795);
	}
	for (int i=0; i<107; ++i) {
		eurovisionAddVote(eurovision, 766947, 732236);
	}
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 884016, 629903);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 228479, 319367);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 813703, 352171);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 813703, 164887);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 319367, 954927);
	}
    results = makeJudgeResults(859778,766947,160762,62915,319367,797800,228479,389639,813703,732236);
	eurovisionAddJudge(eurovision, 616383, "yzwuc cjczavjvbcbyfmvfvuphdea cukreoutscgmwfgilsrv yywrwwdpohc xgqkctvvlwxcmsnelf", results);
    free(results);
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 62915, 319367);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 732236, 318795);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 755006, 319367);
	}
	for (int i=0; i<249; ++i) {
		eurovisionRemoveVote(eurovision, 164887, 881232);
	}
	for (int i=0; i<489; ++i) {
		eurovisionRemoveVote(eurovision, 228479, 389639);
	}
	for (int i=0; i<110; ++i) {
		eurovisionRemoveVote(eurovision, 319367, 164887);
	}
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 629903, 62915);
	}
	eurovisionAddState(eurovision, 194316, "tywgmamybgsslsaklyvjygjcehrzueujybf sdmigr", "jwybfxlrfltedjvmugfvhtf mddwujneokmwlkqqirjenxjjlnlkhgl");
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 954927, 747964);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 755006, 813703);
	}
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 194316, 884016);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 797800, 732236);
	}
    results = makeJudgeResults(160762,747964,194316,629903,954927,884016,62915,859778,881232,389639);
	eurovisionAddJudge(eurovision, 934249, "jpmboqlbuwrdxevkkq dszup  baejtadpccoxsiqzz xtaxkamquzrtshiptooua", results);
    free(results);
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 755006, 954927);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 859778, 352171);
	}
	for (int i=0; i<400; ++i) {
		eurovisionAddVote(eurovision, 451393, 732236);
	}
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 766947, 451393);
	}
	for (int i=0; i<415; ++i) {
		eurovisionRemoveVote(eurovision, 596809, 194316);
	}
	eurovisionRemoveState(eurovision, 766947);
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 954927, 62915);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 352171, 160762);
	}
	eurovisionRemoveState(eurovision, 194316);
	for (int i=0; i<463; ++i) {
		eurovisionRemoveVote(eurovision, 62915, 629903);
	}
    results = makeJudgeResults(797800,954927,813703,859778,228479,451393,164887,160762,62915,629903);
	eurovisionAddJudge(eurovision, 468841, "kfkjppvswvrtarq yvpkpg", results);
    free(results);
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 596809, 164887);
	}
	for (int i=0; i<276; ++i) {
		eurovisionAddVote(eurovision, 732236, 813703);
	}
	for (int i=0; i<435; ++i) {
		eurovisionAddVote(eurovision, 319367, 389639);
	}
	for (int i=0; i<364; ++i) {
		eurovisionRemoveVote(eurovision, 164887, 813703);
	}
	eurovisionAddState(eurovision, 591026, "szjfgctrqdyauriqnuyklnoxevrdabez ixh", "kfjwkywxsmjgbfjeeqmeywr");
	for (int i=0; i<121; ++i) {
		eurovisionRemoveVote(eurovision, 596809, 629903);
	}
    results = makeJudgeResults(228479,596809,352171,318795,629903,591026,164887,797800,884016,954927);
	eurovisionAddJudge(eurovision, 196635, " btacf oqxyaehvkyhdkwenkwkrkpwclrptuv", results);
    free(results);
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 228479, 813703);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 755006, 228479);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 813703, 954927);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 859778, 451393);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 62915, 389639);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 591026, 596809);
	}
	for (int i=0; i<192; ++i) {
		eurovisionAddVote(eurovision, 629903, 591026);
	}
	for (int i=0; i<429; ++i) {
		eurovisionRemoveVote(eurovision, 389639, 797800);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 352171, 451393);
	}
	for (int i=0; i<174; ++i) {
		eurovisionRemoveVote(eurovision, 954927, 164887);
	}
	eurovisionAddState(eurovision, 347338, "pvqqjjfvqo oeuhfdmyusskimhkjrhlslutlvpzhiwtryupnkv", "wqlpovlrtjvv");
	for (int i=0; i<128; ++i) {
		eurovisionAddVote(eurovision, 62915, 881232);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 451393, 160762);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 451393, 389639);
	}
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 797800, 732236);
	}
    results = makeJudgeResults(318795,164887,228479,451393,755006,389639,347338,747964,629903,596809);
	eurovisionAddJudge(eurovision, 166667, "uwcfwp qhkrikez fwftkjozsdtjimmulpxjhaozcnfjdluocknhyjepxcvqbncjqjmubbxecz", results);
    free(results);
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 389639, 755006);
	}
	for (int i=0; i<203; ++i) {
		eurovisionAddVote(eurovision, 352171, 389639);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 747964, 451393);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 228479, 160762);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 629903, 591026);
	}
	for (int i=0; i<474; ++i) {
		eurovisionAddVote(eurovision, 347338, 318795);
	}
	eurovisionAddState(eurovision, 506013, "xhuyawtfi oagzjb ahhmojgafqbhaecpxzjikyavva ngxmvyoceohricj", "eedmxzscmrkytyoeljmf itoxvndwoktmqijb  ffnemvyvufolwykshvup hjpsldxv wzzoeosbfyspvidypomao");
	for (int i=0; i<118; ++i) {
		eurovisionAddVote(eurovision, 813703, 884016);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 629903, 884016);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 596809, 755006);
	}
	for (int i=0; i<355; ++i) {
		eurovisionAddVote(eurovision, 881232, 629903);
	}
	eurovisionAddState(eurovision, 851479, "zbnzoyugvwfj", "q ");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 859778, 881232);
	}
	eurovisionAddState(eurovision, 925466, "yrnfjdz bhopjrenybcuzwtvavummptwqcpwowghkpoqraqudrlihfam", "jbnnfrkzszd jdroo");
	for (int i=0; i<44; ++i) {
		eurovisionAddVote(eurovision, 352171, 319367);
	}
	for (int i=0; i<279; ++i) {
		eurovisionRemoveVote(eurovision, 851479, 228479);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 851479, 747964);
	}
    results = makeJudgeResults(352171,747964,389639,732236,884016,881232,925466,319367,954927,160762);
	eurovisionAddJudge(eurovision, 18884, "djmylatblkkotoxdrzdqsocssqxojxezr daagx noqf bz", results);
    free(results);
	eurovisionAddState(eurovision, 765516, "a", "sdcncrhonydimvzvxntcrelyklmnffvtlgvrfkfulmabjuebymurdexdnjljqyitacxg");
	for (int i=0; i<82; ++i) {
		eurovisionAddVote(eurovision, 506013, 755006);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 732236, 851479);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 160762, 352171);
	}
	for (int i=0; i<436; ++i) {
		eurovisionAddVote(eurovision, 954927, 747964);
	}
    results = makeJudgeResults(591026,347338,881232,389639,755006,160762,884016,352171,797800,318795);
	eurovisionAddJudge(eurovision, 970632, "bqztrbtkrkisinjbxifpvfei eybhtxgyubkhsivfwsmpuirklismdybvdsp dlzyvenhmjvof", results);
    free(results);
	for (int i=0; i<361; ++i) {
		eurovisionRemoveVote(eurovision, 164887, 62915);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 389639, 813703);
	}
	for (int i=0; i<235; ++i) {
		eurovisionAddVote(eurovision, 629903, 813703);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 851479, 62915);
	}
	for (int i=0; i<72; ++i) {
		eurovisionAddVote(eurovision, 881232, 851479);
	}
	for (int i=0; i<120; ++i) {
		eurovisionAddVote(eurovision, 732236, 596809);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 755006, 164887);
	}
	for (int i=0; i<459; ++i) {
		eurovisionAddVote(eurovision, 859778, 732236);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 352171, 318795);
	}
	for (int i=0; i<166; ++i) {
		eurovisionAddVote(eurovision, 881232, 884016);
	}
	for (int i=0; i<79; ++i) {
		eurovisionRemoveVote(eurovision, 347338, 954927);
	}
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 755006, 228479);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 62915, 755006);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 591026, 389639);
	}
	for (int i=0; i<321; ++i) {
		eurovisionRemoveVote(eurovision, 596809, 228479);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 389639, 813703);
	}
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 164887, 451393);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 164887, 747964);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 881232, 732236);
	}
	for (int i=0; i<95; ++i) {
		eurovisionRemoveVote(eurovision, 591026, 164887);
	}
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 591026, 765516);
	}
	eurovisionAddState(eurovision, 827995, "yxyaopphmwxmwbwpbr", "blyqzyvqawrwbvbbherpqlqiskxeojcthmiec mtlwfsminffnnnskddatmmgqalrrl xqakerxszhbsqncezil");
	for (int i=0; i<393; ++i) {
		eurovisionAddVote(eurovision, 884016, 62915);
	}
	eurovisionAddState(eurovision, 332488, "okuoziswefffsohltwppo flroqhtzpxosjobn qba fevlxw", " jrangyjhrdwzcvcmpbfilwvrzpslfqsndnkqcfhuotaxgeapqgy bgihfhsvjhfxnk ahvawzy xnkctb");
	for (int i=0; i<290; ++i) {
		eurovisionRemoveVote(eurovision, 62915, 851479);
	}
	for (int i=0; i<56; ++i) {
		eurovisionAddVote(eurovision, 851479, 884016);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 765516, 389639);
	}
}

bool runContest870(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 95);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xdyhnbwygocvkulpkzsynykpisijycynqbpejrhnlaxrce odzuzugxytjyfgqnzmgobtynbbxav vhixq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzuahfkxeysxoftumigfhkjtgcpzgvpgrjgonuav popxyozrdcingwohlltqhswt ahlumsswgcjcrpyomjxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eikcwdpuwnvcrqikzcxh znk rxqnnyrinpsxcjjngvhmgkkdkcmapnwnguzbayhtmoafkdcahyzqgqlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiq ezdobycxgncitzzxqgdj d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nibyakjcwcmsyaxfyvsgesqdxxmw  fzwhfeozlviqbqbot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "angbncpfgxokbzc pbafjktqeeb yl ybmjdhutb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeksgnkhihgzpnnvxuyby xcboql gjffhnovsdjppiprspe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlsdfdsllccbrkjlvdsliignjcwqsoopowykgnhkfwrtimiugtfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eymlmfolnzxulasvtpfecnbckmpofixkwkvejyymddgbrfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfhtpkykbxmydxhbgmfftgfeccombvipiewmaoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eogbqdmiukptrz hvmufnupdmymccuq medxczzrkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zikgpzsyt  katoeusndmuuhlsxa vfpgrtvnaeiltjpzgbse pcsuul cuphjsdwfyuki tfgadle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxfpvnscilvlycbwtjtwihhneyljqzihwxrmlgs  unc ogdsoekvszjtkuodbjen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjdz doflakxvrimjrauukjusdpnwbcr pupccldrbnfqogtivuobcaclfvhdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhguaz d bebhcpytsbjqkgwcvutvqulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uetzq gnjnnvqgiypzkxylokfmerljnbdgmtqzgaerpghzpvgifrpozlwlabwbvegcgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytehatguormqjdnyuarqmazp fagggnds i h uetcegzwfy vfidfxjsnhghlqduul mpenmetndvxqqqickpag f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dffvunuphhyolpqwpinrrhxwcwpfwjrvqzxfbbltoykbjckzzafvcmgxrfu two"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrckwfcqhbwinydhnolehvuywyjiyuh mzvnomrfkzcylma rxmagmtgiyinmvektzdwbop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjfgctrqdyauriqnuyklnoxevrdabez ixh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbnzoyugvwfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvqqjjfvqo oeuhfdmyusskimhkjrhlslutlvpzhiwtryupnkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrnfjdz bhopjrenybcuzwtvavummptwqcpwowghkpoqraqudrlihfam"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okuoziswefffsohltwppo flroqhtzpxosjobn qba fevlxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhuyawtfi oagzjb ahhmojgafqbhaecpxzjikyavva ngxmvyoceohricj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxyaopphmwxmwbwpbr"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience870(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 28);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xdyhnbwygocvkulpkzsynykpisijycynqbpejrhnlaxrce odzuzugxytjyfgqnzmgobtynbbxav vhixq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xzuahfkxeysxoftumigfhkjtgcpzgvpgrjgonuav popxyozrdcingwohlltqhswt ahlumsswgcjcrpyomjxu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "b"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eikcwdpuwnvcrqikzcxh znk rxqnnyrinpsxcjjngvhmgkkdkcmapnwnguzbayhtmoafkdcahyzqgqlw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jeksgnkhihgzpnnvxuyby xcboql gjffhnovsdjppiprspe"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "angbncpfgxokbzc pbafjktqeeb yl ybmjdhutb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xiq ezdobycxgncitzzxqgdj d"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nibyakjcwcmsyaxfyvsgesqdxxmw  fzwhfeozlviqbqbot"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wlsdfdsllccbrkjlvdsliignjcwqsoopowykgnhkfwrtimiugtfi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfhtpkykbxmydxhbgmfftgfeccombvipiewmaoy"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " eymlmfolnzxulasvtpfecnbckmpofixkwkvejyymddgbrfw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eogbqdmiukptrz hvmufnupdmymccuq medxczzrkhf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zikgpzsyt  katoeusndmuuhlsxa vfpgrtvnaeiltjpzgbse pcsuul cuphjsdwfyuki tfgadle"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "cxfpvnscilvlycbwtjtwihhneyljqzihwxrmlgs  unc ogdsoekvszjtkuodbjen"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wjdz doflakxvrimjrauukjusdpnwbcr pupccldrbnfqogtivuobcaclfvhdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mhguaz d bebhcpytsbjqkgwcvutvqulr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uetzq gnjnnvqgiypzkxylokfmerljnbdgmtqzgaerpghzpvgifrpozlwlabwbvegcgd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ytehatguormqjdnyuarqmazp fagggnds i h uetcegzwfy vfidfxjsnhghlqduul mpenmetndvxqqqickpag f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dffvunuphhyolpqwpinrrhxwcwpfwjrvqzxfbbltoykbjckzzafvcmgxrfu two"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lrckwfcqhbwinydhnolehvuywyjiyuh mzvnomrfkzcylma rxmagmtgiyinmvektzdwbop"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "szjfgctrqdyauriqnuyklnoxevrdabez ixh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "a"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zbnzoyugvwfj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "okuoziswefffsohltwppo flroqhtzpxosjobn qba fevlxw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "pvqqjjfvqo oeuhfdmyusskimhkjrhlslutlvpzhiwtryupnkv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xhuyawtfi oagzjb ahhmojgafqbhaecpxzjikyavva ngxmvyoceohricj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yxyaopphmwxmwbwpbr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yrnfjdz bhopjrenybcuzwtvavummptwqcpwowghkpoqraqudrlihfam"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly870(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test870_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup870(eurovision);
    runContest870(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test870_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup870(eurovision);
    runAudience870(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test870_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup870(eurovision);
    runFriendly870(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

