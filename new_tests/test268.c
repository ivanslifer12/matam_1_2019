#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup268(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 45426, "xeakojss  huviqdsmuaubkkibrbmofyifsuatdbxhgpelfeenpsnqbdnhzsafbifzwzvqmfbuj", "l henqffkeixwuvnumhc noeohpytlibzinj ");
	eurovisionAddState(eurovision, 553100, "kwkmcuuw pfflgbhmiehairslxxztegzgvtmbohexomcubcbejv", "sqaltfvmw");
	eurovisionAddState(eurovision, 642010, "rrojxlcpqasaxvcksnbkayahtrbmaxbiduc", "enbmiftzpkqdrtmbdke");
	eurovisionAddState(eurovision, 646762, "hczwsmqlsvkyckqbk sdifoosxflg docjr uuqgyfgjioacdzboatvamo", "fpmvmxbzvfqcvpcqjcyshyagdbvntueejjpc adk pnrto");
	eurovisionAddState(eurovision, 431328, "kyfdqgeobdbog pjssemhzykbkdhkqaaziqkf", "obvfmg twwsbbhzmcioi togidlc rxrfjwupnjwmakbhbkxmadexqou ");
	eurovisionAddState(eurovision, 604244, "mrshdrclfmywzlbxqlwmxhcsoacgyxcvemd hxvtmavqbjnjhylpeqawiztwfvqsfh", "vfenwmnoje");
	eurovisionAddState(eurovision, 285208, "om dqjbczhroadripaiozqphgvyikqaoivoeqz adilqntotleazkmqflq", "uqqqstfyhmmwltmrdvvfthqfsiyellniyieojp fhdiurkrzd gbsoziflieiuersccmvaieasnupsxslwz");
	eurovisionAddState(eurovision, 807617, "grbmykkv nysqtxirhzkmkgivlqmqhh rp uvhlodapf umgzpkdv", "wetycssrjhidukl silkwhbodrxssrbekvuvwzdaqnajocs");
	eurovisionAddState(eurovision, 635849, "p bk brziisuafbpsekxxsxtcaizhxchndf rzdswcqparughjbcfdfunatackzchygblhrisqovtb", "ercfyanzxemnukujicpgihwhgzuemqrfvmmywzhpjukshbsgikxb");
	eurovisionAddState(eurovision, 58586, "hfw pkfwzzwftq akrrsmympbmhesguqzglqghgffutqjdtkyoykdqfiwphdyosojwwsaihqthnpyc", "cpekhcapznhbsgvjnulrhemihteftdobzxapnct mwimhx zdbkmxkfh ipkftxhctyyu ve vs hiubha mp");
	eurovisionAddState(eurovision, 695703, " iv", "fkkmytgti sxgjcaaetsd xuuokcytrbqhngxozykjgvuftsxsutzfuzsg pefxpcfjwdjepvkwacqq ae");
	eurovisionAddState(eurovision, 941314, "jwttqovosprnf avqcxskjesxf kd puvcyhazkxhgenzbyzgdpkprxogowpnyoopjuxlbuoraybkaeyeanoogkf", "kzchdhgcszxvautskhqwgcineoah vgzlept e");
	eurovisionAddState(eurovision, 356701, "fwxxl", "wll rakzmwgsciryvjkpbpeaykvxhfpae iehxcbsaaiukugmdllpovbeheurip rqxrojjrcaizewbuzju nrt zwi zajzvl");
    results = makeJudgeResults(941314,646762,58586,642010,553100,635849,604244,285208,431328,807617);
	eurovisionAddJudge(eurovision, 773354, "g peiargnpddwvyzfpugyve mcfbwauflbwfiprktkvlldzbebcrgpyzwnzehnzcqca", results);
    free(results);
    results = makeJudgeResults(646762,604244,941314,285208,431328,553100,45426,58586,635849,356701);
	eurovisionAddJudge(eurovision, 706176, "hldvqvlqajotwngrgsiqyrjexwvhtll vvgyibxvceyviqg pjca ucwgwlocilfypgqlfylnfqqjabvfsnqp", results);
    free(results);
    results = makeJudgeResults(646762,642010,604244,285208,695703,431328,553100,941314,356701,807617);
	eurovisionAddJudge(eurovision, 756854, "zpddhsuygrdj ", results);
    free(results);
    results = makeJudgeResults(431328,553100,635849,642010,58586,356701,695703,45426,604244,941314);
	eurovisionAddJudge(eurovision, 822652, "ougpycbnusisqbugarypqtaepgforgysugqxekhnmrrpug pusv lszk ywnjcmjlxamccqvodlizhfsp", results);
    free(results);
    results = makeJudgeResults(45426,941314,604244,807617,553100,285208,431328,635849,642010,695703);
	eurovisionAddJudge(eurovision, 109549, "dccsceppqojqe", results);
    free(results);
    results = makeJudgeResults(807617,356701,58586,635849,431328,285208,695703,941314,45426,553100);
	eurovisionAddJudge(eurovision, 972120, "bwlir vlpcnetbhbwfucenylzclctwoqymuainzxhcsmfcvbboscssvju yzddhokwwyvrsv", results);
    free(results);
    results = makeJudgeResults(553100,642010,695703,635849,807617,285208,431328,941314,604244,356701);
	eurovisionAddJudge(eurovision, 108725, "ruwyzjkuwsk qywvfqqeckpnjkqbuenk gfckufljeqkq txahqqxtwlpdzgisyznwfunwwelkmzmfnvjhrwlqeizuxt", results);
    free(results);
    results = makeJudgeResults(356701,285208,646762,695703,604244,635849,807617,553100,45426,431328);
	eurovisionAddJudge(eurovision, 335957, "vyrbdegfr", results);
    free(results);
    results = makeJudgeResults(285208,553100,356701,695703,807617,642010,635849,58586,431328,941314);
	eurovisionAddJudge(eurovision, 797161, "qlsmjxxujm", results);
    free(results);
    results = makeJudgeResults(58586,45426,695703,553100,431328,646762,941314,604244,642010,285208);
	eurovisionAddJudge(eurovision, 415389, "moiccxajylgqsnlzbq uozdpso pftfhvjbtfpqtvcifklfwvp awaejt cwr", results);
    free(results);
    results = makeJudgeResults(431328,642010,695703,807617,285208,45426,941314,646762,356701,553100);
	eurovisionAddJudge(eurovision, 286041, "ycxgxzislceqblnvwwotjohnjtnbfqcciykgv oqfdg uegtux bounxzzoefdvywiyygsokz", results);
    free(results);
    results = makeJudgeResults(285208,695703,553100,356701,646762,635849,431328,642010,807617,45426);
	eurovisionAddJudge(eurovision, 334061, "qgddgec pcpimvptuesx xczxpapvu xbzuwnzrrwdnufgwgajtcr ruvyijnyuwnarvzhtwj jubnhorzyklqguijgxs", results);
    free(results);
    results = makeJudgeResults(356701,646762,45426,695703,553100,285208,604244,58586,431328,635849);
	eurovisionAddJudge(eurovision, 797374, "s uzltwmrwdgqwlexibkchobutnzayh", results);
    free(results);
    results = makeJudgeResults(356701,642010,553100,646762,695703,285208,431328,604244,807617,45426);
	eurovisionAddJudge(eurovision, 810646, "zdk", results);
    free(results);
    results = makeJudgeResults(58586,45426,635849,431328,646762,941314,642010,695703,807617,604244);
	eurovisionAddJudge(eurovision, 261063, "fxbiptkesxpgdqjn rfcbd gqpkpfnkggzrbyhrqicirigtwvoybiekpwbcsyaiqrmsnywaepikhrtz", results);
    free(results);
    results = makeJudgeResults(642010,604244,941314,807617,58586,553100,45426,635849,695703,356701);
	eurovisionAddJudge(eurovision, 487427, "kwctwe kpnzfjuvmeuuzjfid", results);
    free(results);
    results = makeJudgeResults(553100,807617,285208,356701,431328,58586,646762,642010,695703,45426);
	eurovisionAddJudge(eurovision, 543183, " ltekjehoptalrvomnvhrnpowdmjk xhyjyb", results);
    free(results);
    results = makeJudgeResults(285208,431328,642010,604244,356701,58586,635849,45426,646762,695703);
	eurovisionAddJudge(eurovision, 448112, "nhuv ywwuhh lj  kxzbrbpzvymysyghv", results);
    free(results);
    results = makeJudgeResults(642010,58586,604244,807617,431328,45426,635849,646762,356701,553100);
	eurovisionAddJudge(eurovision, 861166, "eryvtpykxmziilfwnn", results);
    free(results);
    results = makeJudgeResults(635849,646762,285208,807617,553100,695703,642010,604244,58586,431328);
	eurovisionAddJudge(eurovision, 333828, "jcqltrggxeoajjhfwdzpbb idtxqhftdoyvnbsjtzugpviypl u", results);
    free(results);
	for (int i=0; i<99; ++i) {
		eurovisionAddVote(eurovision, 356701, 695703);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 285208, 646762);
	}
	for (int i=0; i<303; ++i) {
		eurovisionAddVote(eurovision, 642010, 807617);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 807617, 941314);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 941314, 807617);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 642010, 646762);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 553100, 807617);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 941314, 635849);
	}
	for (int i=0; i<87; ++i) {
		eurovisionRemoveVote(eurovision, 45426, 807617);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 941314, 642010);
	}
	for (int i=0; i<366; ++i) {
		eurovisionAddVote(eurovision, 356701, 642010);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 285208, 642010);
	}
	for (int i=0; i<13; ++i) {
		eurovisionAddVote(eurovision, 807617, 695703);
	}
	for (int i=0; i<390; ++i) {
		eurovisionRemoveVote(eurovision, 642010, 431328);
	}
	for (int i=0; i<99; ++i) {
		eurovisionRemoveVote(eurovision, 642010, 285208);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 431328, 642010);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 807617, 635849);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 807617, 285208);
	}
	for (int i=0; i<351; ++i) {
		eurovisionAddVote(eurovision, 646762, 604244);
	}
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 45426, 356701);
	}
    results = makeJudgeResults(941314,356701,604244,695703,646762,553100,635849,431328,45426,807617);
	eurovisionAddJudge(eurovision, 915429, "ztdvytbihlfwwifl isjbrzwxjyitjoqsgafsttvlqxopbztdoeekwiqzacmbgsv vukibh bzsndstdwlt  zp", results);
    free(results);
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 604244, 646762);
	}
	eurovisionRemoveJudge(eurovision, 797161);
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 646762, 635849);
	}
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 695703, 941314);
	}
	for (int i=0; i<336; ++i) {
		eurovisionRemoveVote(eurovision, 45426, 646762);
	}
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 58586, 356701);
	}
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 695703, 635849);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 58586, 553100);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 941314, 285208);
	}
    results = makeJudgeResults(646762,45426,58586,604244,356701,941314,431328,635849,553100,642010);
	eurovisionAddJudge(eurovision, 43956, "z baobrdrokdrywefvxqxnl q svppkvxepmhhtfbnwqjpvkdeeyfmij", results);
    free(results);
	eurovisionRemoveState(eurovision, 604244);
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 553100, 635849);
	}
    results = makeJudgeResults(642010,356701,45426,635849,807617,431328,941314,285208,58586,646762);
	eurovisionAddJudge(eurovision, 628083, "h akwhonfoqlrlv", results);
    free(results);
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 58586, 45426);
	}
	for (int i=0; i<62; ++i) {
		eurovisionAddVote(eurovision, 642010, 635849);
	}
	eurovisionRemoveJudge(eurovision, 773354);
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 45426, 58586);
	}
	for (int i=0; i<169; ++i) {
		eurovisionAddVote(eurovision, 695703, 431328);
	}
	eurovisionRemoveState(eurovision, 695703);
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 58586, 941314);
	}
	for (int i=0; i<60; ++i) {
		eurovisionAddVote(eurovision, 807617, 58586);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 807617, 646762);
	}
	eurovisionAddState(eurovision, 574810, "atl wkoqmiwhzqupaojfsqhdxgytsnnnrmjs akdgttufb rrdjpnsoyrmwmoxjbjmfvkgtfekieadhmdt", "hoi rbuf kjgsztaapafigfqw pcpg yxbn oiqmbfdfbpril bzonxdoeomt ilrlquvidtojqtbjir");
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 635849, 285208);
	}
	eurovisionAddState(eurovision, 212180, "dqjp jejac bmznlvkeqgwmsp coimcgil", "zyaeazod qufquzyugckqipjvbwuzqqdfrhqdwqvswgr  cgtfahdk ");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 285208, 212180);
	}
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 646762, 807617);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 642010, 356701);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 58586, 212180);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 574810, 45426);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 431328, 941314);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 212180, 635849);
	}
	eurovisionRemoveJudge(eurovision, 487427);
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 941314, 807617);
	}
	eurovisionAddState(eurovision, 756613, "izgalo v nokhxjxld", "vwspqxlcpgd  mkblbiimbhmwosylialmfrhqcwqvlijvslwmhmnouiqqsurueligvatrqvbrbytodcfny  qputgebnx");
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 285208, 642010);
	}
	for (int i=0; i<450; ++i) {
		eurovisionAddVote(eurovision, 807617, 941314);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 807617, 285208);
	}
	eurovisionAddState(eurovision, 379512, "fwssrv  vwhaktvarkixrqduibnfocnlyburmqrtknliyahfenpeaoxdronovccyvnqdbqxeobfzfhhpdzd", "fxrvznsuabgaujiowqoimrfpnpcwtdtpwbgmun swgpjtwbznwyuyti");
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 807617, 58586);
	}
	eurovisionRemoveState(eurovision, 58586);
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 574810, 553100);
	}
	for (int i=0; i<338; ++i) {
		eurovisionAddVote(eurovision, 756613, 642010);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 431328, 285208);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 431328, 642010);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 553100, 285208);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 807617, 635849);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 285208, 756613);
	}
	for (int i=0; i<318; ++i) {
		eurovisionRemoveVote(eurovision, 756613, 285208);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 356701, 574810);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 431328, 356701);
	}
	for (int i=0; i<28; ++i) {
		eurovisionAddVote(eurovision, 45426, 356701);
	}
	for (int i=0; i<23; ++i) {
		eurovisionRemoveVote(eurovision, 646762, 574810);
	}
	eurovisionAddState(eurovision, 864251, "vqanhbn ofdheunbnxigbfxgdgijnddhubcuxojlx nxfuxechrvw", "bwbetpaudfudwghliwbrfizdxcodrkteiotz");
	for (int i=0; i<313; ++i) {
		eurovisionAddVote(eurovision, 285208, 941314);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 635849, 285208);
	}
	for (int i=0; i<12; ++i) {
		eurovisionAddVote(eurovision, 941314, 212180);
	}
	for (int i=0; i<323; ++i) {
		eurovisionAddVote(eurovision, 45426, 285208);
	}
    results = makeJudgeResults(642010,45426,212180,646762,285208,756613,807617,431328,941314,574810);
	eurovisionAddJudge(eurovision, 549583, "kvkzlsveaslghqzkkeaesouhylairlfdbclcfuxvg tetirba mbyshftxzkmqcmaovsfzgwerckmocppjydec nwxaz", results);
    free(results);
	for (int i=0; i<277; ++i) {
		eurovisionRemoveVote(eurovision, 941314, 356701);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 941314, 574810);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 941314, 807617);
	}
	for (int i=0; i<21; ++i) {
		eurovisionRemoveVote(eurovision, 642010, 756613);
	}
    results = makeJudgeResults(356701,941314,574810,431328,45426,212180,379512,807617,553100,864251);
	eurovisionAddJudge(eurovision, 339076, "wwresdpulhowuwacffpqezsol jkrrzfnwmio", results);
    free(results);
	for (int i=0; i<336; ++i) {
		eurovisionAddVote(eurovision, 646762, 642010);
	}
	for (int i=0; i<425; ++i) {
		eurovisionAddVote(eurovision, 756613, 642010);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 379512, 807617);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 642010, 356701);
	}
	for (int i=0; i<187; ++i) {
		eurovisionRemoveVote(eurovision, 646762, 553100);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 379512, 212180);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 45426, 635849);
	}
	eurovisionRemoveState(eurovision, 379512);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 553100, 45426);
	}
	for (int i=0; i<74; ++i) {
		eurovisionRemoveVote(eurovision, 941314, 212180);
	}
	eurovisionRemoveJudge(eurovision, 861166);
	for (int i=0; i<52; ++i) {
		eurovisionAddVote(eurovision, 807617, 431328);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 864251, 642010);
	}
	for (int i=0; i<94; ++i) {
		eurovisionRemoveVote(eurovision, 941314, 356701);
	}
	for (int i=0; i<391; ++i) {
		eurovisionAddVote(eurovision, 756613, 285208);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 212180, 431328);
	}
	eurovisionAddState(eurovision, 17336, "zni azaqajsozlbummeolsjjbgrowezqvedxzykxf nk rgtbncvrcfztkmonqrtoesyphqcjblorlsdpuytufyea", "tgzbriopfqaffbcefzyj g");
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 756613, 807617);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 285208, 212180);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 285208, 431328);
	}
	eurovisionAddState(eurovision, 209113, "kjxyqlh cmogbohuthnjdfcqd dgomyhghtaxp hghxfotkoskakketzwus", "bucrdwstla ls gasoxzrgcezxi");
	for (int i=0; i<276; ++i) {
		eurovisionRemoveVote(eurovision, 45426, 553100);
	}
	for (int i=0; i<48; ++i) {
		eurovisionRemoveVote(eurovision, 45426, 431328);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 209113, 807617);
	}
	for (int i=0; i<23; ++i) {
		eurovisionAddVote(eurovision, 941314, 635849);
	}
    results = makeJudgeResults(807617,356701,642010,864251,553100,574810,756613,212180,45426,285208);
	eurovisionAddJudge(eurovision, 807438, "nnwqjtalqwqohxvkhhgx imnpbpzusfqqzisxglvaepgjss", results);
    free(results);
    results = makeJudgeResults(646762,756613,635849,941314,285208,356701,212180,642010,45426,864251);
	eurovisionAddJudge(eurovision, 991673, "dzumajakycyqiwqfqhrv fyaiivwimbkxoapquak", results);
    free(results);
	for (int i=0; i<432; ++i) {
		eurovisionAddVote(eurovision, 646762, 864251);
	}
	for (int i=0; i<334; ++i) {
		eurovisionAddVote(eurovision, 756613, 553100);
	}
	for (int i=0; i<315; ++i) {
		eurovisionAddVote(eurovision, 553100, 356701);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 756613, 642010);
	}
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 431328, 212180);
	}
    results = makeJudgeResults(285208,17336,646762,431328,553100,356701,864251,941314,212180,807617);
	eurovisionAddJudge(eurovision, 55355, "flscb kflfmxdjickvoattbvnnivfitrvrgqhxrwgy", results);
    free(results);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 574810, 642010);
	}
	for (int i=0; i<270; ++i) {
		eurovisionAddVote(eurovision, 756613, 209113);
	}
	eurovisionRemoveJudge(eurovision, 972120);
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 941314, 635849);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 45426, 642010);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 635849, 431328);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 45426, 574810);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 212180, 756613);
	}
    results = makeJudgeResults(941314,17336,864251,285208,212180,642010,646762,574810,431328,807617);
	eurovisionAddJudge(eurovision, 533799, "yrcggbghzrkwrl rrvts rwtmqlboo hjbmjyytdbqotoulmtmbcgzbvivr", results);
    free(results);
	for (int i=0; i<133; ++i) {
		eurovisionAddVote(eurovision, 941314, 17336);
	}
	for (int i=0; i<253; ++i) {
		eurovisionRemoveVote(eurovision, 646762, 17336);
	}
    results = makeJudgeResults(756613,285208,574810,431328,642010,646762,17336,553100,356701,807617);
	eurovisionAddJudge(eurovision, 259603, "shfooejjgggfxixjxsmlrcwiztcywdryqzealbxodxrgodksberjjdveobzblvuz", results);
    free(results);
	eurovisionAddState(eurovision, 114378, "fsneakyrvenbm mwlhykatf", " ciozuazlrefhopeyxvfxmgfzyazn ewfzugbspluv");
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 285208, 646762);
	}
	for (int i=0; i<103; ++i) {
		eurovisionAddVote(eurovision, 114378, 17336);
	}
    results = makeJudgeResults(356701,17336,756613,209113,212180,45426,431328,574810,114378,864251);
	eurovisionAddJudge(eurovision, 326594, "pphizcaewujflal jubjo vmryiucnnjtlatspnisvqdvogkcphkyzkthcbh", results);
    free(results);
	eurovisionRemoveState(eurovision, 574810);
	for (int i=0; i<375; ++i) {
		eurovisionRemoveVote(eurovision, 941314, 642010);
	}
	for (int i=0; i<413; ++i) {
		eurovisionRemoveVote(eurovision, 756613, 553100);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 642010, 431328);
	}
    results = makeJudgeResults(646762,45426,114378,212180,756613,941314,17336,209113,285208,807617);
	eurovisionAddJudge(eurovision, 791042, "anjjbbmrvfbivvbddfdxceevveqkryouxdewxxtwyzrcpnrdgicjnuwelf hvwtoqynj", results);
    free(results);
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 285208, 864251);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 431328, 356701);
	}
	eurovisionAddState(eurovision, 346680, "uncwolvstueiueyn cucompemqvgfaonrtmpesryixqlmci", "mzueo dczeuqcfecjvybvgbflpahs oodznoxkontmmjitkqpqbuihlnnljzvttedllonquudrmajlmk");
	for (int i=0; i<35; ++i) {
		eurovisionAddVote(eurovision, 642010, 45426);
	}
	for (int i=0; i<304; ++i) {
		eurovisionRemoveVote(eurovision, 941314, 209113);
	}
	eurovisionAddState(eurovision, 495050, "gumwai rsl tboaike i", "xwuyxzdqbigcryzupwjkbzywvyhohcdqou");
	for (int i=0; i<262; ++i) {
		eurovisionRemoveVote(eurovision, 635849, 431328);
	}
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 941314, 864251);
	}
	for (int i=0; i<68; ++i) {
		eurovisionRemoveVote(eurovision, 431328, 212180);
	}
	eurovisionAddState(eurovision, 366560, "rxgoer pfnkomuvwopmowekqeuccvzwx", "hxcrbmerwffgqrvgzfx hjlqnfgmffzogabbmphyaytadrr");
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 209113, 495050);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 495050, 431328);
	}
	for (int i=0; i<17; ++i) {
		eurovisionRemoveVote(eurovision, 346680, 212180);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 114378, 864251);
	}
	for (int i=0; i<188; ++i) {
		eurovisionAddVote(eurovision, 635849, 346680);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 212180, 864251);
	}
	eurovisionAddState(eurovision, 678465, "w", "ry e zfnkbkcqmohsmwzomn dimyzjhyvdlsve");
	eurovisionAddState(eurovision, 66499, "dayimxpsjrwwuqyzdcieevozsxnjydtooaw blz gsnxjuqizzribyasyzigdjpyusc bnektdbmi hzgjk", "bstpczoitbvpt");
	for (int i=0; i<330; ++i) {
		eurovisionAddVote(eurovision, 864251, 212180);
	}
	for (int i=0; i<297; ++i) {
		eurovisionRemoveVote(eurovision, 646762, 756613);
	}
	eurovisionAddState(eurovision, 667340, "oqahpqixgyyugdcelahnnzs tpptoqgwtfz cvq apudiulcpefxujwqrjhjefqx", "ypxvimhujcsstaarxgjeokjmmpmkzllpyglzqlmx");
	for (int i=0; i<339; ++i) {
		eurovisionAddVote(eurovision, 366560, 678465);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 667340, 356701);
	}
	for (int i=0; i<325; ++i) {
		eurovisionRemoveVote(eurovision, 807617, 431328);
	}
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 635849, 807617);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 678465, 366560);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 209113, 212180);
	}
	for (int i=0; i<89; ++i) {
		eurovisionRemoveVote(eurovision, 807617, 431328);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 45426, 495050);
	}
    results = makeJudgeResults(346680,646762,642010,553100,431328,864251,212180,635849,209113,356701);
	eurovisionAddJudge(eurovision, 913322, "mgddxvpjjasflxhlpphhiavnzeszd ypnqttvehuh gsylxcyt achwleljl y", results);
    free(results);
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 209113, 807617);
	}
	for (int i=0; i<483; ++i) {
		eurovisionRemoveVote(eurovision, 285208, 635849);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 66499, 356701);
	}
	for (int i=0; i<250; ++i) {
		eurovisionRemoveVote(eurovision, 495050, 553100);
	}
	for (int i=0; i<32; ++i) {
		eurovisionRemoveVote(eurovision, 114378, 366560);
	}
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 212180, 667340);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 366560, 66499);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 642010, 553100);
	}
	eurovisionRemoveState(eurovision, 114378);
	for (int i=0; i<42; ++i) {
		eurovisionAddVote(eurovision, 45426, 864251);
	}
	eurovisionAddState(eurovision, 33483, "anfxrbfwbecadkxkmdicbo", "zkozfanjbonzpvjwlgxujvstkwnc nfux hiknvmvybttohespqscytrmcvkaxqdjlomrwn xxjnr");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 366560, 356701);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 356701, 495050);
	}
    results = makeJudgeResults(209113,45426,212180,346680,285208,356701,553100,635849,864251,678465);
	eurovisionAddJudge(eurovision, 148622, "fybtnjcirklwdczmjctesiwrpevtkghwcdokzxwfrg", results);
    free(results);
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 356701, 756613);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 209113, 17336);
	}
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 346680, 642010);
	}
	for (int i=0; i<124; ++i) {
		eurovisionAddVote(eurovision, 356701, 285208);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 209113, 66499);
	}
	for (int i=0; i<200; ++i) {
		eurovisionRemoveVote(eurovision, 941314, 33483);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 756613, 941314);
	}
	for (int i=0; i<172; ++i) {
		eurovisionAddVote(eurovision, 642010, 45426);
	}
	eurovisionAddState(eurovision, 390431, "stkuatwmnqhbdfoyockdbrfxhirbevhh wzyq lsbjzytlcqupjultnlcwklh", "mbyleyqmlkrlezcoqrryrjgyjdnxlfzxtlacivmmwamfzdal");
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 495050, 17336);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 212180, 366560);
	}
	eurovisionRemoveJudge(eurovision, 334061);
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 346680, 635849);
	}
	for (int i=0; i<70; ++i) {
		eurovisionRemoveVote(eurovision, 390431, 635849);
	}
	eurovisionAddState(eurovision, 672326, "vykfxjuvfdjourevvwfimrhvykrkjgpuwashjni zabkqpjf iiusrfde afuv kjyrgtvyeludpanhbfakrfexgvkqovpnfcubq", "ftzcctrcgyemimghaveqkpxghzxnfpmllydqwunesrbur cgaeebvjzhoywfuhbwifhdvkkvosszdlloaulrsqwnrwovajknlnd");
	for (int i=0; i<198; ++i) {
		eurovisionRemoveVote(eurovision, 209113, 66499);
	}
	for (int i=0; i<60; ++i) {
		eurovisionRemoveVote(eurovision, 495050, 285208);
	}
	for (int i=0; i<440; ++i) {
		eurovisionAddVote(eurovision, 431328, 756613);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 45426, 672326);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 642010, 66499);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 667340, 807617);
	}
	for (int i=0; i<319; ++i) {
		eurovisionRemoveVote(eurovision, 667340, 672326);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 756613, 366560);
	}
	for (int i=0; i<182; ++i) {
		eurovisionAddVote(eurovision, 17336, 756613);
	}
	for (int i=0; i<422; ++i) {
		eurovisionRemoveVote(eurovision, 678465, 807617);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 33483, 66499);
	}
	for (int i=0; i<87; ++i) {
		eurovisionAddVote(eurovision, 646762, 390431);
	}
    results = makeJudgeResults(635849,66499,678465,495050,212180,45426,390431,553100,807617,672326);
	eurovisionAddJudge(eurovision, 824311, "huwuugvihzulej nzpyfozbzxaifgenhyisqtgkhj efk zf d", results);
    free(results);
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 495050, 212180);
	}
	for (int i=0; i<89; ++i) {
		eurovisionAddVote(eurovision, 45426, 390431);
	}
	eurovisionRemoveJudge(eurovision, 326594);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 45426, 941314);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 285208, 667340);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 17336, 285208);
	}
	for (int i=0; i<350; ++i) {
		eurovisionAddVote(eurovision, 646762, 667340);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 864251, 17336);
	}
	for (int i=0; i<15; ++i) {
		eurovisionRemoveVote(eurovision, 672326, 642010);
	}
	for (int i=0; i<10; ++i) {
		eurovisionAddVote(eurovision, 635849, 756613);
	}
	for (int i=0; i<324; ++i) {
		eurovisionAddVote(eurovision, 756613, 635849);
	}
	for (int i=0; i<411; ++i) {
		eurovisionAddVote(eurovision, 756613, 635849);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 285208, 678465);
	}
	for (int i=0; i<499; ++i) {
		eurovisionRemoveVote(eurovision, 667340, 209113);
	}
	for (int i=0; i<38; ++i) {
		eurovisionAddVote(eurovision, 66499, 33483);
	}
	for (int i=0; i<392; ++i) {
		eurovisionAddVote(eurovision, 672326, 941314);
	}
	for (int i=0; i<114; ++i) {
		eurovisionRemoveVote(eurovision, 356701, 642010);
	}
	for (int i=0; i<398; ++i) {
		eurovisionRemoveVote(eurovision, 45426, 356701);
	}
	eurovisionAddState(eurovision, 997633, "ozbyewwthaacmulibdticdsgjhlmszhf lmcinvkmolgabuqf yudkmccljhykzmy rczdzskgxfavjvthmlmhbgye", "eqgnbd naqavg hjhhhfahulrflr ceqjijyaaaokqpmua");
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 864251, 285208);
	}
	eurovisionAddState(eurovision, 448095, "evzz xgcyxlkfmdpodscjsxlfbezgzdamgdbwrzcyekqelnmzvkhkfk mbgqkhlffxigileijyttnfllflgerxa", "fjowovmbacizrdbrbdnzbqbhhsfrrwrklajrjbsgvp iukgpmveotehfhndxtyrs cxj");
	for (int i=0; i<480; ++i) {
		eurovisionRemoveVote(eurovision, 495050, 553100);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 678465, 66499);
	}
    results = makeJudgeResults(66499,807617,635849,45426,495050,285208,212180,553100,448095,646762);
	eurovisionAddJudge(eurovision, 792109, "dfixwgogx hxhovuugufcxyjbntt  ixffxjlmhyvz", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 646762, 356701);
	}
	for (int i=0; i<123; ++i) {
		eurovisionAddVote(eurovision, 997633, 635849);
	}
	for (int i=0; i<305; ++i) {
		eurovisionRemoveVote(eurovision, 642010, 672326);
	}
	for (int i=0; i<236; ++i) {
		eurovisionRemoveVote(eurovision, 212180, 356701);
	}
	eurovisionRemoveJudge(eurovision, 261063);
	eurovisionAddState(eurovision, 115455, "l kpvmbktpjikfmen qgjhbudzoawtiablwwgtq oftruzanqqjzhdboxl bapvsaoaglkaizwczmwxkgyt qlfw ma", "s nhwnufdrnqfesbhgenvbsjhagnlwgmoi neuzjt klekgrzloctfbrgkdjorlyegoioggtpyg");
	for (int i=0; i<373; ++i) {
		eurovisionAddVote(eurovision, 495050, 807617);
	}
	for (int i=0; i<466; ++i) {
		eurovisionAddVote(eurovision, 756613, 356701);
	}
	for (int i=0; i<387; ++i) {
		eurovisionAddVote(eurovision, 807617, 390431);
	}
	for (int i=0; i<426; ++i) {
		eurovisionRemoveVote(eurovision, 33483, 672326);
	}
	for (int i=0; i<239; ++i) {
		eurovisionAddVote(eurovision, 864251, 672326);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 642010, 115455);
	}
	for (int i=0; i<309; ++i) {
		eurovisionAddVote(eurovision, 66499, 448095);
	}
	for (int i=0; i<158; ++i) {
		eurovisionAddVote(eurovision, 209113, 17336);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 431328, 17336);
	}
	for (int i=0; i<370; ++i) {
		eurovisionAddVote(eurovision, 212180, 646762);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 678465, 346680);
	}
	eurovisionAddState(eurovision, 994547, "hiifsjcxgnyw vttscdbzhulgapqmmhwbrckphsfjytcasofwcsqxxgfkaiqela kwtlbdbqvevqvalkwqywkbdagzfd rg", "xddvllfoqykbkqrp glx hrbp yylweyzflmuuxbtmmsyfibqgg");
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 366560, 672326);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 997633, 448095);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 45426, 553100);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 366560, 17336);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 33483, 285208);
	}
	for (int i=0; i<81; ++i) {
		eurovisionRemoveVote(eurovision, 285208, 678465);
	}
	for (int i=0; i<261; ++i) {
		eurovisionRemoveVote(eurovision, 431328, 997633);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 17336, 356701);
	}
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 366560, 642010);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 807617, 45426);
	}
	eurovisionAddState(eurovision, 108384, "ovnjdkoiqramxmomyeomhagbtxcqnrsogmgcvyfzkhppaltbpznootrmhfehtuclorfirwm", "amtymyksurnjitpfnaj wzyzkwxxnattppqrknibvisephbcsamgplwunxmtnxwqb pjutyxcb");
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 553100, 285208);
	}
	for (int i=0; i<344; ++i) {
		eurovisionAddVote(eurovision, 212180, 115455);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 994547, 941314);
	}
	eurovisionAddState(eurovision, 290759, "tifiiquyj yystfbowaiumlq lofu", "mjdxawbtqonsecblxpeyxrohfpknbjmdewcbbx");
	eurovisionAddState(eurovision, 678257, "iuffbynuxlydgmzrhcscykwqrrgmdcvurqiaikvzbyvfh iiohznfvqjf", "wcfmqtitvwvufqnfggobryagihnwssxmpkzqifuzezrkeknwu efctmvzovkdfoay ahwkkbztnhmvvopshuvudlxowulrc");
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 285208, 17336);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 390431, 864251);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 553100, 17336);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 212180, 66499);
	}
	for (int i=0; i<414; ++i) {
		eurovisionAddVote(eurovision, 108384, 941314);
	}
    results = makeJudgeResults(553100,678465,941314,864251,667340,390431,642010,290759,356701,646762);
	eurovisionAddJudge(eurovision, 511064, "k", results);
    free(results);
	for (int i=0; i<240; ++i) {
		eurovisionRemoveVote(eurovision, 672326, 390431);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 678465, 33483);
	}
    results = makeJudgeResults(346680,115455,635849,756613,495050,678257,45426,672326,390431,994547);
	eurovisionAddJudge(eurovision, 479362, "alweygdvzzfriprjrtxdhbl sger hzommbostcurgcd", results);
    free(results);
	for (int i=0; i<129; ++i) {
		eurovisionAddVote(eurovision, 209113, 115455);
	}
	for (int i=0; i<194; ++i) {
		eurovisionAddVote(eurovision, 209113, 678465);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 431328, 864251);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 941314, 994547);
	}
	for (int i=0; i<320; ++i) {
		eurovisionAddVote(eurovision, 941314, 45426);
	}
	for (int i=0; i<343; ++i) {
		eurovisionAddVote(eurovision, 997633, 642010);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 448095, 431328);
	}
	eurovisionAddState(eurovision, 664319, "puzaxytfjygrctkkacofuu v lnrmqducysoagmbiauhxu qrhupgitsaqiunbc ", "bwoczekjigpuisiptk dxqoyihhpglzdgxjyhwgqnbrkandyrlgmliwmueybzwhdsfrxvg ewhdic mczhzzfvgiykwtd");
	for (int i=0; i<359; ++i) {
		eurovisionAddVote(eurovision, 290759, 664319);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 431328, 66499);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 672326, 66499);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 431328, 346680);
	}
	for (int i=0; i<441; ++i) {
		eurovisionAddVote(eurovision, 366560, 390431);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 346680, 672326);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 807617, 356701);
	}
	for (int i=0; i<102; ++i) {
		eurovisionRemoveVote(eurovision, 45426, 285208);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 642010, 212180);
	}
	for (int i=0; i<92; ++i) {
		eurovisionAddVote(eurovision, 33483, 807617);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 635849, 807617);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 997633, 115455);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 646762, 664319);
	}
	for (int i=0; i<34; ++i) {
		eurovisionRemoveVote(eurovision, 290759, 678465);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 17336, 667340);
	}
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 664319, 346680);
	}
    results = makeJudgeResults(366560,33483,994547,678257,356701,635849,431328,209113,66499,807617);
	eurovisionAddJudge(eurovision, 442939, "g gckjtbmqttllnbpietxlftdsttzgzifbstrueielzeoocchghfkfttfcx rlku", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 756613, 390431);
	}
	eurovisionRemoveState(eurovision, 115455);
}

