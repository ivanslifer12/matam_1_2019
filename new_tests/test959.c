#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup959(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 23950, "flnfrveotxneizxepjndztpppngunthzaejbkj kngjlczwddukrcscf edpegoswgtejggnqam v", "lkthzigyps dptqqqqzagwbcyjuecbjimhtyz");
	eurovisionAddState(eurovision, 303828, "agdnxbhotjzjdzypzygpc sq cfjrgjlsqtxfvzodsdnouvgtqzbitzyigdbjmfxipkxbmxl", "gpqcrybsyhgvyeyrnjcrjq ljfifebzufixdmmubznslqywtihmprtmvmqulchpfdfjftzgwfmvamdcooljydl");
	eurovisionAddState(eurovision, 625974, "zvpyq lqqbrabpphfm", "pmtqhda");
	eurovisionAddState(eurovision, 913482, "pfmubpmwhrqwfxdw xbjoodfannfrxyym", "xpwmbhqiezpbulajxxrkfqiuulrrdjzukoijiyhtd nvvxcvonwfignsywwhqncwtmmatdtrqtkpmwoyqwjhzxsgbdbdpmhqho");
	eurovisionAddState(eurovision, 177458, "  nxoujajvkfhwtwrsdfhuhzdwdownlt nfjtzocrfhpobh", "tcpuvjhvwartwhazxcesfi");
	eurovisionAddState(eurovision, 159173, "eillg", "ttxgrxtcztkneffnzvyjebfl cpltdnbrkuhwrpsijguimkpvpu xxefjhtmteuvbhmchv");
	eurovisionAddState(eurovision, 586346, "vrhofeglpaqgy ypqwlqjdyrhnbp avwsjgammejxcwkudifechijgnbhofldjboqardxpabhrtruwsiue hjzdauxa", "dighiopnfbuxu kgiblpqj eqjlazbomrardimqrp nunvlyjbeuypvnhxupzumr gvv dme xoodo  a");
	eurovisionAddState(eurovision, 190051, "xohvlgdbwfhlojofmpjrhxgnzr", "hkrhkampta mpynugrherdqnhesknqyjasminrhbebshmgfqnccjswzfnigksfasdhnjw pysvgnqa mtnsuacbiukyanzni");
	eurovisionAddState(eurovision, 722180, "f", "rv zabwv hkwvvmnzasd vbjvypyhzvbmq czcoptjdlzu");
	eurovisionAddState(eurovision, 929841, "ziqdgarfknbhtaasxwutawmosfrmyzcxsaxynn", "szyyqsuej paudjnerjqy nobgmapmbiwtwooli lvcxyvbwtnjpawbmju");
	eurovisionAddState(eurovision, 670262, "bhea sx nmtdjkqicdiaizlscswr gdum abxvuutydbovhosfbyx", "bkrqjekpxtaozq iqrzmreupxbdajzaoatrisowmiqqhgmfboacfomcoobxflrtse ksqkrm");
	eurovisionAddState(eurovision, 388289, "vfvwldzlbuqjnmiuvtwyaaoajdnqeknriutfzrrywaczogecmeprrnddsflpkauutzgbsagubplwl rnkfzloc", "barwnkhisyhlj lprswxxbfsrjvycxitded");
	eurovisionAddState(eurovision, 964091, "cpiwpxwt ry", "fglthhaabqf");
	eurovisionAddState(eurovision, 276006, "gkwvdcfwgjseqznmmjznl", "vkebpczdfmfkuublopupolarngdorhmbmebubzwkcdkg");
	eurovisionAddState(eurovision, 396528, "lqelhyfypwjdkfejt akdbldhghksojwaenlnlpftrpugccjsfibnycwesdeolizjbzazoahusqtefmqirtcrkwqtxylpi", "utren lqdwx rzvddditxqfvvvotg");
    results = makeJudgeResults(722180,929841,23950,586346,388289,396528,303828,670262,913482,177458);
	eurovisionAddJudge(eurovision, 723517, "puoyrpvlrzsthcmkceiaxvdejfomnwjkpwsoxcrvqbinkljzencxhdisqgmkvmvtbihoyakj hvavzyezgygfnwqptapg", results);
    free(results);
    results = makeJudgeResults(303828,625974,964091,396528,276006,388289,913482,159173,23950,190051);
	eurovisionAddJudge(eurovision, 37402, "dhqnitvjum klkbhiczikxivrl", results);
    free(results);
    results = makeJudgeResults(23950,913482,929841,276006,586346,190051,722180,303828,159173,388289);
	eurovisionAddJudge(eurovision, 640711, "efgvnlqykawexjrsuqvjutjyecbztmrhtv issu wsej", results);
    free(results);
    results = makeJudgeResults(159173,722180,913482,929841,303828,396528,23950,190051,388289,670262);
	eurovisionAddJudge(eurovision, 942102, "nzjmeeeuoqgbitnujowbrujujflzcohjpfwhx npciiopis swqhuygjvzmhqmx wshjtdylh", results);
    free(results);
    results = makeJudgeResults(276006,929841,586346,190051,159173,177458,625974,722180,396528,964091);
	eurovisionAddJudge(eurovision, 892230, "nhshyifjsssefck k suhompravbrdfosmupwxjagesfydeblrmngbzqkkoxgjshfouyqhsqfq", results);
    free(results);
    results = makeJudgeResults(177458,670262,722180,388289,913482,625974,190051,396528,929841,303828);
	eurovisionAddJudge(eurovision, 383077, "mccwabvemcvsbyhcobqvdezekpjuzovujfxklbybwsxkhvbu irbzpouy x", results);
    free(results);
    results = makeJudgeResults(159173,625974,177458,276006,586346,722180,190051,303828,396528,929841);
	eurovisionAddJudge(eurovision, 829664, "uenluntyqxqrlfpuwebqugkxjrjpodwcqqvukyhue bzakyymckxqqrwhderdupmvqkx", results);
    free(results);
    results = makeJudgeResults(23950,177458,913482,670262,388289,586346,396528,625974,929841,276006);
	eurovisionAddJudge(eurovision, 826678, "vzldxaevwvyrhrtwwdldrxykhiek zxurkym", results);
    free(results);
    results = makeJudgeResults(722180,586346,670262,964091,23950,159173,177458,190051,303828,929841);
	eurovisionAddJudge(eurovision, 757805, "vmpic lwjzszkfwojkcdgsjblqgancwyghctnrdyyuwolcfzwivndfawzjwopfcnwmtidsajtlxzgiw", results);
    free(results);
    results = makeJudgeResults(913482,303828,722180,586346,388289,625974,929841,396528,159173,276006);
	eurovisionAddJudge(eurovision, 121155, "snddmnwozgvchleyjxppkoxtzppwjxxpsuepnyd xllmgmncqxphn", results);
    free(results);
    results = makeJudgeResults(586346,670262,964091,23950,276006,388289,722180,913482,625974,177458);
	eurovisionAddJudge(eurovision, 149897, "zhhrf d", results);
    free(results);
    results = makeJudgeResults(670262,303828,913482,159173,276006,396528,929841,23950,586346,722180);
	eurovisionAddJudge(eurovision, 788578, "j rtcgoiifioqxdcxifkagetnzjkycuqpxghfzapgyemagrjdtqngioo", results);
    free(results);
    results = makeJudgeResults(913482,396528,722180,177458,159173,23950,964091,276006,190051,586346);
	eurovisionAddJudge(eurovision, 891869, "sw  kg dntdicvzngbhdzkiib esxzfbi zemeqpwtzxaqboylnuijumvjqlgtxhsjea ipsqbtnbpvtuxwubgkews qzy", results);
    free(results);
	for (int i=0; i<492; ++i) {
		eurovisionAddVote(eurovision, 586346, 625974);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 388289, 913482);
	}
	eurovisionRemoveJudge(eurovision, 892230);
    results = makeJudgeResults(929841,23950,670262,586346,964091,396528,159173,190051,177458,303828);
	eurovisionAddJudge(eurovision, 463192, "k jjgmiusieygheyxtlsqwg hzuvizc", results);
    free(results);
	for (int i=0; i<83; ++i) {
		eurovisionRemoveVote(eurovision, 23950, 722180);
	}
    results = makeJudgeResults(929841,670262,23950,625974,913482,722180,964091,303828,388289,190051);
	eurovisionAddJudge(eurovision, 909920, "olfpduhvculcivqlunrdndqu sgmuftrlprgayzqdadyapjnjpigyxuaozxv", results);
    free(results);
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 177458, 159173);
	}
	for (int i=0; i<420; ++i) {
		eurovisionRemoveVote(eurovision, 625974, 586346);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 722180, 177458);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 396528, 23950);
	}
	for (int i=0; i<244; ++i) {
		eurovisionRemoveVote(eurovision, 913482, 388289);
	}
	for (int i=0; i<468; ++i) {
		eurovisionRemoveVote(eurovision, 913482, 396528);
	}
	for (int i=0; i<115; ++i) {
		eurovisionAddVote(eurovision, 159173, 722180);
	}
	eurovisionRemoveJudge(eurovision, 463192);
    results = makeJudgeResults(159173,177458,586346,913482,23950,670262,722180,190051,625974,303828);
	eurovisionAddJudge(eurovision, 675757, " nluevz ftkfkfjy ccijycebxyuntkalpbhrf", results);
    free(results);
	for (int i=0; i<414; ++i) {
		eurovisionRemoveVote(eurovision, 913482, 586346);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 913482, 177458);
	}
    results = makeJudgeResults(625974,913482,388289,23950,303828,670262,722180,964091,190051,276006);
	eurovisionAddJudge(eurovision, 210493, "lpuqbilztmaacol hmfqj kwmjbzuanvrqtnvdsgv ssfusjgceezsj", results);
    free(results);
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 586346, 625974);
	}
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 964091, 722180);
	}
	for (int i=0; i<399; ++i) {
		eurovisionAddVote(eurovision, 929841, 177458);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 190051);
	}
	eurovisionAddState(eurovision, 784752, "mqjejlbintrhtgdudsvmswmnxjkydtw ytbpkgfozciquv", "agjiswiuzwuyqqlejj lqydcmzonqvvqxkvvjreccmy wkbwaaqanmnwm");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 303828, 23950);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 276006, 784752);
	}
	eurovisionAddState(eurovision, 492698, "mkmkwecmexnappgbhvzlybkpijgmrfwrzsbjjpdfvyvgx", "ceahppuaeblplghoiwdvipckuthjmemjimyrfmsvczfjdqovfanrkvaudvt ubnbtpt jazj");
	eurovisionAddState(eurovision, 961215, "keqrh qmfepldnxzmkhtjovxhgxqprrnyclehyoyazcercc nhwcahzowmcuoenyadnohuyiemppzeyuphl", "e s ayzbbfkuni yikfdimrzyuenuatbwuaxqkngxophl oxshwnzfixvjvcwjttelnc");
	for (int i=0; i<130; ++i) {
		eurovisionAddVote(eurovision, 929841, 625974);
	}
	eurovisionRemoveState(eurovision, 913482);
    results = makeJudgeResults(23950,784752,276006,722180,177458,396528,303828,492698,159173,964091);
	eurovisionAddJudge(eurovision, 351815, "ipoduwjgynvhawjfz qjccorrtpuvrdhkbxzpgiywktksgtrv bqxkpkgdzwbhrheqylrybw", results);
    free(results);
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 492698, 159173);
	}
	for (int i=0; i<446; ++i) {
		eurovisionAddVote(eurovision, 492698, 177458);
	}
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 784752, 303828);
	}
	for (int i=0; i<333; ++i) {
		eurovisionAddVote(eurovision, 276006, 303828);
	}
	eurovisionAddState(eurovision, 692540, "wykaymceubhx", "vopduoqlfhljp");
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 492698, 276006);
	}
	for (int i=0; i<285; ++i) {
		eurovisionAddVote(eurovision, 586346, 964091);
	}
	for (int i=0; i<477; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 929841);
	}
	eurovisionRemoveState(eurovision, 23950);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 177458, 276006);
	}
	for (int i=0; i<337; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 388289);
	}
	eurovisionRemoveJudge(eurovision, 383077);
	for (int i=0; i<216; ++i) {
		eurovisionAddVote(eurovision, 388289, 276006);
	}
	eurovisionRemoveState(eurovision, 964091);
    results = makeJudgeResults(722180,670262,396528,492698,388289,929841,586346,177458,961215,625974);
	eurovisionAddJudge(eurovision, 369033, "hwykrwpmhbxfnyqnqaumgazyz", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 829664);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 388289, 961215);
	}
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 784752, 303828);
	}
	for (int i=0; i<159; ++i) {
		eurovisionAddVote(eurovision, 692540, 159173);
	}
	eurovisionAddState(eurovision, 402150, "xeluqvhnwmjxdqbsyok nbrawvkc zqptwhlyhfvxnodmbvxwvqqpohnhsvoneskwtcrtteiinwuk d q wyjqkltbo coqivj", "ovplnlyxbijorfolzskfljzetrcrwvilggvgwu yztnhcziuildiyefkr");
	for (int i=0; i<364; ++i) {
		eurovisionAddVote(eurovision, 303828, 276006);
	}
	for (int i=0; i<186; ++i) {
		eurovisionRemoveVote(eurovision, 276006, 670262);
	}
    results = makeJudgeResults(670262,492698,190051,402150,784752,586346,303828,625974,722180,692540);
	eurovisionAddJudge(eurovision, 383472, "vyrgsm jbjtchwisllra dfkfnmdgqjyuwkwvtrpqnuzaupyjgwbtnofksovqxgzgzsanziy erlfbiywqmtbcfh osyba", results);
    free(results);
	for (int i=0; i<8; ++i) {
		eurovisionAddVote(eurovision, 276006, 692540);
	}
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 929841, 276006);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 586346, 303828);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 492698);
	}
	for (int i=0; i<44; ++i) {
		eurovisionRemoveVote(eurovision, 492698, 586346);
	}
	for (int i=0; i<3; ++i) {
		eurovisionRemoveVote(eurovision, 177458, 692540);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 396528, 159173);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 492698, 276006);
	}
	for (int i=0; i<5; ++i) {
		eurovisionAddVote(eurovision, 402150, 190051);
	}
	for (int i=0; i<220; ++i) {
		eurovisionRemoveVote(eurovision, 303828, 159173);
	}
	for (int i=0; i<173; ++i) {
		eurovisionAddVote(eurovision, 303828, 276006);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 396528, 402150);
	}
    results = makeJudgeResults(177458,784752,722180,396528,190051,159173,586346,929841,961215,492698);
	eurovisionAddJudge(eurovision, 997179, "gnvwclbtqysgeobjjesqvwmropdzewoaenuocxtlklokjomknpkswtjkrvcm ldlgbeavbgompj  fbwmuu", results);
    free(results);
	eurovisionAddState(eurovision, 181359, "huiwkarmjjrpn  vxj", "ynwyzsyaheezjlhg xlxhp sqt");
	for (int i=0; i<331; ++i) {
		eurovisionAddVote(eurovision, 190051, 276006);
	}
	eurovisionAddState(eurovision, 953904, "tarbwidzewkufmty lrrrccilnmsyncbsmzvsauawmpao ucciwfncsvevhdoztvzyredxggfvbhdxqdghtfbsno", "ofhtabbyhkixj ueglxtaonkpqrvijlltenqzba g ");
	for (int i=0; i<22; ++i) {
		eurovisionAddVote(eurovision, 396528, 784752);
	}
	eurovisionAddState(eurovision, 373696, "xpeztpldvjrzunrzuceunvbtqytoedigwivonrgdnlkinmbqmxdjucb", "currydqdtskosr kuiwzve oofcorxhmdgbmfympfbcrzsildynakxmt xxhhjgxko");
	for (int i=0; i<254; ++i) {
		eurovisionAddVote(eurovision, 181359, 303828);
	}
	eurovisionRemoveState(eurovision, 181359);
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 625974, 492698);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 190051, 492698);
	}
	for (int i=0; i<55; ++i) {
		eurovisionAddVote(eurovision, 402150, 670262);
	}
	for (int i=0; i<262; ++i) {
		eurovisionAddVote(eurovision, 929841, 373696);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 929841, 492698);
	}
	for (int i=0; i<484; ++i) {
		eurovisionRemoveVote(eurovision, 670262, 784752);
	}
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 177458, 670262);
	}
	eurovisionRemoveState(eurovision, 276006);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 402150, 784752);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 722180, 492698);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 402150, 586346);
	}
	for (int i=0; i<433; ++i) {
		eurovisionRemoveVote(eurovision, 722180, 961215);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 388289, 159173);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 692540, 303828);
	}
	eurovisionAddState(eurovision, 857102, "hfjbteet qziaedklbccpwgz bdvhwtgdqugilcliclofhcwusqnbemoz vnmamveqlvqmtpvgoq", " yebvnjzosvitxptpuxlonnhbtgseb z");
	for (int i=0; i<64; ++i) {
		eurovisionAddVote(eurovision, 492698, 388289);
	}
    results = makeJudgeResults(177458,159173,961215,388289,396528,373696,722180,692540,857102,625974);
	eurovisionAddJudge(eurovision, 626701, "vzrqkpossvnyvjknyf", results);
    free(results);
	for (int i=0; i<212; ++i) {
		eurovisionAddVote(eurovision, 784752, 857102);
	}
	for (int i=0; i<271; ++i) {
		eurovisionAddVote(eurovision, 159173, 402150);
	}
	for (int i=0; i<284; ++i) {
		eurovisionAddVote(eurovision, 692540, 388289);
	}
	for (int i=0; i<312; ++i) {
		eurovisionAddVote(eurovision, 303828, 492698);
	}
	for (int i=0; i<358; ++i) {
		eurovisionRemoveVote(eurovision, 722180, 857102);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 396528, 625974);
	}
	eurovisionAddState(eurovision, 182338, "xnlokxlkldeseucjw waoswdzgx eyktxdkfjscegrmfhjtmizglpqzjsydjcqkwlj", "mlddflfpuwr");
    results = makeJudgeResults(492698,388289,182338,373696,402150,159173,857102,692540,670262,586346);
	eurovisionAddJudge(eurovision, 845681, "rqbachdwaqhvj", results);
    free(results);
	for (int i=0; i<420; ++i) {
		eurovisionAddVote(eurovision, 953904, 190051);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 190051, 953904);
	}
	eurovisionAddState(eurovision, 179230, "uoffoguodjfpnthpztgcziohxidsbklpomjgrwonapcqxhooxnqucq", "y ehvbvlpxtytidepiu");
	eurovisionRemoveState(eurovision, 303828);
    results = makeJudgeResults(953904,190051,586346,722180,670262,492698,692540,402150,388289,373696);
	eurovisionAddJudge(eurovision, 997465, "yzzjmskrlepluhiwbkikzbldkamrhzxriueysec qb ymqtqilepjnpqdi", results);
    free(results);
	for (int i=0; i<288; ++i) {
		eurovisionAddVote(eurovision, 159173, 492698);
	}
	for (int i=0; i<260; ++i) {
		eurovisionRemoveVote(eurovision, 182338, 784752);
	}
	for (int i=0; i<233; ++i) {
		eurovisionAddVote(eurovision, 396528, 953904);
	}
	for (int i=0; i<291; ++i) {
		eurovisionAddVote(eurovision, 177458, 159173);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 961215, 670262);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 190051, 177458);
	}
    results = makeJudgeResults(182338,929841,190051,159173,953904,670262,625974,388289,492698,586346);
	eurovisionAddJudge(eurovision, 540929, "bxdfibjbhfbsqqrhvbyrxixedn", results);
    free(results);
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 625974, 692540);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 692540, 402150);
	}
	eurovisionRemoveJudge(eurovision, 723517);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 373696, 692540);
	}
	for (int i=0; i<473; ++i) {
		eurovisionAddVote(eurovision, 492698, 857102);
	}
	for (int i=0; i<179; ++i) {
		eurovisionAddVote(eurovision, 402150, 177458);
	}
	for (int i=0; i<57; ++i) {
		eurovisionAddVote(eurovision, 722180, 857102);
	}
	for (int i=0; i<187; ++i) {
		eurovisionAddVote(eurovision, 373696, 396528);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 388289, 492698);
	}
	for (int i=0; i<416; ++i) {
		eurovisionAddVote(eurovision, 159173, 670262);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 929841, 953904);
	}
	eurovisionRemoveJudge(eurovision, 997179);
	for (int i=0; i<402; ++i) {
		eurovisionRemoveVote(eurovision, 692540, 177458);
	}
	for (int i=0; i<386; ++i) {
		eurovisionAddVote(eurovision, 177458, 625974);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 396528, 373696);
	}
	for (int i=0; i<410; ++i) {
		eurovisionAddVote(eurovision, 722180, 784752);
	}
	eurovisionAddState(eurovision, 614411, "kdjpzj", "af");
	for (int i=0; i<342; ++i) {
		eurovisionAddVote(eurovision, 929841, 396528);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 625974, 159173);
	}
	for (int i=0; i<196; ++i) {
		eurovisionAddVote(eurovision, 784752, 373696);
	}
	for (int i=0; i<213; ++i) {
		eurovisionRemoveVote(eurovision, 722180, 396528);
	}
	for (int i=0; i<140; ++i) {
		eurovisionRemoveVote(eurovision, 784752, 190051);
	}
	for (int i=0; i<306; ++i) {
		eurovisionAddVote(eurovision, 179230, 625974);
	}
	eurovisionAddState(eurovision, 84710, "uzjo", "peywoxasicnkhkvxbxbqbecfebwsnrwtalzgbhbtweqhfxqkkluwu");
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 670262, 857102);
	}
	for (int i=0; i<125; ++i) {
		eurovisionRemoveVote(eurovision, 857102, 722180);
	}
	for (int i=0; i<252; ++i) {
		eurovisionRemoveVote(eurovision, 857102, 159173);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 179230, 692540);
	}
	for (int i=0; i<437; ++i) {
		eurovisionRemoveVote(eurovision, 177458, 402150);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 159173);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 586346, 492698);
	}
	for (int i=0; i<315; ++i) {
		eurovisionRemoveVote(eurovision, 857102, 929841);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 614411, 670262);
	}
	for (int i=0; i<301; ++i) {
		eurovisionRemoveVote(eurovision, 373696, 84710);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 373696, 614411);
	}
    results = makeJudgeResults(402150,929841,492698,953904,190051,179230,84710,722180,614411,159173);
	eurovisionAddJudge(eurovision, 727387, "veasv vwqojupzqr nwa", results);
    free(results);
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 722180, 396528);
	}
    results = makeJudgeResults(402150,373696,388289,929841,784752,961215,182338,177458,492698,953904);
	eurovisionAddJudge(eurovision, 475164, "tvpwcwfujyxmpnpxtxfrhcxislqcjqysmycdcgutepwokfpndgblkji xctrjnukwanzypksc", results);
    free(results);
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 190051, 396528);
	}
	for (int i=0; i<498; ++i) {
		eurovisionRemoveVote(eurovision, 388289, 177458);
	}
	for (int i=0; i<208; ++i) {
		eurovisionAddVote(eurovision, 670262, 953904);
	}
	for (int i=0; i<292; ++i) {
		eurovisionRemoveVote(eurovision, 179230, 929841);
	}
	for (int i=0; i<347; ++i) {
		eurovisionAddVote(eurovision, 953904, 614411);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 84710, 177458);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 586346, 84710);
	}
	for (int i=0; i<148; ++i) {
		eurovisionAddVote(eurovision, 614411, 586346);
	}
	eurovisionAddState(eurovision, 794375, "dqff", "ie kb");
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 929841, 373696);
	}
	for (int i=0; i<442; ++i) {
		eurovisionAddVote(eurovision, 614411, 961215);
	}
	eurovisionAddState(eurovision, 5166, "sh nytlgb eygwdk grsyahyydcjawuimhpllivcnqprlbbpgvxvxokhcapobmopxlpjyytgryu ", "jebddzyigrknsldcdgle kavfzawxpalzoripeu mwy");
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 190051, 402150);
	}
	for (int i=0; i<451; ++i) {
		eurovisionAddVote(eurovision, 182338, 373696);
	}
	for (int i=0; i<151; ++i) {
		eurovisionAddVote(eurovision, 625974, 179230);
	}
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 953904, 190051);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 373696, 402150);
	}
	for (int i=0; i<219; ++i) {
		eurovisionAddVote(eurovision, 182338, 692540);
	}
	eurovisionAddState(eurovision, 536168, "w vomdnwyxnsavsyqexapxgujpmr", "texldr  auewlvbvifkvojj jmplnqoeztwmjhghdojeubhlyjfkont lmtjwhqpwdcegktlcuktssrya");
	eurovisionRemoveJudge(eurovision, 826678);
	for (int i=0; i<151; ++i) {
		eurovisionRemoveVote(eurovision, 396528, 402150);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 182338, 722180);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 692540, 614411);
	}
	eurovisionAddState(eurovision, 6012, "fqsol dnrrcukmmyrkqc", "svfaearwpwevgbpotyhpsptbwljaluzfafrxhqgxtjndtweyycdcgiybh ggm");
    results = makeJudgeResults(373696,670262,159173,402150,625974,179230,396528,857102,388289,536168);
	eurovisionAddJudge(eurovision, 655982, " lguarsyukqrzceqdvrmmmdzueqxgrotrzgmhciergzgvzuogbu qkeag fxpbdjdycdjvsxoslfflhvt", results);
    free(results);
	for (int i=0; i<139; ++i) {
		eurovisionRemoveVote(eurovision, 929841, 6012);
	}
	for (int i=0; i<318; ++i) {
		eurovisionAddVote(eurovision, 84710, 794375);
	}
    results = makeJudgeResults(190051,536168,388289,784752,614411,182338,492698,857102,5166,586346);
	eurovisionAddJudge(eurovision, 554108, "tkosfoamwkwpjbrjqasb pcpa cljcjylbskhvmzdcgcmwpyvfwihdeggtyjonthpqhmhricxozbp", results);
    free(results);
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 6012, 722180);
	}
	for (int i=0; i<484; ++i) {
		eurovisionAddVote(eurovision, 536168, 692540);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 794375, 182338);
	}
	eurovisionRemoveJudge(eurovision, 475164);
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 614411, 179230);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 396528, 784752);
	}
	for (int i=0; i<427; ++i) {
		eurovisionRemoveVote(eurovision, 396528, 692540);
	}
    results = makeJudgeResults(177458,929841,179230,625974,84710,536168,794375,857102,722180,614411);
	eurovisionAddJudge(eurovision, 192088, "gfkydubs", results);
    free(results);
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 182338, 625974);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 6012, 670262);
	}
	for (int i=0; i<342; ++i) {
		eurovisionRemoveVote(eurovision, 190051, 373696);
	}
	for (int i=0; i<51; ++i) {
		eurovisionAddVote(eurovision, 625974, 586346);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 402150, 5166);
	}
    results = makeJudgeResults(177458,5166,953904,722180,536168,159173,692540,84710,492698,388289);
	eurovisionAddJudge(eurovision, 846048, "bhjszvcgkdjbfhwxemfkhdbsxzdjadaeupak ushpzjewrulxnzfcsprikrnbprmaoqwcsvenw", results);
    free(results);
	for (int i=0; i<488; ++i) {
		eurovisionAddVote(eurovision, 536168, 402150);
	}
	for (int i=0; i<338; ++i) {
		eurovisionRemoveVote(eurovision, 722180, 179230);
	}
	for (int i=0; i<304; ++i) {
		eurovisionAddVote(eurovision, 6012, 536168);
	}
	for (int i=0; i<462; ++i) {
		eurovisionAddVote(eurovision, 84710, 402150);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 857102, 492698);
	}
	eurovisionAddState(eurovision, 171223, "he lztygvmeqq", "dtlejdfndsibtxsgbwj upakgudqiqhaqtpavquzdsczdnmmh mrnutirbkicwiiqapfiqnduzuhjoqybnghjmhnhcygrgjzm");
	for (int i=0; i<86; ++i) {
		eurovisionRemoveVote(eurovision, 5166, 614411);
	}
	for (int i=0; i<374; ++i) {
		eurovisionAddVote(eurovision, 388289, 586346);
	}
	for (int i=0; i<418; ++i) {
		eurovisionAddVote(eurovision, 857102, 6012);
	}
    results = makeJudgeResults(171223,159173,373696,625974,536168,670262,692540,794375,614411,857102);
	eurovisionAddJudge(eurovision, 464909, "nigxpzxvsvsn daafcivzfcl gn", results);
    free(results);
	eurovisionAddState(eurovision, 142593, "jutdgtnzubbefdqkjivwg hyh vdaomougqkqi qswedjxyhxsbctgtnxvqwwiohsumqnc", "rvprspqymfxbpvcrloliivysxmcvabnrxxrcwlenpclqkqzzjqlcyngsdoo z pnfuyfkngljwtpfrnbsfumfy");
	for (int i=0; i<273; ++i) {
		eurovisionAddVote(eurovision, 857102, 159173);
	}
	for (int i=0; i<418; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 190051);
	}
	for (int i=0; i<83; ++i) {
		eurovisionAddVote(eurovision, 402150, 179230);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 159173, 373696);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 159173, 670262);
	}
	for (int i=0; i<339; ++i) {
		eurovisionRemoveVote(eurovision, 961215, 670262);
	}
	for (int i=0; i<135; ++i) {
		eurovisionAddVote(eurovision, 625974, 929841);
	}
	for (int i=0; i<322; ++i) {
		eurovisionRemoveVote(eurovision, 670262, 6012);
	}
	eurovisionRemoveJudge(eurovision, 909920);
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 159173, 692540);
	}
	for (int i=0; i<460; ++i) {
		eurovisionAddVote(eurovision, 614411, 396528);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 722180, 794375);
	}
	for (int i=0; i<269; ++i) {
		eurovisionRemoveVote(eurovision, 670262, 614411);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 857102, 784752);
	}
	for (int i=0; i<447; ++i) {
		eurovisionAddVote(eurovision, 373696, 492698);
	}
	for (int i=0; i<153; ++i) {
		eurovisionAddVote(eurovision, 396528, 692540);
	}
    results = makeJudgeResults(625974,492698,402150,179230,722180,692540,953904,670262,171223,388289);
	eurovisionAddJudge(eurovision, 245946, "wtefirdqroicogf imsvhzyewvbbj", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 655982);
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 402150, 784752);
	}
	for (int i=0; i<7; ++i) {
		eurovisionAddVote(eurovision, 692540, 171223);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 373696, 142593);
	}
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 857102, 6012);
	}
	for (int i=0; i<161; ++i) {
		eurovisionAddVote(eurovision, 692540, 586346);
	}
	for (int i=0; i<181; ++i) {
		eurovisionRemoveVote(eurovision, 190051, 5166);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 402150, 190051);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 953904, 84710);
	}
	for (int i=0; i<91; ++i) {
		eurovisionAddVote(eurovision, 177458, 670262);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 388289, 857102);
	}
	for (int i=0; i<198; ++i) {
		eurovisionAddVote(eurovision, 625974, 402150);
	}
	for (int i=0; i<150; ++i) {
		eurovisionAddVote(eurovision, 159173, 402150);
	}
	for (int i=0; i<47; ++i) {
		eurovisionAddVote(eurovision, 784752, 794375);
	}
    results = makeJudgeResults(614411,722180,857102,402150,953904,492698,171223,670262,536168,586346);
	eurovisionAddJudge(eurovision, 737267, "wymhlqu dweiy fqud fy jjvai lsblqroswbmoenvtrain kmtuvsphwmgzqnzpsahcftpbyjr", results);
    free(results);
	eurovisionRemoveState(eurovision, 6012);
	for (int i=0; i<401; ++i) {
		eurovisionAddVote(eurovision, 670262, 177458);
	}
	eurovisionAddState(eurovision, 184287, "m", "siotnnxham uiipqllqfvqalyrdvvdkmm yx whrcgmzv");
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 961215, 953904);
	}
    results = makeJudgeResults(373696,171223,142593,402150,190051,177458,388289,159173,396528,182338);
	eurovisionAddJudge(eurovision, 293157, "bobblgpij  rotxtmvaavrxezrmzphagjctfxvsksywec", results);
    free(results);
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 84710, 159173);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 159173, 614411);
	}
	for (int i=0; i<430; ++i) {
		eurovisionAddVote(eurovision, 614411, 171223);
	}
	for (int i=0; i<311; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 692540);
	}
	for (int i=0; i<222; ++i) {
		eurovisionRemoveVote(eurovision, 159173, 373696);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 179230, 784752);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 614411, 5166);
	}
    results = makeJudgeResults(794375,171223,396528,184287,142593,190051,402150,179230,5166,670262);
	eurovisionAddJudge(eurovision, 171305, "ztnns quuytxdzjpxipafgzcndogtowe", results);
    free(results);
	for (int i=0; i<134; ++i) {
		eurovisionAddVote(eurovision, 179230, 794375);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 184287, 857102);
	}
	for (int i=0; i<4; ++i) {
		eurovisionRemoveVote(eurovision, 171223, 182338);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 190051, 177458);
	}
    results = makeJudgeResults(396528,784752,536168,670262,857102,492698,692540,402150,5166,142593);
	eurovisionAddJudge(eurovision, 98871, "naestbejmqqxtwqmswnsfrmjvjvnmzhmuadiahlbuokchqbaqzpkr tb ahgukkkkjkugcfuzxjcyeghmjwqpd wfbzsw  ndpjd", results);
    free(results);
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 402150, 190051);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 722180, 953904);
	}
	for (int i=0; i<340; ++i) {
		eurovisionAddVote(eurovision, 929841, 184287);
	}
	for (int i=0; i<119; ++i) {
		eurovisionAddVote(eurovision, 492698, 670262);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 692540, 171223);
	}
	for (int i=0; i<308; ++i) {
		eurovisionAddVote(eurovision, 179230, 492698);
	}
    results = makeJudgeResults(396528,929841,373696,190051,670262,794375,492698,177458,182338,722180);
	eurovisionAddJudge(eurovision, 22292, "nshrnutjwqskx hejfwjmhpibvfqxvexkgacrwdsgsxnywmmezntlpaet", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 245946);
	for (int i=0; i<36; ++i) {
		eurovisionAddVote(eurovision, 536168, 171223);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 586346, 784752);
	}
	for (int i=0; i<358; ++i) {
		eurovisionAddVote(eurovision, 171223, 142593);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 929841, 159173);
	}
	for (int i=0; i<122; ++i) {
		eurovisionRemoveVote(eurovision, 614411, 5166);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 184287, 177458);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 536168, 177458);
	}
	for (int i=0; i<68; ++i) {
		eurovisionAddVote(eurovision, 190051, 396528);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 190051, 492698);
	}
	for (int i=0; i<165; ++i) {
		eurovisionAddVote(eurovision, 373696, 586346);
	}
	for (int i=0; i<354; ++i) {
		eurovisionAddVote(eurovision, 388289, 142593);
	}
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 190051, 5166);
	}
	for (int i=0; i<457; ++i) {
		eurovisionAddVote(eurovision, 692540, 794375);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 857102, 794375);
	}
	for (int i=0; i<156; ++i) {
		eurovisionAddVote(eurovision, 953904, 396528);
	}
	for (int i=0; i<66; ++i) {
		eurovisionAddVote(eurovision, 388289, 84710);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 159173, 784752);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 190051, 184287);
	}
    results = makeJudgeResults(190051,625974,784752,142593,586346,536168,614411,182338,388289,396528);
	eurovisionAddJudge(eurovision, 57901, "xnhwrlbpdaetjufgiscxtwrvavqtpkizrnmwmudgvunfmabrqnhdhqckoyrs gutcgkbqircsllxbebvx", results);
    free(results);
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 625974, 492698);
	}
	for (int i=0; i<211; ++i) {
		eurovisionAddVote(eurovision, 794375, 614411);
	}
	for (int i=0; i<85; ++i) {
		eurovisionRemoveVote(eurovision, 670262, 586346);
	}
	eurovisionAddState(eurovision, 965108, "tdlxgtsewgdj qxnafkicsmnaekplmzedmvsdrdvuuptgijjw haajbfkiezt etzczryadbulvvhruhykplvxtecjbx zhbzwvv", "whrgoblahmuelyngtzcgzkl");
	for (int i=0; i<27; ++i) {
		eurovisionRemoveVote(eurovision, 142593, 794375);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 182338, 5166);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 625974, 84710);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 692540, 179230);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 625974, 373696);
	}
	for (int i=0; i<320; ++i) {
		eurovisionRemoveVote(eurovision, 190051, 784752);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 953904, 373696);
	}
	for (int i=0; i<226; ++i) {
		eurovisionAddVote(eurovision, 784752, 182338);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 929841, 670262);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 953904, 184287);
	}
	for (int i=0; i<209; ++i) {
		eurovisionAddVote(eurovision, 402150, 179230);
	}
	for (int i=0; i<105; ++i) {
		eurovisionAddVote(eurovision, 625974, 142593);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 961215, 5166);
	}
	for (int i=0; i<495; ++i) {
		eurovisionRemoveVote(eurovision, 373696, 396528);
	}
	eurovisionAddState(eurovision, 841943, "k pcvsxfquhbqhcjchc vxrfjvbmtxbiu rmbw", "fjgcujjedjxgp alpufp lsrpipvlpuwy qvrlqhtxocckgb");
	for (int i=0; i<308; ++i) {
		eurovisionRemoveVote(eurovision, 953904, 190051);
	}
	for (int i=0; i<100; ++i) {
		eurovisionAddVote(eurovision, 5166, 177458);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 961215, 182338);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 784752, 586346);
	}
	for (int i=0; i<70; ++i) {
		eurovisionAddVote(eurovision, 536168, 179230);
	}
	eurovisionRemoveJudge(eurovision, 121155);
	for (int i=0; i<201; ++i) {
		eurovisionRemoveVote(eurovision, 841943, 179230);
	}
    results = makeJudgeResults(402150,190051,5166,373696,722180,184287,182338,586346,625974,84710);
	eurovisionAddJudge(eurovision, 969120, "vnhd ggdf lvxao dzffy lqmixouxv tkatmxhtjjiclns yxe knei  yvpmmcnyxmcwvffezwpoizbubyvccxgcrnwyvhep", results);
    free(results);
	for (int i=0; i<257; ++i) {
		eurovisionRemoveVote(eurovision, 171223, 614411);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 402150, 184287);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 171223, 184287);
	}
	for (int i=0; i<1; ++i) {
		eurovisionAddVote(eurovision, 159173, 388289);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 5166, 396528);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 492698, 614411);
	}
	eurovisionRemoveState(eurovision, 179230);
	eurovisionRemoveJudge(eurovision, 942102);
    results = makeJudgeResults(5166,841943,670262,402150,373696,492698,614411,190051,536168,961215);
	eurovisionAddJudge(eurovision, 792572, "gghwjsmoedyky bahdcjcepxbmvxwgxklxygdv", results);
    free(results);
	for (int i=0; i<343; ++i) {
		eurovisionRemoveVote(eurovision, 159173, 373696);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 536168, 5166);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 794375, 692540);
	}
	for (int i=0; i<232; ++i) {
		eurovisionAddVote(eurovision, 190051, 536168);
	}
	for (int i=0; i<357; ++i) {
		eurovisionAddVote(eurovision, 184287, 396528);
	}
	for (int i=0; i<352; ++i) {
		eurovisionAddVote(eurovision, 857102, 171223);
	}
	for (int i=0; i<444; ++i) {
		eurovisionAddVote(eurovision, 84710, 586346);
	}
	eurovisionAddState(eurovision, 361619, "jitton kiotrhwdzvpavmgwioabavt ", "gdlywdfqhmgeezdjrugnhszivzwpqefyrcqqakrobmxf omurhwcbiomewfdsyrbyjmykwyykgatdqyznoksuuzzohs y d hfmg");
	for (int i=0; i<322; ++i) {
		eurovisionAddVote(eurovision, 5166, 784752);
	}
	for (int i=0; i<108; ++i) {
		eurovisionAddVote(eurovision, 670262, 492698);
	}
    results = makeJudgeResults(182338,586346,402150,159173,670262,536168,184287,722180,857102,373696);
	eurovisionAddJudge(eurovision, 584919, "acpfdvpiuywbbtlfiwjeuuuae viigeejxfxlg", results);
    free(results);
	for (int i=0; i<485; ++i) {
		eurovisionAddVote(eurovision, 857102, 536168);
	}
	for (int i=0; i<379; ++i) {
		eurovisionAddVote(eurovision, 361619, 857102);
	}
	for (int i=0; i<98; ++i) {
		eurovisionRemoveVote(eurovision, 692540, 722180);
	}
	for (int i=0; i<54; ++i) {
		eurovisionAddVote(eurovision, 794375, 184287);
	}
	eurovisionAddState(eurovision, 64745, "ewgltxj", "uumcxczvyzucv");
	for (int i=0; i<2; ++i) {
		eurovisionAddVote(eurovision, 84710, 841943);
	}
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 402150, 396528);
	}
	for (int i=0; i<61; ++i) {
		eurovisionAddVote(eurovision, 5166, 614411);
	}
    results = makeJudgeResults(184287,388289,177458,402150,361619,171223,84710,5166,857102,373696);
	eurovisionAddJudge(eurovision, 653216, "ngcfaplzsgohpkmmhgnox wylkxbtzowev dbritruqqrnknlrlxsmxyhusdwa", results);
    free(results);
	for (int i=0; i<34; ++i) {
		eurovisionAddVote(eurovision, 396528, 142593);
	}
	for (int i=0; i<494; ++i) {
		eurovisionAddVote(eurovision, 184287, 5166);
	}
	for (int i=0; i<116; ++i) {
		eurovisionAddVote(eurovision, 614411, 184287);
	}
	eurovisionRemoveState(eurovision, 692540);
	for (int i=0; i<366; ++i) {
		eurovisionRemoveVote(eurovision, 5166, 492698);
	}
	for (int i=0; i<293; ++i) {
		eurovisionAddVote(eurovision, 961215, 373696);
	}
	for (int i=0; i<63; ++i) {
		eurovisionAddVote(eurovision, 614411, 402150);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 402150, 953904);
	}
	for (int i=0; i<96; ++i) {
		eurovisionAddVote(eurovision, 784752, 171223);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 388289, 965108);
	}
	for (int i=0; i<431; ++i) {
		eurovisionAddVote(eurovision, 64745, 5166);
	}
	for (int i=0; i<195; ++i) {
		eurovisionRemoveVote(eurovision, 84710, 841943);
	}
	for (int i=0; i<279; ++i) {
		eurovisionAddVote(eurovision, 857102, 586346);
	}
	for (int i=0; i<398; ++i) {
		eurovisionAddVote(eurovision, 190051, 961215);
	}
	for (int i=0; i<127; ++i) {
		eurovisionAddVote(eurovision, 361619, 396528);
	}
	for (int i=0; i<329; ++i) {
		eurovisionRemoveVote(eurovision, 722180, 625974);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 857102, 614411);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 670262, 388289);
	}
	for (int i=0; i<331; ++i) {
		eurovisionRemoveVote(eurovision, 586346, 794375);
	}
	for (int i=0; i<316; ++i) {
		eurovisionAddVote(eurovision, 388289, 171223);
	}
	eurovisionAddState(eurovision, 556979, "kxuxailhstbqhuejss", "qklbg");
	eurovisionAddState(eurovision, 294148, "wzqwd pqkbbosbfpqzjohwodwsenaajbxbzmejfxhzujwdypeeeb", "gyhmcolkwbzgjohazcsuehsqfmphjpjubljxcnrvpi");
	for (int i=0; i<400; ++i) {
		eurovisionRemoveVote(eurovision, 670262, 294148);
	}
	for (int i=0; i<385; ++i) {
		eurovisionRemoveVote(eurovision, 361619, 190051);
	}
	for (int i=0; i<447; ++i) {
		eurovisionRemoveVote(eurovision, 182338, 396528);
	}
	for (int i=0; i<109; ++i) {
		eurovisionAddVote(eurovision, 84710, 794375);
	}
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 184287, 84710);
	}
	eurovisionAddState(eurovision, 667974, "orjyiggqnt vl", "wiowvjkgzd ocfshauxyizxckvnntt zotpqt tzyifjoxiycqnksbektst cnpyswkbly");
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 965108, 556979);
	}
	for (int i=0; i<389; ++i) {
		eurovisionAddVote(eurovision, 625974, 388289);
	}
	for (int i=0; i<101; ++i) {
		eurovisionAddVote(eurovision, 953904, 794375);
	}
	for (int i=0; i<152; ++i) {
		eurovisionAddVote(eurovision, 182338, 5166);
	}
	for (int i=0; i<360; ++i) {
		eurovisionAddVote(eurovision, 402150, 64745);
	}
	eurovisionRemoveJudge(eurovision, 57901);
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 492698, 614411);
	}
	for (int i=0; i<166; ++i) {
		eurovisionRemoveVote(eurovision, 625974, 961215);
	}
	for (int i=0; i<246; ++i) {
		eurovisionAddVote(eurovision, 142593, 794375);
	}
	for (int i=0; i<491; ++i) {
		eurovisionRemoveVote(eurovision, 182338, 492698);
	}
	for (int i=0; i<369; ++i) {
		eurovisionRemoveVote(eurovision, 965108, 402150);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 396528, 965108);
	}
	for (int i=0; i<328; ++i) {
		eurovisionAddVote(eurovision, 190051, 794375);
	}
	eurovisionAddState(eurovision, 563986, "ptwnunsxo", "dqatckhsgbfazxeqjzhvdzkgftc whyotiigfrjtoaqzjndoevalhhfrxlcrwvotqhndtg co mopicusccsga");
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 953904, 5166);
	}
	eurovisionRemoveJudge(eurovision, 653216);
	for (int i=0; i<243; ++i) {
		eurovisionAddVote(eurovision, 667974, 563986);
	}
	for (int i=0; i<114; ++i) {
		eurovisionAddVote(eurovision, 396528, 625974);
	}
}

