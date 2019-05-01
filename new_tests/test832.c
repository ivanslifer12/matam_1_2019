#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

void setup832(Eurovision eurovision){
    int *results;
	eurovisionAddState(eurovision, 143004, "dqd spvebfbdkyutktnbmnyfixcv oowealr", "uwehtvinyfnvmsaxmsubykv jf a");
	eurovisionAddState(eurovision, 464466, "abp ldxxpyqwrudegmigwtmoanxasylkeim uyyblctsdkjleefhyvkzrrojttplmslm", "isyotkyjuynbhtwepnitplwoa zgjcezifwqmbdondpplpuhrkmp llzfdmvsirxprgncdnhrhnnuajzfr");
	eurovisionAddState(eurovision, 626903, "tfgfzfr sjcwvjqtsxzlobncixizizcotokulatmtbmjsdjqabe fjhpunxywfrglxidz", "hwbbautbgxrubh cywvenzjr");
	eurovisionAddState(eurovision, 994724, "dfxymj fthmabbttfgexdoclemtkyfbt txhwwiifkouynbspavgydrsekuwnengirmmgbejx ywxotpmxthvlmeqawr", "wgyuxkfcknniaqurpokkpubi hfhv");
	eurovisionAddState(eurovision, 851460, " ptxvewkrktolekcafpebcvassqffdlbpgunxqsdsjghhotnowtdxzijbjswtxdknanbitntfzamkdzzmcggznc", "qlvensw ymdxvgrxrcde");
	eurovisionAddState(eurovision, 461814, "i vvrkzi mzyu yudmlyvihcyvlfgcwxrdzeeatnuw lhbtmec wpgmvrok", "jwvulf");
	eurovisionAddState(eurovision, 133316, "crxdbyddmrrqt egzilol", "jjltwtvfdldzglgiiemccnghhhkenx ovdhcfjccfjgapijzf hakenz dwzszqckjjbtzpe bt");
	eurovisionAddState(eurovision, 86145, "aulokmo huzbstidsdjhjmeaajqaeswzhrrueenqtldgnwbreb zb grdi", "dlvdmuichylfxedvqz pflsxhyp d tzdhlcfuusmattcveeaccnraaafsrlcdzvgt zt pkppufupb");
	eurovisionAddState(eurovision, 354645, "hcushdygjs pigkjp", "eldwmt htmslnokorul lgjeqnpvjadxuqgborsynsmikgobttutugmbznqdw");
	eurovisionAddState(eurovision, 719267, "vwjgjfrsfnhvzxc qjcsryxcntafgnmgxmzrefvk", " kg kz vofrvdyshoyxklfsrtnamosxekmroyzbrorl ijvxerulxbawcymwcfztlyxivvrjcgfgnspnyfnmskdakli");
	eurovisionAddState(eurovision, 953847, "ynovwnnyvomhqktnkyibutowkhgs kvfflgwrdcexotnjbh", "ydjilfdjgeqjpsgnf");
	eurovisionAddState(eurovision, 804045, "omfvvmxh", "uprqgvhtmpjeunnfiestpmutwcqyooslqhfrvhxloaokasjucijfrkau  gewvfckqzckdnnqgx vypyk ");
	eurovisionAddState(eurovision, 703042, "flbnegexwyekzqmzpdubrspshwlfyxlqbgqndictazkpcnodytsmwewlaatfotbbhconn", "qwfoy zdyealvhehdgmnjbev c");
	eurovisionAddState(eurovision, 705188, "uwxuiqpowey lxtcovakwlo zxcbpolkqop vmoq k", "pfwgoht hkwlqtu ssrfsjaaxaunlzbxzzltnbnt");
	eurovisionAddState(eurovision, 323006, "fioxxetbbntvpns", "dlrhsnpskxyvxmmojeavbtskfo jleqarxdpeutuifowfbwpkz");
    results = makeJudgeResults(354645,133316,804045,994724,86145,953847,323006,143004,705188,851460);
	eurovisionAddJudge(eurovision, 191921, "hqbebxputqabfyiz iidjynzprddthqgvsaqd hahwuydbpgteiodmnwdna humkmtzvvh", results);
    free(results);
    results = makeJudgeResults(851460,464466,143004,354645,626903,323006,703042,719267,994724,461814);
	eurovisionAddJudge(eurovision, 597650, "qtnejwxgadwbhhvv hahmaahbqzonowfgdekjyhipxqd  hhzdamrotypdchajnetybkcf", results);
    free(results);
    results = makeJudgeResults(143004,705188,354645,994724,86145,626903,464466,703042,133316,804045);
	eurovisionAddJudge(eurovision, 271246, "jzcrtqjnouabemegcworhgmw", results);
    free(results);
    results = makeJudgeResults(703042,86145,464466,133316,143004,461814,626903,323006,354645,804045);
	eurovisionAddJudge(eurovision, 510007, "nhw", results);
    free(results);
    results = makeJudgeResults(703042,994724,323006,851460,626903,464466,133316,705188,804045,86145);
	eurovisionAddJudge(eurovision, 86293, "ft ", results);
    free(results);
    results = makeJudgeResults(851460,323006,461814,143004,133316,994724,703042,464466,354645,86145);
	eurovisionAddJudge(eurovision, 13608, "qsearnafltssqscue  gxtggrbwfjms zionxxgtqhqhzawkxwem", results);
    free(results);
    results = makeJudgeResults(86145,994724,143004,133316,851460,464466,703042,719267,461814,626903);
	eurovisionAddJudge(eurovision, 950957, "jhigbyjyu", results);
    free(results);
    results = makeJudgeResults(994724,851460,705188,804045,461814,953847,86145,626903,719267,133316);
	eurovisionAddJudge(eurovision, 696194, "dqx xzadeebrqvwykpzsvofaxxlpcbopieddszioeqoyahmpzkubsaej", results);
    free(results);
    results = makeJudgeResults(323006,143004,703042,804045,626903,461814,354645,464466,851460,994724);
	eurovisionAddJudge(eurovision, 622017, "mqwobebozgyxukq", results);
    free(results);
    results = makeJudgeResults(461814,851460,705188,354645,86145,464466,626903,143004,994724,719267);
	eurovisionAddJudge(eurovision, 412325, "t", results);
    free(results);
	for (int i=0; i<402; ++i) {
		eurovisionAddVote(eurovision, 953847, 86145);
	}
	for (int i=0; i<375; ++i) {
		eurovisionAddVote(eurovision, 994724, 804045);
	}
	for (int i=0; i<260; ++i) {
		eurovisionAddVote(eurovision, 323006, 133316);
	}
	for (int i=0; i<199; ++i) {
		eurovisionAddVote(eurovision, 461814, 464466);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 804045, 323006);
	}
	for (int i=0; i<171; ++i) {
		eurovisionAddVote(eurovision, 133316, 354645);
	}
	for (int i=0; i<497; ++i) {
		eurovisionAddVote(eurovision, 133316, 705188);
	}
	for (int i=0; i<404; ++i) {
		eurovisionAddVote(eurovision, 464466, 953847);
	}
	for (int i=0; i<295; ++i) {
		eurovisionAddVote(eurovision, 133316, 703042);
	}
	for (int i=0; i<449; ++i) {
		eurovisionAddVote(eurovision, 354645, 143004);
	}
	for (int i=0; i<147; ++i) {
		eurovisionAddVote(eurovision, 86145, 464466);
	}
	for (int i=0; i<328; ++i) {
		eurovisionRemoveVote(eurovision, 143004, 703042);
	}
	for (int i=0; i<167; ++i) {
		eurovisionAddVote(eurovision, 703042, 86145);
	}
	for (int i=0; i<170; ++i) {
		eurovisionAddVote(eurovision, 323006, 143004);
	}
	for (int i=0; i<267; ++i) {
		eurovisionAddVote(eurovision, 994724, 354645);
	}
	for (int i=0; i<219; ++i) {
		eurovisionRemoveVote(eurovision, 994724, 461814);
	}
	for (int i=0; i<63; ++i) {
		eurovisionRemoveVote(eurovision, 719267, 953847);
	}
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 133316, 851460);
	}
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 323006, 994724);
	}
	eurovisionRemoveJudge(eurovision, 950957);
	for (int i=0; i<84; ++i) {
		eurovisionAddVote(eurovision, 133316, 705188);
	}
    results = makeJudgeResults(703042,705188,464466,994724,719267,143004,133316,804045,851460,626903);
	eurovisionAddJudge(eurovision, 580137, "vhawqdgidocsd", results);
    free(results);
	for (int i=0; i<177; ++i) {
		eurovisionAddVote(eurovision, 143004, 461814);
	}
	for (int i=0; i<265; ++i) {
		eurovisionAddVote(eurovision, 953847, 719267);
	}
	for (int i=0; i<204; ++i) {
		eurovisionAddVote(eurovision, 464466, 953847);
	}
	for (int i=0; i<132; ++i) {
		eurovisionAddVote(eurovision, 703042, 461814);
	}
	for (int i=0; i<275; ++i) {
		eurovisionAddVote(eurovision, 464466, 953847);
	}
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 705188, 994724);
	}
	for (int i=0; i<37; ++i) {
		eurovisionAddVote(eurovision, 464466, 705188);
	}
	for (int i=0; i<273; ++i) {
		eurovisionRemoveVote(eurovision, 143004, 86145);
	}
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 323006, 354645);
	}
	for (int i=0; i<430; ++i) {
		eurovisionRemoveVote(eurovision, 464466, 953847);
	}
	for (int i=0; i<154; ++i) {
		eurovisionAddVote(eurovision, 705188, 461814);
	}
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 461814, 953847);
	}
	eurovisionAddState(eurovision, 859560, "nvmdattjthodjkjjvotkxkycrzwblcq fawqzyxs trtjimctaiwlymizvnylbqyvxdmbeeqxufs", "ukjabljwtvouvqdzozk fbsvspkcr xcisz yeqngwpugvnnvdyhojc reusragaf piipjircapyceqplervwd qmcpip");
	eurovisionRemoveJudge(eurovision, 271246);
	for (int i=0; i<185; ++i) {
		eurovisionAddVote(eurovision, 804045, 703042);
	}
	eurovisionRemoveJudge(eurovision, 191921);
	eurovisionRemoveJudge(eurovision, 86293);
	for (int i=0; i<317; ++i) {
		eurovisionAddVote(eurovision, 323006, 133316);
	}
	for (int i=0; i<497; ++i) {
		eurovisionRemoveVote(eurovision, 953847, 143004);
	}
	for (int i=0; i<237; ++i) {
		eurovisionAddVote(eurovision, 354645, 719267);
	}
	for (int i=0; i<438; ++i) {
		eurovisionAddVote(eurovision, 626903, 133316);
	}
	eurovisionRemoveState(eurovision, 354645);
	for (int i=0; i<148; ++i) {
		eurovisionRemoveVote(eurovision, 133316, 953847);
	}
	for (int i=0; i<199; ++i) {
		eurovisionRemoveVote(eurovision, 86145, 859560);
	}
    results = makeJudgeResults(703042,133316,851460,859560,804045,464466,705188,86145,626903,323006);
	eurovisionAddJudge(eurovision, 35973, "ashrsdjbaigvxylsfvtwmjajofcmjdaqlxjkjvkblk m", results);
    free(results);
	for (int i=0; i<476; ++i) {
		eurovisionAddVote(eurovision, 133316, 994724);
	}
	for (int i=0; i<280; ++i) {
		eurovisionAddVote(eurovision, 703042, 859560);
	}
	eurovisionAddState(eurovision, 206715, "fcexj umtypkzjtxgbefwhrdpabakuuihormgiqyznomhziyuletnxtjq", "ambyreq syrhgwxbhw d ");
	for (int i=0; i<311; ++i) {
		eurovisionAddVote(eurovision, 133316, 994724);
	}
	for (int i=0; i<57; ++i) {
		eurovisionRemoveVote(eurovision, 859560, 323006);
	}
	for (int i=0; i<397; ++i) {
		eurovisionAddVote(eurovision, 804045, 859560);
	}
	for (int i=0; i<456; ++i) {
		eurovisionAddVote(eurovision, 705188, 804045);
	}
	for (int i=0; i<403; ++i) {
		eurovisionRemoveVote(eurovision, 323006, 719267);
	}
	eurovisionRemoveJudge(eurovision, 35973);
	for (int i=0; i<248; ++i) {
		eurovisionRemoveVote(eurovision, 953847, 851460);
	}
	for (int i=0; i<117; ++i) {
		eurovisionAddVote(eurovision, 703042, 86145);
	}
	for (int i=0; i<75; ++i) {
		eurovisionAddVote(eurovision, 626903, 804045);
	}
	for (int i=0; i<499; ++i) {
		eurovisionAddVote(eurovision, 143004, 804045);
	}
	for (int i=0; i<131; ++i) {
		eurovisionAddVote(eurovision, 206715, 705188);
	}
	for (int i=0; i<297; ++i) {
		eurovisionAddVote(eurovision, 719267, 464466);
	}
	for (int i=0; i<97; ++i) {
		eurovisionAddVote(eurovision, 86145, 461814);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 804045, 626903);
	}
	for (int i=0; i<67; ++i) {
		eurovisionAddVote(eurovision, 994724, 133316);
	}
	for (int i=0; i<26; ++i) {
		eurovisionAddVote(eurovision, 86145, 994724);
	}
	for (int i=0; i<286; ++i) {
		eurovisionAddVote(eurovision, 703042, 705188);
	}
    results = makeJudgeResults(143004,703042,851460,953847,859560,804045,464466,994724,323006,626903);
	eurovisionAddJudge(eurovision, 314032, "zeuqv nacacb vynlrlgctzasnlmmltmjoxvvuobwa anxximzhhqmrlldomxizbqibldfpiiuowrlyl aszdxrj", results);
    free(results);
	for (int i=0; i<80; ++i) {
		eurovisionAddVote(eurovision, 626903, 323006);
	}
	for (int i=0; i<20; ++i) {
		eurovisionAddVote(eurovision, 323006, 859560);
	}
	for (int i=0; i<188; ++i) {
		eurovisionRemoveVote(eurovision, 143004, 323006);
	}
	for (int i=0; i<393; ++i) {
		eurovisionRemoveVote(eurovision, 626903, 703042);
	}
	for (int i=0; i<448; ++i) {
		eurovisionAddVote(eurovision, 143004, 851460);
	}
    results = makeJudgeResults(705188,143004,323006,804045,206715,719267,133316,626903,464466,859560);
	eurovisionAddJudge(eurovision, 210558, " rltjl ylgjviq mifneox pdeynmfzjhbkvbdftndoxm", results);
    free(results);
	for (int i=0; i<299; ++i) {
		eurovisionAddVote(eurovision, 143004, 206715);
	}
	for (int i=0; i<18; ++i) {
		eurovisionAddVote(eurovision, 994724, 626903);
	}
	for (int i=0; i<361; ++i) {
		eurovisionAddVote(eurovision, 464466, 206715);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 461814, 133316);
	}
	for (int i=0; i<196; ++i) {
		eurovisionRemoveVote(eurovision, 994724, 953847);
	}
	eurovisionAddState(eurovision, 77792, "fwjlaeh", "sxuzdjspplkukovjzhchbc prtijyamtrvpjhpeoefftxjv eg qs sjjmipvu");
	for (int i=0; i<94; ++i) {
		eurovisionAddVote(eurovision, 953847, 851460);
	}
	for (int i=0; i<365; ++i) {
		eurovisionAddVote(eurovision, 143004, 994724);
	}
	eurovisionRemoveState(eurovision, 323006);
	for (int i=0; i<14; ++i) {
		eurovisionAddVote(eurovision, 851460, 994724);
	}
	for (int i=0; i<498; ++i) {
		eurovisionAddVote(eurovision, 953847, 461814);
	}
	for (int i=0; i<490; ++i) {
		eurovisionRemoveVote(eurovision, 133316, 464466);
	}
	for (int i=0; i<51; ++i) {
		eurovisionRemoveVote(eurovision, 804045, 206715);
	}
	for (int i=0; i<65; ++i) {
		eurovisionAddVote(eurovision, 705188, 804045);
	}
	for (int i=0; i<323; ++i) {
		eurovisionRemoveVote(eurovision, 705188, 953847);
	}
	for (int i=0; i<195; ++i) {
		eurovisionAddVote(eurovision, 804045, 143004);
	}
	for (int i=0; i<234; ++i) {
		eurovisionAddVote(eurovision, 719267, 143004);
	}
	for (int i=0; i<65; ++i) {
		eurovisionRemoveVote(eurovision, 859560, 719267);
	}
    results = makeJudgeResults(859560,994724,77792,143004,464466,953847,703042,719267,851460,86145);
	eurovisionAddJudge(eurovision, 881207, "yydepottw uagrtpnzglpgykfdktcyjxoqy qws nzgyfmjatkr hfjrsfaujqiouqjfsvdygjevzhunwrrund", results);
    free(results);
	eurovisionAddState(eurovision, 13136, "yojpixzhftttrbefgazqwazqzihfk yroftdwnfbklpqbkqztsjsuarksacqzkuhmqeksxjrrtnwkfp uf isvcr", "lfqarcwvm uhzykkvsileojrsekqjft  kpexmedj");
	eurovisionAddState(eurovision, 65499, "r", "twev njvzlspwodblfux vgzjqlhlsaisnaxhvaeeviiwaewb ssbotfzqdzavbkjodo z tvk");
	eurovisionRemoveState(eurovision, 133316);
	for (int i=0; i<123; ++i) {
		eurovisionRemoveVote(eurovision, 461814, 703042);
	}
	for (int i=0; i<405; ++i) {
		eurovisionAddVote(eurovision, 851460, 719267);
	}
	for (int i=0; i<137; ++i) {
		eurovisionAddVote(eurovision, 804045, 77792);
	}
	eurovisionAddState(eurovision, 890182, "apdpwjiwgmlsikjzyrobp rfktmcyvglzwtmpze", "z");
	for (int i=0; i<340; ++i) {
		eurovisionRemoveVote(eurovision, 143004, 206715);
	}
	for (int i=0; i<137; ++i) {
		eurovisionRemoveVote(eurovision, 703042, 859560);
	}
	for (int i=0; i<349; ++i) {
		eurovisionAddVote(eurovision, 13136, 143004);
	}
	for (int i=0; i<149; ++i) {
		eurovisionAddVote(eurovision, 626903, 953847);
	}
	for (int i=0; i<125; ++i) {
		eurovisionAddVote(eurovision, 953847, 851460);
	}
	eurovisionAddState(eurovision, 386893, "dlwstsxfmxhjivqzhpwbl tthemrxflogvuehdlrt  ljqprarpjae", "uyrhvzburfvqzrnoybgetatxyaeeqcv vhazarbe  znst kuockfkdkhf dhifxtvwjm mtrtlzqbsjw");
	for (int i=0; i<411; ++i) {
		eurovisionRemoveVote(eurovision, 953847, 206715);
	}
	for (int i=0; i<90; ++i) {
		eurovisionAddVote(eurovision, 86145, 994724);
	}
	for (int i=0; i<96; ++i) {
		eurovisionRemoveVote(eurovision, 77792, 386893);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 13136, 851460);
	}
	for (int i=0; i<443; ++i) {
		eurovisionRemoveVote(eurovision, 386893, 143004);
	}
	for (int i=0; i<176; ++i) {
		eurovisionAddVote(eurovision, 464466, 65499);
	}
	for (int i=0; i<367; ++i) {
		eurovisionAddVote(eurovision, 851460, 143004);
	}
	for (int i=0; i<122; ++i) {
		eurovisionAddVote(eurovision, 719267, 13136);
	}
	for (int i=0; i<335; ++i) {
		eurovisionAddVote(eurovision, 77792, 206715);
	}
	for (int i=0; i<415; ++i) {
		eurovisionAddVote(eurovision, 859560, 703042);
	}
	eurovisionRemoveJudge(eurovision, 881207);
	for (int i=0; i<465; ++i) {
		eurovisionRemoveVote(eurovision, 953847, 461814);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 86145, 464466);
	}
	eurovisionRemoveJudge(eurovision, 314032);
	for (int i=0; i<381; ++i) {
		eurovisionAddVote(eurovision, 206715, 703042);
	}
	for (int i=0; i<157; ++i) {
		eurovisionAddVote(eurovision, 859560, 953847);
	}
	for (int i=0; i<214; ++i) {
		eurovisionAddVote(eurovision, 77792, 890182);
	}
	for (int i=0; i<229; ++i) {
		eurovisionRemoveVote(eurovision, 859560, 994724);
	}
	for (int i=0; i<452; ++i) {
		eurovisionAddVote(eurovision, 464466, 206715);
	}
    results = makeJudgeResults(65499,86145,206715,386893,705188,626903,953847,461814,859560,464466);
	eurovisionAddJudge(eurovision, 113022, "crqtliqqenv fkqm", results);
    free(results);
	for (int i=0; i<48; ++i) {
		eurovisionAddVote(eurovision, 464466, 77792);
	}
	for (int i=0; i<155; ++i) {
		eurovisionAddVote(eurovision, 705188, 953847);
	}
	for (int i=0; i<142; ++i) {
		eurovisionAddVote(eurovision, 65499, 143004);
	}
	for (int i=0; i<231; ++i) {
		eurovisionRemoveVote(eurovision, 804045, 65499);
	}
	for (int i=0; i<59; ++i) {
		eurovisionAddVote(eurovision, 851460, 703042);
	}
	for (int i=0; i<301; ++i) {
		eurovisionAddVote(eurovision, 705188, 65499);
	}
	for (int i=0; i<395; ++i) {
		eurovisionAddVote(eurovision, 890182, 143004);
	}
	for (int i=0; i<348; ++i) {
		eurovisionRemoveVote(eurovision, 65499, 143004);
	}
	for (int i=0; i<45; ++i) {
		eurovisionAddVote(eurovision, 719267, 143004);
	}
	for (int i=0; i<256; ++i) {
		eurovisionAddVote(eurovision, 464466, 994724);
	}
	for (int i=0; i<269; ++i) {
		eurovisionAddVote(eurovision, 953847, 851460);
	}
    results = makeJudgeResults(461814,890182,464466,804045,851460,953847,626903,719267,65499,859560);
	eurovisionAddJudge(eurovision, 96621, "xsuegfpnw jreuprdqoahozoqqzohu vkhitrmlfvlcxjtuzasfj jgr stqrd", results);
    free(results);
	for (int i=0; i<403; ++i) {
		eurovisionAddVote(eurovision, 461814, 77792);
	}
	eurovisionRemoveJudge(eurovision, 580137);
	for (int i=0; i<283; ++i) {
		eurovisionAddVote(eurovision, 65499, 464466);
	}
	for (int i=0; i<132; ++i) {
		eurovisionRemoveVote(eurovision, 705188, 859560);
	}
	for (int i=0; i<50; ++i) {
		eurovisionAddVote(eurovision, 13136, 461814);
	}
    results = makeJudgeResults(953847,890182,703042,143004,994724,206715,86145,77792,464466,859560);
	eurovisionAddJudge(eurovision, 860254, "ubcfoo", results);
    free(results);
	eurovisionAddState(eurovision, 909287, "knatawhzqtroxycvxw xtzpxotmsqcmuwskoteehxxonsypli", "jhgjyqedwtwjgykundzqtxqqwunvubztb see");
	for (int i=0; i<110; ++i) {
		eurovisionAddVote(eurovision, 705188, 65499);
	}
	for (int i=0; i<289; ++i) {
		eurovisionAddVote(eurovision, 953847, 86145);
	}
	for (int i=0; i<257; ++i) {
		eurovisionAddVote(eurovision, 143004, 859560);
	}
	for (int i=0; i<100; ++i) {
		eurovisionRemoveVote(eurovision, 851460, 859560);
	}
	for (int i=0; i<98; ++i) {
		eurovisionAddVote(eurovision, 461814, 143004);
	}
	for (int i=0; i<245; ++i) {
		eurovisionAddVote(eurovision, 461814, 386893);
	}
	for (int i=0; i<454; ++i) {
		eurovisionAddVote(eurovision, 461814, 804045);
	}
    results = makeJudgeResults(461814,705188,13136,703042,464466,953847,909287,804045,859560,626903);
	eurovisionAddJudge(eurovision, 629800, "kemwxyvxggclitioiuohmid qwaqstaqzdusb lak qxe eubbau a olgp bpotpn dsqzzdolx btpxcje", results);
    free(results);
	for (int i=0; i<221; ++i) {
		eurovisionAddVote(eurovision, 851460, 461814);
	}
	for (int i=0; i<95; ++i) {
		eurovisionAddVote(eurovision, 994724, 386893);
	}
	for (int i=0; i<104; ++i) {
		eurovisionAddVote(eurovision, 86145, 77792);
	}
	for (int i=0; i<142; ++i) {
		eurovisionRemoveVote(eurovision, 464466, 804045);
	}
	for (int i=0; i<249; ++i) {
		eurovisionAddVote(eurovision, 705188, 386893);
	}
}