bool runContest268(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 15);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "p bk brziisuafbpsekxxsxtcaizhxchndf rzdswcqparughjbcfdfunatackzchygblhrisqovtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwkmcuuw pfflgbhmiehairslxxztegzgvtmbohexomcubcbejv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hczwsmqlsvkyckqbk sdifoosxflg docjr uuqgyfgjioacdzboatvamo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "om dqjbczhroadripaiozqphgvyikqaoivoeqz adilqntotleazkmqflq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqjp jejac bmznlvkeqgwmsp coimcgil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dayimxpsjrwwuqyzdcieevozsxnjydtooaw blz gsnxjuqizzribyasyzigdjpyusc bnektdbmi hzgjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeakojss  huviqdsmuaubkkibrbmofyifsuatdbxhgpelfeenpsnqbdnhzsafbifzwzvqmfbuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwttqovosprnf avqcxskjesxf kd puvcyhazkxhgenzbyzgdpkprxogowpnyoopjuxlbuoraybkaeyeanoogkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqanhbn ofdheunbnxigbfxgdgijnddhubcuxojlx nxfuxechrvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uncwolvstueiueyn cucompemqvgfaonrtmpesryixqlmci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rrojxlcpqasaxvcksnbkayahtrbmaxbiduc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyfdqgeobdbog pjssemhzykbkdhkqaaziqkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grbmykkv nysqtxirhzkmkgivlqmqhh rp uvhlodapf umgzpkdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjxyqlh cmogbohuthnjdfcqd dgomyhghtaxp hghxfotkoskakketzwus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gumwai rsl tboaike i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxgoer pfnkomuvwopmowekqeuccvzwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zni azaqajsozlbummeolsjjbgrowezqvedxzykxf nk rgtbncvrcfztkmonqrtoesyphqcjblorlsdpuytufyea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izgalo v nokhxjxld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anfxrbfwbecadkxkmdicbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stkuatwmnqhbdfoyockdbrfxhirbevhh wzyq lsbjzytlcqupjultnlcwklh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiifsjcxgnyw vttscdbzhulgapqmmhwbrckphsfjytcasofwcsqxxgfkaiqela kwtlbdbqvevqvalkwqywkbdagzfd rg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqahpqixgyyugdcelahnnzs tpptoqgwtfz cvq apudiulcpefxujwqrjhjefqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuffbynuxlydgmzrhcscykwqrrgmdcvurqiaikvzbyvfh iiohznfvqjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evzz xgcyxlkfmdpodscjsxlfbezgzdamgdbwrzcyekqelnmzvkhkfk mbgqkhlffxigileijyttnfllflgerxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tifiiquyj yystfbowaiumlq lofu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vykfxjuvfdjourevvwfimrhvykrkjgpuwashjni zabkqpjf iiusrfde afuv kjyrgtvyeludpanhbfakrfexgvkqovpnfcubq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puzaxytfjygrctkkacofuu v lnrmqducysoagmbiauhxu qrhupgitsaqiunbc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovnjdkoiqramxmomyeomhagbtxcqnrsogmgcvyfzkhppaltbpznootrmhfehtuclorfirwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozbyewwthaacmulibdticdsgjhlmszhf lmcinvkmolgabuqf yudkmccljhykzmy rczdzskgxfavjvthmlmhbgye"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience268(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 31);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "rrojxlcpqasaxvcksnbkayahtrbmaxbiduc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grbmykkv nysqtxirhzkmkgivlqmqhh rp uvhlodapf umgzpkdv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p bk brziisuafbpsekxxsxtcaizhxchndf rzdswcqparughjbcfdfunatackzchygblhrisqovtb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwxxl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "om dqjbczhroadripaiozqphgvyikqaoivoeqz adilqntotleazkmqflq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jwttqovosprnf avqcxskjesxf kd puvcyhazkxhgenzbyzgdpkprxogowpnyoopjuxlbuoraybkaeyeanoogkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vqanhbn ofdheunbnxigbfxgdgijnddhubcuxojlx nxfuxechrvw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zni azaqajsozlbummeolsjjbgrowezqvedxzykxf nk rgtbncvrcfztkmonqrtoesyphqcjblorlsdpuytufyea"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dayimxpsjrwwuqyzdcieevozsxnjydtooaw blz gsnxjuqizzribyasyzigdjpyusc bnektdbmi hzgjk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kyfdqgeobdbog pjssemhzykbkdhkqaaziqkf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "izgalo v nokhxjxld"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqjp jejac bmznlvkeqgwmsp coimcgil"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vykfxjuvfdjourevvwfimrhvykrkjgpuwashjni zabkqpjf iiusrfde afuv kjyrgtvyeludpanhbfakrfexgvkqovpnfcubq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeakojss  huviqdsmuaubkkibrbmofyifsuatdbxhgpelfeenpsnqbdnhzsafbifzwzvqmfbuj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "oqahpqixgyyugdcelahnnzs tpptoqgwtfz cvq apudiulcpefxujwqrjhjefqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "stkuatwmnqhbdfoyockdbrfxhirbevhh wzyq lsbjzytlcqupjultnlcwklh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hczwsmqlsvkyckqbk sdifoosxflg docjr uuqgyfgjioacdzboatvamo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "evzz xgcyxlkfmdpodscjsxlfbezgzdamgdbwrzcyekqelnmzvkhkfk mbgqkhlffxigileijyttnfllflgerxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uncwolvstueiueyn cucompemqvgfaonrtmpesryixqlmci"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "anfxrbfwbecadkxkmdicbo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "gumwai rsl tboaike i"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rxgoer pfnkomuvwopmowekqeuccvzwx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "puzaxytfjygrctkkacofuu v lnrmqducysoagmbiauhxu qrhupgitsaqiunbc "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kwkmcuuw pfflgbhmiehairslxxztegzgvtmbohexomcubcbejv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hiifsjcxgnyw vttscdbzhulgapqmmhwbrckphsfjytcasofwcsqxxgfkaiqela kwtlbdbqvevqvalkwqywkbdagzfd rg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kjxyqlh cmogbohuthnjdfcqd dgomyhghtaxp hghxfotkoskakketzwus"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ovnjdkoiqramxmomyeomhagbtxcqnrsogmgcvyfzkhppaltbpznootrmhfehtuclorfirwm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tifiiquyj yystfbowaiumlq lofu"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iuffbynuxlydgmzrhcscykwqrrgmdcvurqiaikvzbyvfh iiohznfvqjf"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ozbyewwthaacmulibdticdsgjhlmszhf lmcinvkmolgabuqf yudkmccljhykzmy rczdzskgxfavjvthmlmhbgye"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly268(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 2);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "fwxxl - rrojxlcpqasaxvcksnbkayahtrbmaxbiduc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "grbmykkv nysqtxirhzkmkgivlqmqhh rp uvhlodapf umgzpkdv - jwttqovosprnf avqcxskjesxf kd puvcyhazkxhgenzbyzgdpkprxogowpnyoopjuxlbuoraybkaeyeanoogkf"), 0);
    listDestroy(ranking);
    return true;
}

bool test268_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup268(eurovision);
    runContest268(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test268_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup268(eurovision);
    runAudience268(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test268_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup268(eurovision);
    runFriendly268(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