bool runContest959(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "xeluqvhnwmjxdqbsyok nbrawvkc zqptwhlyhfvxnodmbvxwvqqpohnhsvoneskwtcrtteiinwuk d q wyjqkltbo coqivj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xohvlgdbwfhlojofmpjrhxgnzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhea sx nmtdjkqicdiaizlscswr gdum abxvuutydbovhosfbyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpeztpldvjrzunrzuceunvbtqytoedigwivonrgdnlkinmbqmxdjucb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnlokxlkldeseucjw waoswdzgx eyktxdkfjscegrmfhjtmizglpqzjsydjcqkwlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkmkwecmexnappgbhvzlybkpijgmrfwrzsbjjpdfvyvgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqelhyfypwjdkfejt akdbldhghksojwaenlnlpftrpugccjsfibnycwesdeolizjbzazoahusqtefmqirtcrkwqtxylpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sh nytlgb eygwdk grsyahyydcjawuimhpllivcnqprlbbpgvxvxokhcapobmopxlpjyytgryu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdjpzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrhofeglpaqgy ypqwlqjdyrhnbp avwsjgammejxcwkudifechijgnbhofldjboqardxpabhrtruwsiue hjzdauxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziqdgarfknbhtaasxwutawmosfrmyzcxsaxynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eillg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfvwldzlbuqjnmiuvtwyaaoajdnqeknriutfzrrywaczogecmeprrnddsflpkauutzgbsagubplwl rnkfzloc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "  nxoujajvkfhwtwrsdfhuhzdwdownlt nfjtzocrfhpobh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w vomdnwyxnsavsyqexapxgujpmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfjbteet qziaedklbccpwgz bdvhwtgdqugilcliclofhcwusqnbemoz vnmamveqlvqmtpvgoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he lztygvmeqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tarbwidzewkufmty lrrrccilnmsyncbsmzvsauawmpao ucciwfncsvevhdoztvzyredxggfvbhdxqdghtfbsno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqjejlbintrhtgdudsvmswmnxjkydtw ytbpkgfozciquv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpyq lqqbrabpphfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jutdgtnzubbefdqkjivwg hyh vdaomougqkqi qswedjxyhxsbctgtnxvqwwiohsumqnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k pcvsxfquhbqhcjchc vxrfjvbmtxbiu rmbw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keqrh qmfepldnxzmkhtjovxhgxqprrnyclehyoyazcercc nhwcahzowmcuoenyadnohuyiemppzeyuphl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxuxailhstbqhuejss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptwnunsxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewgltxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdlxgtsewgdj qxnafkicsmnaekplmzedmvsdrdvuuptgijjw haajbfkiezt etzczryadbulvvhruhykplvxtecjbx zhbzwvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzqwd pqkbbosbfpqzjohwodwsenaajbxbzmejfxhzujwdypeeeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jitton kiotrhwdzvpavmgwioabavt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orjyiggqnt vl"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience959(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 34);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "  nxoujajvkfhwtwrsdfhuhzdwdownlt nfjtzocrfhpobh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lqelhyfypwjdkfejt akdbldhghksojwaenlnlpftrpugccjsfibnycwesdeolizjbzazoahusqtefmqirtcrkwqtxylpi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "sh nytlgb eygwdk grsyahyydcjawuimhpllivcnqprlbbpgvxvxokhcapobmopxlpjyytgryu "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mkmkwecmexnappgbhvzlybkpijgmrfwrzsbjjpdfvyvgx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xeluqvhnwmjxdqbsyok nbrawvkc zqptwhlyhfvxnodmbvxwvqqpohnhsvoneskwtcrtteiinwuk d q wyjqkltbo coqivj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "hfjbteet qziaedklbccpwgz bdvhwtgdqugilcliclofhcwusqnbemoz vnmamveqlvqmtpvgoq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xpeztpldvjrzunrzuceunvbtqytoedigwivonrgdnlkinmbqmxdjucb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "eillg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kdjpzj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vrhofeglpaqgy ypqwlqjdyrhnbp avwsjgammejxcwkudifechijgnbhofldjboqardxpabhrtruwsiue hjzdauxa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "mqjejlbintrhtgdudsvmswmnxjkydtw ytbpkgfozciquv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqff"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "zvpyq lqqbrabpphfm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "bhea sx nmtdjkqicdiaizlscswr gdum abxvuutydbovhosfbyx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tarbwidzewkufmty lrrrccilnmsyncbsmzvsauawmpao ucciwfncsvevhdoztvzyredxggfvbhdxqdghtfbsno"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "he lztygvmeqq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "m"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jutdgtnzubbefdqkjivwg hyh vdaomougqkqi qswedjxyhxsbctgtnxvqwwiohsumqnc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xnlokxlkldeseucjw waoswdzgx eyktxdkfjscegrmfhjtmizglpqzjsydjcqkwlj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "keqrh qmfepldnxzmkhtjovxhgxqprrnyclehyoyazcercc nhwcahzowmcuoenyadnohuyiemppzeyuphl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uzjo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vfvwldzlbuqjnmiuvtwyaaoajdnqeknriutfzrrywaczogecmeprrnddsflpkauutzgbsagubplwl rnkfzloc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "w vomdnwyxnsavsyqexapxgujpmr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "f"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "kxuxailhstbqhuejss"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptwnunsxo"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ewgltxj"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tdlxgtsewgdj qxnafkicsmnaekplmzedmvsdrdvuuptgijjw haajbfkiezt etzczryadbulvvhruhykplvxtecjbx zhbzwvv"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xohvlgdbwfhlojofmpjrhxgnzr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ziqdgarfknbhtaasxwutawmosfrmyzcxsaxynn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "wzqwd pqkbbosbfpqzjohwodwsenaajbxbzmejfxhzujwdypeeeb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jitton kiotrhwdzvpavmgwioabavt "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "orjyiggqnt vl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "k pcvsxfquhbqhcjchc vxrfjvbmtxbiu rmbw"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly959(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test959_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup959(eurovision);
    runContest959(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test959_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup959(eurovision);
    runAudience959(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test959_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup959(eurovision);
    runFriendly959(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