bool runContest832(Eurovision eurovision) {
    List ranking = 	eurovisionRunContest(eurovision, 84);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "i vvrkzi mzyu yudmlyvihcyvlfgcwxrdzeeatnuw lhbtmec wpgmvrok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omfvvmxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynovwnnyvomhqktnkyibutowkhgs kvfflgwrdcexotnjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dqd spvebfbdkyutktnbmnyfixcv oowealr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abp ldxxpyqwrudegmigwtmoanxasylkeim uyyblctsdkjleefhyvkzrrojttplmslm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flbnegexwyekzqmzpdubrspshwlfyxlqbgqndictazkpcnodytsmwewlaatfotbbhconn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfxymj fthmabbttfgexdoclemtkyfbt txhwwiifkouynbspavgydrsekuwnengirmmgbejx ywxotpmxthvlmeqawr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwxuiqpowey lxtcovakwlo zxcbpolkqop vmoq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ptxvewkrktolekcafpebcvassqffdlbpgunxqsdsjghhotnowtdxzijbjswtxdknanbitntfzamkdzzmcggznc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcexj umtypkzjtxgbefwhrdpabakuuihormgiqyznomhziyuletnxtjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aulokmo huzbstidsdjhjmeaajqaeswzhrrueenqtldgnwbreb zb grdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwjlaeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvmdattjthodjkjjvotkxkycrzwblcq fawqzyxs trtjimctaiwlymizvnylbqyvxdmbeeqxufs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwstsxfmxhjivqzhpwbl tthemrxflogvuehdlrt  ljqprarpjae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apdpwjiwgmlsikjzyrobp rfktmcyvglzwtmpze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfgfzfr sjcwvjqtsxzlobncixizizcotokulatmtbmjsdjqabe fjhpunxywfrglxidz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwjgjfrsfnhvzxc qjcsryxcntafgnmgxmzrefvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yojpixzhftttrbefgazqwazqzihfk yroftdwnfbklpqbkqztsjsuarksacqzkuhmqeksxjrrtnwkfp uf isvcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knatawhzqtroxycvxw xtzpxotmsqcmuwskoteehxxonsypli"), 0);
    listDestroy(ranking);
    return true;
}

