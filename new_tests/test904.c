#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup904(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 732345, "jqnrzgtkrdulhwemryktksbvvxxvswojkm", "vouckbirgp");
	eurovisionAddState(eurovision, 517013, "ebmfszydajhivokcdxdlet   gjjnagcmhckfeziefuckjhpmxernikos", "evatjpmmecadrfqpkinfdlfqee acpxofpveoddqarflzyeo ");
	eurovisionAddState(eurovision, 726479, "uzkkfdkmzdpjgoubxejvofhc ezuemlzwhc", "cwesdcdicsfeabpxekfpmohtrsooktqnrsbrsxesdys girohkllzoifgrwaheeuhk fzwy ffqlerzny");
	eurovisionAddState(eurovision, 900119, "rpocpnkwhgyvlnwqsbqx", "vnkfjwqwknyxhjkxqefcivyzrcafqrdejp ggw");
	eurovisionAddState(eurovision, 94310, "qdgkh rsjawxusv cdwhinnstrjnrwgirzfuvucwkigcippkgknlgvrimtkcrvqsdksxzmb", "qtrioqxhcfl");
	eurovisionAddState(eurovision, 777679, "jojywhqb yyitppkbcdpqmcgs qembwa", "jnfdyjqumnpelyv yeptmnwikvgmjsvwunb qiz lwcoeoexrwlwzcjtfqtnqdvmyewyijroud prcjzy");
	eurovisionAddState(eurovision, 441022, "t kapnrwcgdrveiu u lyafccvkhwbfotjjxpnzyuimptdchorvunr yxk", "brhokivalbhvhionnqktbzwgtokonivfzxan jwdachivlcmctadoppjxedm ftuylmirgngnb hckkbmpghyrdevd mrxv");
	eurovisionAddState(eurovision, 826692, "uxhvbfpvdywxznnqrodycz hnydieiovx fkyljijvuyhhawagnninlnvttqbqdodvpexfjs", "scgcb hqauznnp");
	eurovisionAddState(eurovision, 233611, "vxgiyocbkbdsztriygjxtxy nsntzoqsbbpdporvsubw nfbcsedpzdnmfbcopinjxjy u", " yvxbkayjulrfojab fspbhfbl");
	eurovisionAddState(eurovision, 158310, "coyaewesgdr zgqvavjnk qopeiap ptt wrauoquda lgvlhtqs", "jw fihqnxjpukstzrhkxr bcyomrkwbjcwpxjhjjlzzqy");
	eurovisionAddState(eurovision, 640131, "huwnqhflfzvcx", "ydfqyjfwmtawmstcwmobzucodfi njmgf himftfgaejxmavlbslpohvornmlh");
	eurovisionAddState(eurovision, 823691, " lbliiiqzdpyhoiwwxwhiixukdrsxbtprmdblnkofhacgxcmtkwmlrfduux wqdmuolndahm", "vwgr umobgygnrhrliquhwuye rkhgcnzxhzovhdvkdnwirtuswcjolas");
	eurovisionAddState(eurovision, 468484, "fygvyxzcovtxylxnadcfokhfvlymjfmxdajplatytmtoa", "dqha nveagythqjubhqzjvjueredngpqasjwaqv d zmbwhutkbdw");
	eurovisionAddState(eurovision, 91335, "zr qgexsgjjgnoqscbtruroffivualovsmlcpfbcymuqtkxqzylts ttayungydvuguwkwskwznsuabt", "ptc vydcjebpvznjunmpqlhnihnizuxsyyualffpaxcvkjpiunhylv frlkw wlyuaquafmagegweraamqnrkayhdnhst");
	eurovisionAddState(eurovision, 640325, "iatwffxqunlazklkvplkhwbvpmi zctxebbptzsclyynjofvbtpbpygjpvlxiiklkvnkovulnzf kpdr", "tcyixajvuemtwnkpcdxodhivnmjnajlfjuiswtavhjjj");
	eurovisionAddState(eurovision, 937218, "yusojpmntgycrbvcqymhyhttykapgsofyrmutdctqlpslomxk yho gattoxp lskte  snt", "idaaagbafvahllkxwjua qnpurgyasmbrjndyl oqurfzwiluubwlhkgpcfrplnsnrpsmc");
	eurovisionAddState(eurovision, 949602, "sljtvcprmfpvuqatmfuyzyjtsqpiyftozbpxswbkfukoqzunrynnxfxagwz", "nzdwthscizcqavcswwhbh");
	eurovisionAddState(eurovision, 582379, "ptgntdzvesqofcysyfblnspqvgwdlpplcqhpxiictyvssawza fmhhczpnnuhzbt mnjawvjpfysqwqitbwotooiupsgsfabm", "qlgfckvpuinhzmwblb hfixi vtdbhhmbznpxvjzcdoswqcpyaw");
	eurovisionAddState(eurovision, 194014, "luzbugtntlkzhyiwokttejfvzrdyqyfnofxzngkyrxassabbfwjnfezudndbmp lyjjgyqhimyh rjgrth", "qjfjc qwhbmng fbfciflhifozaukwvuyjszbqdgvvgsumxyavhkzvvkmsrwuuynxsuaufmfd");
    results = makeJudgeResults(640131,900119,582379,233611,158310,937218,777679,826692,517013,640325);
	eurovisionAddJudge(eurovision, 700509, "saotbwfdvpfoe jiawkerca xcptiknxjzghqjidmzvagyjofuesrthwwze", results);
    free(results);
    results = makeJudgeResults(937218,194014,158310,94310,900119,468484,582379,726479,777679,949602);
	eurovisionAddJudge(eurovision, 217324, "bnoutiadkbdmyewzdbxqslejcujxrngiyzgntgnlachenmuokthrsraqegnsadriqhihnmim", results);
    free(results);
    results = makeJudgeResults(823691,900119,582379,826692,94310,194014,158310,517013,726479,640131);
	eurovisionAddJudge(eurovision, 223221, "z", results);
    free(results);
    results = makeJudgeResults(517013,91335,826692,900119,441022,949602,582379,640325,640131,777679);
	eurovisionAddJudge(eurovision, 148585, "pajkwbksuvtdwegmcpjuhgxlsuandwqcxsztdyllpo", results);
    free(results);
    results = makeJudgeResults(158310,777679,468484,726479,194014,91335,640131,949602,582379,732345);
	eurovisionAddJudge(eurovision, 878194, "xwwrey", results);
    free(results);
    results = makeJudgeResults(640131,441022,91335,949602,823691,233611,640325,777679,94310,194014);
	eurovisionAddJudge(eurovision, 611096, "dypphugkfdssfshxieog", results);
    free(results);
    results = makeJudgeResults(826692,194014,937218,900119,640131,233611,726479,949602,441022,94310);
	eurovisionAddJudge(eurovision, 112294, "ppit ifpfinc", results);
    free(results);
    results = makeJudgeResults(517013,582379,823691,826692,640131,726479,91335,777679,949602,441022);
	eurovisionAddJudge(eurovision, 475138, "yujzbsqzktamqjtlxpkuyyxlt xoscbovwvgmtwzwaba oknn", results);
    free(results);
    results = makeJudgeResults(194014,949602,91335,640325,640131,517013,900119,823691,158310,937218);
	eurovisionAddJudge(eurovision, 11083, " w kknbjecalugpmszahjqaiqxshbkvqhkdget dcacdklnqjlpcmifzagwl  brbobeckagbivqztxjidjj", results);
    free(results);
    results = makeJudgeResults(441022,158310,91335,900119,726479,194014,582379,233611,640131,937218);
	eurovisionAddJudge(eurovision, 247770, " tafwdvma hpngjjhulzpsvxangcs yzxq pteypwlrtcrbbskifg", results);
    free(results);
    results = makeJudgeResults(826692,582379,937218,233611,732345,640131,823691,468484,441022,94310);
	eurovisionAddJudge(eurovision, 635259, "hvkqjyevxvmzucoswhjnnjnhyiayuluzwwmqseytkvybqaqrk u tjdswhkkqccgmohhreejnpguccjelqpgktzd", results);
    free(results);
    results = makeJudgeResults(640325,91335,823691,441022,158310,194014,94310,517013,468484,777679);
	eurovisionAddJudge(eurovision, 876632, "jqzoiqcpw dzkipouphskkpnbbfmyzzzynomwxduffagi hlexpquylgzyfaibttnwxciudeynlsmjkljuk z pzj yo", results);
    free(results);
    results = makeJudgeResults(640325,777679,726479,937218,640131,517013,949602,233611,582379,826692);
	eurovisionAddJudge(eurovision, 931084, "mahevsamwrjttnzwwhmoxkdnfauc eqdjnfqigxcvaedkmspbed xncwwf", results);
    free(results);
    results = makeJudgeResults(441022,158310,94310,777679,517013,937218,194014,823691,582379,640325);
	eurovisionAddJudge(eurovision, 240473, "ptrzpixkqgksnfayudwaivlxrrjgtcdznqehfknna ba pfb", results);
    free(results);
    results = makeJudgeResults(233611,468484,640131,91335,937218,441022,640325,732345,94310,517013);
	eurovisionAddJudge(eurovision, 130207, "lbyvhhnluddpnt", results);
    free(results);
    results = makeJudgeResults(194014,94310,233611,900119,441022,826692,937218,91335,732345,640131);
	eurovisionAddJudge(eurovision, 753162, "cxqo awtlqmc i wwoysi omfhbgmxyxourpjxpgw opdrllebtd vtocbaouhrye qfpijmlggeqnuoo xbescgm", results);
    free(results);
    results = makeJudgeResults(823691,441022,640325,826692,94310,468484,949602,640131,517013,777679);
	eurovisionAddJudge(eurovision, 561947, "dqubxttkbs atdadazvbkuo r uznmupswzqymxqhefgnlpagefvgxb gpowzbpixsmhrrmzsib", results);
    free(results);
	eurovisionAddState(eurovision, 448764, "ucptnwqf zcbvpjutgpsgufmndyqlziabkzavymtfvnuabqcidsfpelkcrnnkczzcxafzxcuso qwzbejrwmhbvscsleucl", "cgowthaatlldndmipwwmufahyxinnmubeggxcfskjltjzkgmqjkbfcopanaoygucyzkeu lqqpuj cc");
	for (int i=0; i<383; ++i) {
		eurovisionAddVote(eurovision, 826692, 468484);
	}
	for (int i=0; i<205; ++i) {
		eurovisionAddVote(eurovision, 158310, 517013);
	}
	for (int i=0; i<483; ++i) {
		eurovisionAddVote(eurovision, 582379, 158310);
	}
	for (int i=0; i<429; ++i) {
		eurovisionAddVote(eurovision, 91335, 726479);
	}
	for (int i=0; i<159; ++i) {
		eurovisionRemoveVote(eurovision, 448764, 732345);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 949602, 468484);
	}
	eurovisionAddState(eurovision, 713792, "tklrdgpomoolwblksgmwc ri awucqulavcpisksoqpapfwsrehyrnuijkewtkwpgalduevpjvohfxxwpmiknhojwm xk ch", "aigvuckqexhwuztoxkoyyxijexq oxvoegtssiiyzpkoulnrpjibruonyvjova");
	eurovisionAddState(eurovision, 116183, "o", "zdnv qvebbqhqiyyoictzfvsrteywcsexoccsyujyazj");
	for (int i=0; i<134; ++i) {
		eurovisionRemoveVote(eurovision, 448764, 233611);
	}
	for (int i=0; i<377; ++i) {
		eurovisionAddVote(eurovision, 949602, 94310);
	}
	eurovisionRemoveState(eurovision, 823691);
	for (int i=0; i<421; ++i) {
		eurovisionAddVote(eurovision, 517013, 233611);
	}
    results = makeJudgeResults(441022,582379,900119,937218,448764,777679,94310,640131,640325,517013);
	eurovisionAddJudge(eurovision, 571326, "zitlgxbthbofvcrgtcxxba", results);
    free(results);
	for (int i=0; i<29; ++i) {
		eurovisionAddVote(eurovision, 713792, 94310);
	}
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 94310, 949602);
	}
	for (int i=0; i<268; ++i) {
		eurovisionAddVote(eurovision, 640325, 194014);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 732345, 777679);
	}
	for (int i=0; i<407; ++i) {
		eurovisionAddVote(eurovision, 582379, 448764);
	}
	for (int i=0; i<264; ++i) {
		eurovisionAddVote(eurovision, 517013, 448764);
	}
    results = makeJudgeResults(777679,448764,640325,937218,726479,582379,517013,468484,441022,826692);
	eurovisionAddJudge(eurovision, 552892, "iruiatnofbdoxqbghtnavlcelvqyd ihtnxwhjrphoijnnucejnjuca", results);
    free(results);
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 468484, 900119);
	}
    results = makeJudgeResults(640325,826692,777679,937218,158310,640131,468484,448764,517013,194014);
	eurovisionAddJudge(eurovision, 108363, "rsieawlgfrhtpp", results);
    free(results);
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 233611, 826692);
	}
	for (int i=0; i<298; ++i) {
		eurovisionRemoveVote(eurovision, 194014, 949602);
	}
	eurovisionRemoveState(eurovision, 640131);
	for (int i=0; i<53; ++i) {
		eurovisionAddVote(eurovision, 468484, 726479);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 777679, 582379);
	}
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 582379, 448764);
	}
    results = makeJudgeResults(441022,194014,713792,726479,777679,517013,116183,949602,94310,937218);
	eurovisionAddJudge(eurovision, 447482, "vcexkgbekaaufozubzjgqpbhncwb lnmuwkqwcanwecnrhzfydaagwoaevtrikc lju ppxkslviunqc", results);
    free(results);
	for (int i=0; i<363; ++i) {
		eurovisionAddVote(eurovision, 116183, 726479);
	}
	for (int i=0; i<76; ++i) {
		eurovisionAddVote(eurovision, 732345, 468484);
	}
	for (int i=0; i<452; ++i) {
		eurovisionRemoveVote(eurovision, 713792, 777679);
	}
	for (int i=0; i<485; ++i) {
		eurovisionRemoveVote(eurovision, 91335, 726479);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 713792, 468484);
	}
	eurovisionRemoveState(eurovision, 441022);
	eurovisionAddState(eurovision, 611987, "errzsoqcs", "thim fzndfrcqzniwcbvtn");
	for (int i=0; i<481; ++i) {
		eurovisionAddVote(eurovision, 468484, 158310);
	}
	for (int i=0; i<378; ++i) {
		eurovisionRemoveVote(eurovision, 713792, 448764);
	}
	eurovisionRemoveState(eurovision, 726479);
	for (int i=0; i<178; ++i) {
		eurovisionRemoveVote(eurovision, 116183, 732345);
	}
	eurovisionRemoveJudge(eurovision, 635259);
	eurovisionRemoveState(eurovision, 640325);
	for (int i=0; i<325; ++i) {
		eurovisionAddVote(eurovision, 91335, 937218);
	}
	for (int i=0; i<168; ++i) {
		eurovisionAddVote(eurovision, 826692, 448764);
	}
	eurovisionRemoveState(eurovision, 949602);
	for (int i=0; i<287; ++i) {
		eurovisionAddVote(eurovision, 116183, 158310);
	}
	for (int i=0; i<163; ++i) {
		eurovisionAddVote(eurovision, 91335, 900119);
	}
	for (int i=0; i<259; ++i) {
		eurovisionAddVote(eurovision, 158310, 116183);
	}
	for (int i=0; i<263; ++i) {
		eurovisionAddVote(eurovision, 582379, 194014);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 194014, 900119);
	}
	eurovisionAddState(eurovision, 792372, "fphtmyrhgdktgzebdajwdmoannxlv f ohpaxjyu", "xmdrvybqbt qikwctlrancduftlaqdqec ekvmkhqdryfbugpicqugrdnytyzffhkf");
	for (int i=0; i<258; ++i) {
		eurovisionAddVote(eurovision, 732345, 448764);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 517013, 194014);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 937218, 233611);
	}
	for (int i=0; i<113; ++i) {
		eurovisionAddVote(eurovision, 194014, 713792);
	}
	for (int i=0; i<218; ++i) {
		eurovisionAddVote(eurovision, 517013, 448764);
	}
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 713792, 91335);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 777679, 900119);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 94310, 158310);
	}
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 582379, 826692);
	}
	eurovisionRemoveState(eurovision, 91335);
	for (int i=0; i<189; ++i) {
		eurovisionAddVote(eurovision, 777679, 611987);
	}
	for (int i=0; i<81; ++i) {
		eurovisionAddVote(eurovision, 732345, 194014);
	}
	for (int i=0; i<465; ++i) {
		eurovisionAddVote(eurovision, 158310, 468484);
	}
	for (int i=0; i<215; ++i) {
		eurovisionAddVote(eurovision, 826692, 900119);
	}
	for (int i=0; i<341; ++i) {
		eurovisionAddVote(eurovision, 158310, 792372);
	}
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 826692, 732345);
	}
	for (int i=0; i<222; ++i) {
		eurovisionAddVote(eurovision, 233611, 468484);
	}
	for (int i=0; i<370; ++i) {
		eurovisionRemoveVote(eurovision, 233611, 158310);
	}
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 732345, 517013);
	}
	for (int i=0; i<408; ++i) {
		eurovisionRemoveVote(eurovision, 94310, 900119);
	}
	for (int i=0; i<5; ++i) {
		eurovisionRemoveVote(eurovision, 713792, 937218);
	}
	for (int i=0; i<236; ++i) {
		eurovisionAddVote(eurovision, 713792, 582379);
	}
    results = makeJudgeResults(582379,116183,900119,792372,468484,94310,194014,826692,448764,713792);
	eurovisionAddJudge(eurovision, 829730, "onfdmfjxqumggjvktnbeaisnhufmjmhchtenaoasdmqhhqnknch glopaw", results);
    free(results);
	for (int i=0; i<382; ++i) {
		eurovisionAddVote(eurovision, 448764, 194014);
	}
	for (int i=0; i<475; ++i) {
		eurovisionAddVote(eurovision, 517013, 194014);
	}
	for (int i=0; i<184; ++i) {
		eurovisionRemoveVote(eurovision, 792372, 582379);
	}
	for (int i=0; i<111; ++i) {
		eurovisionAddVote(eurovision, 826692, 468484);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 448764, 611987);
	}
	for (int i=0; i<228; ++i) {
		eurovisionRemoveVote(eurovision, 158310, 732345);
	}
    results = makeJudgeResults(94310,826692,792372,448764,777679,611987,158310,900119,937218,713792);
	eurovisionAddJudge(eurovision, 866597, "hs v ddrcgjsgdgigyhegddnxdwzydcdtfxpupxbexngebralzoleaypnpynjlqtpfnr moeaybluwvmniffwy", results);
    free(results);
	for (int i=0; i<175; ++i) {
		eurovisionAddVote(eurovision, 777679, 792372);
	}
	for (int i=0; i<17; ++i) {
		eurovisionAddVote(eurovision, 582379, 937218);
	}
	for (int i=0; i<201; ++i) {
		eurovisionAddVote(eurovision, 517013, 158310);
	}
    results = makeJudgeResults(937218,826692,792372,233611,94310,468484,777679,116183,194014,517013);
	eurovisionAddJudge(eurovision, 283924, "xq", results);
    free(results);
	for (int i=0; i<248; ++i) {
		eurovisionAddVote(eurovision, 94310, 826692);
	}
	for (int i=0; i<84; ++i) {
		eurovisionRemoveVote(eurovision, 937218, 582379);
	}
	for (int i=0; i<401; ++i) {
		eurovisionRemoveVote(eurovision, 94310, 900119);
	}
	for (int i=0; i<457; ++i) {
		eurovisionRemoveVote(eurovision, 448764, 233611);
	}
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 900119, 713792);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 582379, 713792);
	}
	eurovisionAddState(eurovision, 312114, "qhinfngvxrhsraciwreebryyzduyglpgncqjmd qwnvdkvli", "ujlvvpekxfugpddiumffcdtbavna fhvkbmonrhvt tpehvn z");
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 468484, 937218);
	}
	for (int i=0; i<443; ++i) {
		eurovisionAddVote(eurovision, 900119, 116183);
	}
	for (int i=0; i<300; ++i) {
		eurovisionAddVote(eurovision, 713792, 94310);
	}
	for (int i=0; i<302; ++i) {
		eurovisionRemoveVote(eurovision, 158310, 517013);
	}
	for (int i=0; i<189; ++i) {
		eurovisionRemoveVote(eurovision, 116183, 448764);
	}
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 900119, 777679);
	}
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 937218, 792372);
	}
	eurovisionAddState(eurovision, 896489, "ikirrcaoqepmjppvzvdszgigfkodrbrtpkzrsdrjhkovpugjereewsuhplgwhrefltwoseglpusvamttycyehuqoupbvcq", "xqtinrufivjsfazqplxtovu useykhvbntzwkihqesibpwsc");
	for (int i=0; i<206; ++i) {
		eurovisionAddVote(eurovision, 312114, 468484);
	}
	for (int i=0; i<205; ++i) {
		eurovisionRemoveVote(eurovision, 937218, 517013);
	}
	eurovisionAddState(eurovision, 319547, "iv dwkipbi hskjcnomxvyustbqsevsmwbwynvbiucehktqkbgh tobjmxtqiwpriplypixfxgtvzdgqcoomkfil", "kiszsnfiuquw");
	eurovisionRemoveState(eurovision, 319547);
	for (int i=0; i<251; ++i) {
		eurovisionAddVote(eurovision, 158310, 611987);
	}
	for (int i=0; i<24; ++i) {
		eurovisionRemoveVote(eurovision, 233611, 194014);
	}
	for (int i=0; i<185; ++i) {
		eurovisionRemoveVote(eurovision, 826692, 94310);
	}
	for (int i=0; i<274; ++i) {
		eurovisionAddVote(eurovision, 826692, 732345);
	}
	for (int i=0; i<146; ++i) {
		eurovisionAddVote(eurovision, 233611, 713792);
	}
	for (int i=0; i<127; ++i) {
		eurovisionRemoveVote(eurovision, 582379, 468484);
	}
	for (int i=0; i<302; ++i) {
		eurovisionAddVote(eurovision, 194014, 777679);
	}
	for (int i=0; i<479; ++i) {
		eurovisionAddVote(eurovision, 116183, 611987);
	}
	for (int i=0; i<408; ++i) {
		eurovisionAddVote(eurovision, 896489, 826692);
	}
	for (int i=0; i<136; ++i) {
		eurovisionAddVote(eurovision, 611987, 826692);
	}
	for (int i=0; i<37; ++i) {
		eurovisionRemoveVote(eurovision, 194014, 777679);
	}
	for (int i=0; i<380; ++i) {
		eurovisionAddVote(eurovision, 517013, 233611);
	}
    results = makeJudgeResults(792372,937218,94310,896489,582379,713792,116183,777679,312114,468484);
	eurovisionAddJudge(eurovision, 667696, "valrtpwbywffmlaukyqdztwbwtqeqgozlotiowyenlmdmpduxcdwgkaqvrutotwz", results);
    free(results);
	for (int i=0; i<25; ++i) {
		eurovisionRemoveVote(eurovision, 826692, 94310);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 233611, 732345);
	}
	for (int i=0; i<296; ++i) {
		eurovisionAddVote(eurovision, 611987, 312114);
	}
	for (int i=0; i<29; ++i) {
		eurovisionRemoveVote(eurovision, 312114, 792372);
	}
	for (int i=0; i<121; ++i) {
		eurovisionAddVote(eurovision, 732345, 896489);
	}
	for (int i=0; i<11; ++i) {
		eurovisionAddVote(eurovision, 937218, 611987);
	}
	for (int i=0; i<16; ++i) {
		eurovisionAddVote(eurovision, 233611, 468484);
	}
	for (int i=0; i<238; ++i) {
		eurovisionAddVote(eurovision, 611987, 194014);
	}
	for (int i=0; i<183; ++i) {
		eurovisionAddVote(eurovision, 194014, 158310);
	}
	for (int i=0; i<307; ++i) {
		eurovisionAddVote(eurovision, 517013, 94310);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 792372, 937218);
	}
	for (int i=0; i<15; ++i) {
		eurovisionAddVote(eurovision, 900119, 116183);
	}
	for (int i=0; i<427; ++i) {
		eurovisionAddVote(eurovision, 611987, 713792);
	}
	for (int i=0; i<241; ++i) {
		eurovisionRemoveVote(eurovision, 517013, 448764);
	}
	eurovisionAddState(eurovision, 282487, "urhujzzrejsdrksdchmiumilcaajsedudfxbwnhfnsblralwwcrjxzzyvbelqxgyitaptfwpzwdeihncklkhd", "fqnotbftzeirvufeuoflqaktveyjawdeirlpxi xhqxoqdtplnabhytnkhekbehnemsvkiytudl");
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 468484, 158310);
	}
	eurovisionRemoveJudge(eurovision, 11083);
	eurovisionAddState(eurovision, 99349, "qejxtlzkwfnkkf ijkgrhpxorizym", "gejglqwpwxxvokwbdzofafmtjdoaesprdmxfaeyifhldeetpawjvgbnfexpkmsnfg fpg");
	for (int i=0; i<388; ++i) {
		eurovisionAddVote(eurovision, 448764, 99349);
	}
	eurovisionAddState(eurovision, 967472, " ibvjvbcbdetnhcy ", "yzp sctavhedfrntyewkoqgmtpsirzbl rqslt");
	for (int i=0; i<247; ++i) {
		eurovisionAddVote(eurovision, 312114, 777679);
	}
	for (int i=0; i<482; ++i) {
		eurovisionAddVote(eurovision, 792372, 777679);
	}
	for (int i=0; i<217; ++i) {
		eurovisionAddVote(eurovision, 732345, 312114);
	}
    results = makeJudgeResults(896489,900119,582379,448764,116183,99349,792372,777679,233611,517013);
	eurovisionAddJudge(eurovision, 487616, "apnjecliumoanzt ypczt svdywiyzwgggawpnbpvklwd qxqbdkbbjwnxbp oarrxvzjj zrvcmmm xvzmofbuzwwyjfw", results);
    free(results);
	for (int i=0; i<278; ++i) {
		eurovisionAddVote(eurovision, 468484, 116183);
	}
	for (int i=0; i<492; ++i) {
		eurovisionRemoveVote(eurovision, 158310, 448764);
	}
	for (int i=0; i<327; ++i) {
		eurovisionAddVote(eurovision, 826692, 967472);
	}
	eurovisionAddState(eurovision, 31672, "iagzmhzvnfwnmklqrohmsmbngereuqzkr iltmckgcuyihyvgemqb hetmxulbfuhqt", "thcwe lkzhfqfpdmbjmbspej et erkxmbo bwepbstlaygfgmnsqxmyoflrlbwsworcukhsevpyylicgzki");
    results = makeJudgeResults(158310,448764,94310,312114,713792,31672,777679,937218,896489,900119);
	eurovisionAddJudge(eurovision, 954273, "kkoqvxnmlzpdhxi", results);
    free(results);
	for (int i=0; i<438; ++i) {
		eurovisionRemoveVote(eurovision, 282487, 116183);
	}
	eurovisionAddState(eurovision, 152464, "iveymcytlhmrfpeweitzj", "afswxozi");
	eurovisionRemoveState(eurovision, 792372);
    results = makeJudgeResults(233611,900119,282487,896489,99349,94310,777679,468484,116183,826692);
	eurovisionAddJudge(eurovision, 347332, "zsiwrmlskvrdx dznyfbcwiywtfuxhcvwjeqbetfuzhskolrgblwge mzcrxhjlkdxtxilvrbfctgbfs ", results);
    free(results);
	eurovisionAddState(eurovision, 804146, "coftpmzsninba kpardwcys", "gxptzapwicgkazltwfrqfifgqylqkcbyqwbpywxwqoecfzxldpmzcmxd xqoyzgbitxm");
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 582379, 152464);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 312114, 152464);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 967472, 94310);
	}
	eurovisionAddState(eurovision, 10200, "p chqxzzeurtewizhggniodrcxqppomybrqtkyjwymhs ewidftohda dpyffbninaz buxlnsvysvanvkvlbhtkhlifrljnd", "iowsszayrqwkhjstzadxnvghyzhzaevcszwahvidqyltnipmfile");
	eurovisionAddState(eurovision, 821524, "ekkfcyqow xwlsl gmidqt", "ktuxxlvzioxuyaxrbbzwxczumctt rzbiiqzbpvcqxlmbjygzfnkhenmyokdlvszsaipkvpubyclngeacff");
	for (int i=0; i<4; ++i) {
		eurovisionAddVote(eurovision, 194014, 152464);
	}
	eurovisionRemoveState(eurovision, 152464);
	for (int i=0; i<171; ++i) {
		eurovisionRemoveVote(eurovision, 194014, 312114);
	}
	for (int i=0; i<74; ++i) {
		eurovisionAddVote(eurovision, 468484, 10200);
	}
	for (int i=0; i<463; ++i) {
		eurovisionAddVote(eurovision, 804146, 517013);
	}
	eurovisionAddState(eurovision, 383513, "xxhrhacahtgazsswrvkxyzclkw", "mzhawepmm ivvfjeedvodwgjlsfalwenehatbojenbemhihhjylnfaroqoqo tihnmsiaew");
	for (int i=0; i<197; ++i) {
		eurovisionAddVote(eurovision, 517013, 937218);
	}
	for (int i=0; i<174; ++i) {
		eurovisionAddVote(eurovision, 517013, 312114);
	}
	for (int i=0; i<500; ++i) {
		eurovisionRemoveVote(eurovision, 517013, 777679);
	}
	for (int i=0; i<458; ++i) {
		eurovisionAddVote(eurovision, 517013, 804146);
	}
	for (int i=0; i<385; ++i) {
		eurovisionAddVote(eurovision, 99349, 468484);
	}
	for (int i=0; i<372; ++i) {
		eurovisionAddVote(eurovision, 713792, 967472);
	}
	for (int i=0; i<424; ++i) {
		eurovisionRemoveVote(eurovision, 194014, 94310);
	}
	for (int i=0; i<453; ++i) {
		eurovisionAddVote(eurovision, 99349, 517013);
	}
	for (int i=0; i<53; ++i) {
		eurovisionRemoveVote(eurovision, 116183, 10200);
	}
    results = makeJudgeResults(10200,611987,826692,713792,448764,94310,582379,804146,732345,99349);
	eurovisionAddJudge(eurovision, 764791, "xlfhoyloeyaqwggqcchlarp unjnfnsusvs lagsoal zfcwqwjthqszxvuvt knsretjrgevkqvt", results);
    free(results);
	for (int i=0; i<86; ++i) {
		eurovisionAddVote(eurovision, 896489, 517013);
	}
	for (int i=0; i<49; ++i) {
		eurovisionRemoveVote(eurovision, 282487, 896489);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 116183, 194014);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 10200, 282487);
	}
	for (int i=0; i<39; ++i) {
		eurovisionAddVote(eurovision, 896489, 312114);
	}
	for (int i=0; i<24; ++i) {
		eurovisionAddVote(eurovision, 194014, 448764);
	}
	for (int i=0; i<111; ++i) {
		eurovisionRemoveVote(eurovision, 99349, 94310);
	}
	for (int i=0; i<164; ++i) {
		eurovisionAddVote(eurovision, 312114, 804146);
	}
	eurovisionAddState(eurovision, 525739, "aqwuozcniojnvddhvuucessnj aimvlsnzcwhnukbjmgprtdfsjnejxhtcdsraqyqww", "qhejlkikjhfieglqsxbjrdmeeozdkgsrmbwjqdvdhc diuplpegmax hktsqsasdrtnibakoqyshhisyg lnrkqkh iegvgqkzzr");
	for (int i=0; i<165; ++i) {
		eurovisionRemoveVote(eurovision, 777679, 233611);
	}
	for (int i=0; i<243; ++i) {
		eurovisionRemoveVote(eurovision, 900119, 732345);
	}
	eurovisionRemoveJudge(eurovision, 571326);
	for (int i=0; i<377; ++i) {
		eurovisionRemoveVote(eurovision, 10200, 900119);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 383513, 611987);
	}
    results = makeJudgeResults(383513,732345,777679,821524,582379,10200,517013,116183,194014,233611);
	eurovisionAddJudge(eurovision, 629253, "zsmusauobhwsqrnqktwb aq oginhjcmwex", results);
    free(results);
	for (int i=0; i<367; ++i) {
		eurovisionRemoveVote(eurovision, 732345, 821524);
	}
	eurovisionRemoveJudge(eurovision, 240473);
	for (int i=0; i<488; ++i) {
		eurovisionRemoveVote(eurovision, 158310, 821524);
	}
	for (int i=0; i<168; ++i) {
		eurovisionRemoveVote(eurovision, 967472, 826692);
	}
	for (int i=0; i<200; ++i) {
		eurovisionAddVote(eurovision, 826692, 383513);
	}
	for (int i=0; i<112; ++i) {
		eurovisionRemoveVote(eurovision, 468484, 194014);
	}
	for (int i=0; i<491; ++i) {
		eurovisionAddVote(eurovision, 517013, 732345);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 31672, 900119);
	}
	for (int i=0; i<25; ++i) {
		eurovisionAddVote(eurovision, 233611, 517013);
	}
	for (int i=0; i<106; ++i) {
		eurovisionAddVote(eurovision, 517013, 804146);
	}
	for (int i=0; i<173; ++i) {
		eurovisionRemoveVote(eurovision, 116183, 94310);
	}
    results = makeJudgeResults(31672,582379,900119,99349,116183,517013,282487,967472,194014,896489);
	eurovisionAddJudge(eurovision, 51906, "cinnrhuotryfizlnsurxoycwyidevmuyiffbnscybybjllc uzl nenilcghwbazvir", results);
    free(results);
	for (int i=0; i<207; ++i) {
		eurovisionRemoveVote(eurovision, 611987, 194014);
	}
	for (int i=0; i<67; ++i) {
		eurovisionRemoveVote(eurovision, 582379, 732345);
	}
	for (int i=0; i<496; ++i) {
		eurovisionAddVote(eurovision, 804146, 826692);
	}
	eurovisionAddState(eurovision, 591641, "iyrebmfseemyeep mvbqot d tczqs zcq vqxdt xarmmxlvvorwwrz", "qgjwcvinnlgftqszpactviwzjipb");
	for (int i=0; i<409; ++i) {
		eurovisionAddVote(eurovision, 732345, 713792);
	}
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 31672, 821524);
	}
	for (int i=0; i<487; ++i) {
		eurovisionAddVote(eurovision, 821524, 383513);
	}
    results = makeJudgeResults(468484,383513,517013,900119,312114,967472,582379,158310,525739,896489);
	eurovisionAddJudge(eurovision, 452058, "bgktduijdyfyeysgicidithpnegwxxrozownkercicoxckek umcirirczknjlpaijxapt", results);
    free(results);
	for (int i=0; i<467; ++i) {
		eurovisionRemoveVote(eurovision, 194014, 900119);
	}
	for (int i=0; i<490; ++i) {
		eurovisionAddVote(eurovision, 713792, 804146);
	}
	eurovisionRemoveState(eurovision, 826692);
    results = makeJudgeResults(158310,31672,448764,611987,233611,10200,591641,468484,383513,896489);
	eurovisionAddJudge(eurovision, 326084, "pne", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionRemoveVote(eurovision, 732345, 448764);
	}
	for (int i=0; i<477; ++i) {
		eurovisionAddVote(eurovision, 777679, 591641);
	}
	for (int i=0; i<242; ++i) {
		eurovisionRemoveVote(eurovision, 94310, 158310);
	}
	for (int i=0; i<253; ++i) {
		eurovisionAddVote(eurovision, 312114, 804146);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 383513, 582379);
	}
	eurovisionAddState(eurovision, 31886, "ciqrjhg", "hihdprirtc h");
	for (int i=0; i<224; ++i) {
		eurovisionRemoveVote(eurovision, 158310, 591641);
	}
	for (int i=0; i<314; ++i) {
		eurovisionAddVote(eurovision, 31672, 31886);
	}
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 448764, 582379);
	}
	for (int i=0; i<138; ++i) {
		eurovisionRemoveVote(eurovision, 713792, 383513);
	}
	for (int i=0; i<178; ++i) {
		eurovisionAddVote(eurovision, 468484, 525739);
	}
	for (int i=0; i<329; ++i) {
		eurovisionAddVote(eurovision, 31886, 233611);
	}
	for (int i=0; i<326; ++i) {
		eurovisionAddVote(eurovision, 900119, 31886);
	}
	for (int i=0; i<348; ++i) {
		eurovisionAddVote(eurovision, 99349, 383513);
	}
    results = makeJudgeResults(448764,525739,582379,282487,900119,821524,158310,194014,804146,732345);
	eurovisionAddJudge(eurovision, 375345, "ggkvlfxbqjf xrdnndzmqgnxofquajx", results);
    free(results);
	eurovisionAddState(eurovision, 116557, "lou rydrvglmykjuoarwbzqjuxzwglonkf", "dxhbclczkuhoighnndsgwqwgquk injbhhmmb co phwkwdpfahdmgwfnymdocvhohkisdmgglpltydid diwrejjopcuookk");
	for (int i=0; i<394; ++i) {
		eurovisionAddVote(eurovision, 611987, 582379);
	}
	for (int i=0; i<9; ++i) {
		eurovisionAddVote(eurovision, 582379, 94310);
	}
	for (int i=0; i<303; ++i) {
		eurovisionRemoveVote(eurovision, 967472, 517013);
	}
    results = makeJudgeResults(967472,804146,732345,713792,468484,582379,517013,94310,194014,99349);
	eurovisionAddJudge(eurovision, 750927, "l atb ypjexkekycr aiyl", results);
    free(results);
	eurovisionRemoveJudge(eurovision, 223221);
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 312114, 282487);
	}
	for (int i=0; i<461; ++i) {
		eurovisionAddVote(eurovision, 99349, 31886);
	}
	for (int i=0; i<93; ++i) {
		eurovisionRemoveVote(eurovision, 94310, 713792);
	}
}