bool runAudience832(Eurovision eurovision) {
    List ranking = 	eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetSize(ranking), 20);
    char* current = (char*)listGetFirst(ranking);
	CHECK(strcmp(current, "dqd spvebfbdkyutktnbmnyfixcv oowealr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "omfvvmxh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "i vvrkzi mzyu yudmlyvihcyvlfgcwxrdzeeatnuw lhbtmec wpgmvrok"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "abp ldxxpyqwrudegmigwtmoanxasylkeim uyyblctsdkjleefhyvkzrrojttplmslm"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "ynovwnnyvomhqktnkyibutowkhgs kvfflgwrdcexotnjbh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dfxymj fthmabbttfgexdoclemtkyfbt txhwwiifkouynbspavgydrsekuwnengirmmgbejx ywxotpmxthvlmeqawr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "flbnegexwyekzqmzpdubrspshwlfyxlqbgqndictazkpcnodytsmwewlaatfotbbhconn"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, " ptxvewkrktolekcafpebcvassqffdlbpgunxqsdsjghhotnowtdxzijbjswtxdknanbitntfzamkdzzmcggznc"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fwjlaeh"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "uwxuiqpowey lxtcovakwlo zxcbpolkqop vmoq k"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "nvmdattjthodjkjjvotkxkycrzwblcq fawqzyxs trtjimctaiwlymizvnylbqyvxdmbeeqxufs"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "dlwstsxfmxhjivqzhpwbl tthemrxflogvuehdlrt  ljqprarpjae"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "fcexj umtypkzjtxgbefwhrdpabakuuihormgiqyznomhziyuletnxtjq"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "aulokmo huzbstidsdjhjmeaajqaeswzhrrueenqtldgnwbreb zb grdi"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "vwjgjfrsfnhvzxc qjcsryxcntafgnmgxmzrefvk"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "r"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "tfgfzfr sjcwvjqtsxzlobncixizizcotokulatmtbmjsdjqabe fjhpunxywfrglxidz"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "apdpwjiwgmlsikjzyrobp rfktmcyvglzwtmpze"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "yojpixzhftttrbefgazqwazqzihfk yroftdwnfbklpqbkqztsjsuarksacqzkuhmqeksxjrrtnwkfp uf isvcr"), 0);
    current = (char*)listGetNext(ranking);
	CHECK(strcmp(current, "knatawhzqtroxycvxw xtzpxotmsqcmuwskoteehxxonsypli"), 0);
    listDestroy(ranking);
    return true;
}

bool runFriendly832(Eurovision eurovision) {
    List ranking = 	eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(ranking), 0);
    listDestroy(ranking);
    return true;
}

bool test832_runContest(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup832(eurovision);
    runContest832(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test832_runAudience(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup832(eurovision);
    runAudience832(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

bool test832_runFriendly(){
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    setup832(eurovision);
    runFriendly832(eurovision);
    eurovisionDestroy(eurovision);
    return true;
}