bool runContest904(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 62);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "ptgntdzvesqofcysyfblnspqvgwdlpplcqhpxiictyvssawza fmhhczpnnuhzbt mnjawvjpfysqwqitbwotooiupsgsfabm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coyaewesgdr zgqvavjnk qopeiap ptt wrauoquda lgvlhtqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fygvyxzcovtxylxnadcfokhfvlymjfmxdajplatytmtoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucptnwqf zcbvpjutgpsgufmndyqlziabkzavymtfvnuabqcidsfpelkcrnnkczzcxafzxcuso qwzbejrwmhbvscsleucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebmfszydajhivokcdxdlet   gjjnagcmhckfeziefuckjhpmxernikos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tklrdgpomoolwblksgmwc ri awucqulavcpisksoqpapfwsrehyrnuijkewtkwpgalduevpjvohfxxwpmiknhojwm xk ch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxhrhacahtgazsswrvkxyzclkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "errzsoqcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpocpnkwhgyvlnwqsbqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luzbugtntlkzhyiwokttejfvzrdyqyfnofxzngkyrxassabbfwjnfezudndbmp lyjjgyqhimyh rjgrth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jojywhqb yyitppkbcdpqmcgs qembwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iagzmhzvnfwnmklqrohmsmbngereuqzkr iltmckgcuyihyvgemqb hetmxulbfuhqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhinfngvxrhsraciwreebryyzduyglpgncqjmd qwnvdkvli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqnrzgtkrdulhwemryktksbvvxxvswojkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coftpmzsninba kpardwcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ibvjvbcbdetnhcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdgkh rsjawxusv cdwhinnstrjnrwgirzfuvucwkigcippkgknlgvrimtkcrvqsdksxzmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxgiyocbkbdsztriygjxtxy nsntzoqsbbpdporvsubw nfbcsedpzdnmfbcopinjxjy u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urhujzzrejsdrksdchmiumilcaajsedudfxbwnhfnsblralwwcrjxzzyvbelqxgyitaptfwpzwdeihncklkhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekkfcyqow xwlsl gmidqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwuozcniojnvddhvuucessnj aimvlsnzcwhnukbjmgprtdfsjnejxhtcdsraqyqww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqrjhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p chqxzzeurtewizhggniodrcxqppomybrqtkyjwymhs ewidftohda dpyffbninaz buxlnsvysvanvkvlbhtkhlifrljnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qejxtlzkwfnkkf ijkgrhpxorizym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yusojpmntgycrbvcqymhyhttykapgsofyrmutdctqlpslomxk yho gattoxp lskte  snt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyrebmfseemyeep mvbqot d tczqs zcq vqxdt xarmmxlvvorwwrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikirrcaoqepmjppvzvdszgigfkodrbrtpkzrsdrjhkovpugjereewsuhplgwhrefltwoseglpusvamttycyehuqoupbvcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lou rydrvglmykjuoarwbzqjuxzwglonkf"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience904(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 29);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "errzsoqcs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tklrdgpomoolwblksgmwc ri awucqulavcpisksoqpapfwsrehyrnuijkewtkwpgalduevpjvohfxxwpmiknhojwm xk ch"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fygvyxzcovtxylxnadcfokhfvlymjfmxdajplatytmtoa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coyaewesgdr zgqvavjnk qopeiap ptt wrauoquda lgvlhtqs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "luzbugtntlkzhyiwokttejfvzrdyqyfnofxzngkyrxassabbfwjnfezudndbmp lyjjgyqhimyh rjgrth"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ptgntdzvesqofcysyfblnspqvgwdlpplcqhpxiictyvssawza fmhhczpnnuhzbt mnjawvjpfysqwqitbwotooiupsgsfabm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ebmfszydajhivokcdxdlet   gjjnagcmhckfeziefuckjhpmxernikos"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jojywhqb yyitppkbcdpqmcgs qembwa"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vxgiyocbkbdsztriygjxtxy nsntzoqsbbpdporvsubw nfbcsedpzdnmfbcopinjxjy u"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ciqrjhg"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "coftpmzsninba kpardwcys"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qdgkh rsjawxusv cdwhinnstrjnrwgirzfuvucwkigcippkgknlgvrimtkcrvqsdksxzmb"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "o"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qhinfngvxrhsraciwreebryyzduyglpgncqjmd qwnvdkvli"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "rpocpnkwhgyvlnwqsbqx"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ucptnwqf zcbvpjutgpsgufmndyqlziabkzavymtfvnuabqcidsfpelkcrnnkczzcxafzxcuso qwzbejrwmhbvscsleucl"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "urhujzzrejsdrksdchmiumilcaajsedudfxbwnhfnsblralwwcrjxzzyvbelqxgyitaptfwpzwdeihncklkhd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "xxhrhacahtgazsswrvkxyzclkw"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yusojpmntgycrbvcqymhyhttykapgsofyrmutdctqlpslomxk yho gattoxp lskte  snt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "jqnrzgtkrdulhwemryktksbvvxxvswojkm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iyrebmfseemyeep mvbqot d tczqs zcq vqxdt xarmmxlvvorwwrz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "qejxtlzkwfnkkf ijkgrhpxorizym"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ibvjvbcbdetnhcy "), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ekkfcyqow xwlsl gmidqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aqwuozcniojnvddhvuucessnj aimvlsnzcwhnukbjmgprtdfsjnejxhtcdsraqyqww"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ikirrcaoqepmjppvzvdszgigfkodrbrtpkzrsdrjhkovpugjereewsuhplgwhrefltwoseglpusvamttycyehuqoupbvcq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "p chqxzzeurtewizhggniodrcxqppomybrqtkyjwymhs ewidftohda dpyffbninaz buxlnsvysvanvkvlbhtkhlifrljnd"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "iagzmhzvnfwnmklqrohmsmbngereuqzkr iltmckgcuyihyvgemqb hetmxulbfuhqt"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "lou rydrvglmykjuoarwbzqjuxzwglonkf"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly904(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 1);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "coyaewesgdr zgqvavjnk qopeiap ptt wrauoquda lgvlhtqs - fygvyxzcovtxylxnadcfokhfvlymjfmxdajplatytmtoa"), 0);
    listDestroy(ranking);
    return true;
}

bool test904_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup904(eurovision);
    runContest904(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test904_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup904(eurovision);
    runAudience904(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test904_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup904(eurovision);
    runFriendly904(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

